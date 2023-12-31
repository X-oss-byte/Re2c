// re2c $INPUT -o $OUTPUT -u --encoding-policy ignore
#include <stdio.h>

#define YYCTYPE unsigned int
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
No:
	/*!re2c
		re2c:yyfill:enable = 0;
		No = [\xb2-\xb3\xb9-\xb9\xbc-\xbe\u09f4-\u09f9\u0b72-\u0b77\u0bf0-\u0bf2\u0c78-\u0c7e\u0d58-\u0d5e\u0d70-\u0d78\u0f2a-\u0f33\u1369-\u137c\u17f0-\u17f9\u19da-\u19da\u2070-\u2070\u2074-\u2079\u2080-\u2089\u2150-\u215f\u2189-\u2189\u2460-\u249b\u24ea-\u24ff\u2776-\u2793\u2cfd-\u2cfd\u3192-\u3195\u3220-\u3229\u3248-\u324f\u3251-\u325f\u3280-\u3289\u32b1-\u32bf\ua830-\ua835\U00010107-\U00010133\U00010175-\U00010178\U0001018a-\U0001018b\U000102e1-\U000102fb\U00010320-\U00010323\U00010858-\U0001085f\U00010879-\U0001087f\U000108a7-\U000108af\U000108fb-\U000108ff\U00010916-\U0001091b\U000109bc-\U000109bd\U000109c0-\U000109cf\U000109d2-\U000109ff\U00010a40-\U00010a48\U00010a7d-\U00010a7e\U00010a9d-\U00010a9f\U00010aeb-\U00010aef\U00010b58-\U00010b5f\U00010b78-\U00010b7f\U00010ba9-\U00010baf\U00010cfa-\U00010cff\U00010e60-\U00010e7e\U00010f1d-\U00010f26\U00010f51-\U00010f54\U00011052-\U00011065\U000111e1-\U000111f4\U0001173a-\U0001173b\U000118ea-\U000118f2\U00011c5a-\U00011c6c\U00011fc0-\U00011fd4\U00016b5b-\U00016b61\U00016e80-\U00016e96\U0001d2e0-\U0001d2f3\U0001d360-\U0001d378\U0001e8c7-\U0001e8cf\U0001ec71-\U0001ecab\U0001ecad-\U0001ecaf\U0001ecb1-\U0001ecb4\U0001ed01-\U0001ed2d\U0001ed2f-\U0001ed3d\U0001f100-\U0001f10c];
		No { goto No; }
		* { return YYCURSOR == limit; }
	*/
}
static const unsigned int chars_No [] = {0xb2,0xb3,  0xb9,0xb9,  0xbc,0xbe,  0x9f4,0x9f9,  0xb72,0xb77,  0xbf0,0xbf2,  0xc78,0xc7e,  0xd58,0xd5e,  0xd70,0xd78,  0xf2a,0xf33,  0x1369,0x137c,  0x17f0,0x17f9,  0x19da,0x19da,  0x2070,0x2070,  0x2074,0x2079,  0x2080,0x2089,  0x2150,0x215f,  0x2189,0x2189,  0x2460,0x249b,  0x24ea,0x24ff,  0x2776,0x2793,  0x2cfd,0x2cfd,  0x3192,0x3195,  0x3220,0x3229,  0x3248,0x324f,  0x3251,0x325f,  0x3280,0x3289,  0x32b1,0x32bf,  0xa830,0xa835,  0x10107,0x10133,  0x10175,0x10178,  0x1018a,0x1018b,  0x102e1,0x102fb,  0x10320,0x10323,  0x10858,0x1085f,  0x10879,0x1087f,  0x108a7,0x108af,  0x108fb,0x108ff,  0x10916,0x1091b,  0x109bc,0x109bd,  0x109c0,0x109cf,  0x109d2,0x109ff,  0x10a40,0x10a48,  0x10a7d,0x10a7e,  0x10a9d,0x10a9f,  0x10aeb,0x10aef,  0x10b58,0x10b5f,  0x10b78,0x10b7f,  0x10ba9,0x10baf,  0x10cfa,0x10cff,  0x10e60,0x10e7e,  0x10f1d,0x10f26,  0x10f51,0x10f54,  0x11052,0x11065,  0x111e1,0x111f4,  0x1173a,0x1173b,  0x118ea,0x118f2,  0x11c5a,0x11c6c,  0x11fc0,0x11fd4,  0x16b5b,0x16b61,  0x16e80,0x16e96,  0x1d2e0,0x1d2f3,  0x1d360,0x1d378,  0x1e8c7,0x1e8cf,  0x1ec71,0x1ecab,  0x1ecad,0x1ecaf,  0x1ecb1,0x1ecb4,  0x1ed01,0x1ed2d,  0x1ed2f,0x1ed3d,  0x1f100,0x1f10c,  0x0,0x0};
static unsigned int encode_utf32 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
			*s++ = j;
	return s - s_start;
}

int main ()
{
	unsigned int * buffer_No = new unsigned int [889];
	YYCTYPE * s = (YYCTYPE *) buffer_No;
	unsigned int buffer_len = encode_utf32 (chars_No, sizeof (chars_No) / sizeof (unsigned int), buffer_No);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_No[i];
	if (!scan (s, s + buffer_len))
		printf("test 'No' failed\n");
	delete [] buffer_No;
	return 0;
}
