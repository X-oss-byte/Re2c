// Code generated by re2c, DO NOT EDIT.
//go:generate re2go "$GOFILE" -o "$OUTPUT"
package main                             //
                                         //
func lex(str string) int {               // Go code
    var cursor int                       //

    
{
	var yych byte
	yych = str[cursor]
	if (yych <= '0') {
		goto yy2
	}
	if (yych <= '9') {
		goto yy4
	}
yy2:
	cursor += 1
	{ return 1; }
yy4:
	cursor += 1
	yych = str[cursor]
	if (yych <= '/') {
		goto yy6
	}
	if (yych <= '9') {
		goto yy4
	}
yy6:
	{ return 0; }
}

}                                        //
                                         //
func main() {                            //
    if lex("1234\x00") != 0 {            // Go code
        panic("failed!")                 //
    }                                    //
}                                        //
