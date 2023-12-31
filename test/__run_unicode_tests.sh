#!/usr/bin/env bash

if [[ $# -ne 2 ]]; then
    echo "usage: $0 SRCDIR BLDDIR"
    exit 1
fi

srcdir="$1"
blddir="$2"

for fre in encodings/unicode_{blocks,group_*}_{8,x,u}_encoding_policy_{ignore,substitute,fail}.re; do
    echo $fre
    fc=${fre/.re/.c}
    fe=${fre/.re/}
    opts="$(head -n 1 $fre | sed -E 's/.*OUTPUT(.*)/\1/')"

    # compile re2c source
    $blddir/re2c $opts $fre -o$fc --no-version --no-generation-date

    read line < $fc
    if [[ $line =~ "error: " ]]; then
        echo "*** re2c error, skipping ***"
        continue
    fi

    # compile C source
    g++ -W -Wall -Wextra \
        -I $srcdir \
        -I $blddir \
        -I $srcdir/src/encoding \
        -I $srcdir/src/encoding \
        $srcdir/src/encoding/range_suffix.cc \
        $srcdir/src/encoding/utf8.cc \
        $srcdir/src/encoding/utf16.cc \
        $srcdir/src/regexp/regexp.cc \
        $srcdir/src/util/range.cc \
        $fc \
        -o $fe

    # execute (runs silently if OK, otherwize report an error)
    ./$fe

    rm -f $fe
done

echo "note: run-time failures for surrogates with '--encoding-policy substitute' are OK"
echo "note: compile-time failures for surrogates with '--encoding-policy fail' are OK"
