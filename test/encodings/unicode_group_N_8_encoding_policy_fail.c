/* Generated by re2c */
#line 1 "encodings/unicode_group_N_8_encoding_policy_fail.re"
// re2c $INPUT -o $OUTPUT -8 --encoding-policy fail
#include <stdio.h>
#include "utf8.h"
#define YYCTYPE unsigned char
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
N:
	
#line 14 "encodings/unicode_group_N_8_encoding_policy_fail.c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy3;
		case 0xC2: goto yy4;
		case 0xD9: goto yy5;
		case 0xDB: goto yy6;
		case 0xDF: goto yy7;
		case 0xE0: goto yy8;
		case 0xE1: goto yy9;
		case 0xE2: goto yy10;
		case 0xE3: goto yy11;
		case 0xEA: goto yy12;
		case 0xEF: goto yy13;
		case 0xF0: goto yy14;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
yy2:
#line 14 "encodings/unicode_group_N_8_encoding_policy_fail.re"
	{ return YYCURSOR == limit; }
#line 47 "encodings/unicode_group_N_8_encoding_policy_fail.c"
yy3:
	++YYCURSOR;
#line 13 "encodings/unicode_group_N_8_encoding_policy_fail.re"
	{ goto N; }
#line 52 "encodings/unicode_group_N_8_encoding_policy_fail.c"
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB2:
		case 0xB3:
		case 0xB9:
		case 0xBC:
		case 0xBD:
		case 0xBE: goto yy3;
		default: goto yy2;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9: goto yy3;
		default: goto yy2;
	}
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9: goto yy3;
		default: goto yy2;
	}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89: goto yy3;
		default: goto yy2;
	}
yy8:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0xA5:
		case 0xA9:
		case 0xAB:
		case 0xB3:
		case 0xB7: goto yy15;
		case 0xA7: goto yy17;
		case 0xAD: goto yy18;
		case 0xAF: goto yy19;
		case 0xB1: goto yy20;
		case 0xB5: goto yy21;
		case 0xB9:
		case 0xBB: goto yy22;
		case 0xBC: goto yy23;
		default: goto yy2;
	}
yy9:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x81: goto yy24;
		case 0x82:
		case 0xA0:
		case 0xAD: goto yy22;
		case 0x8D: goto yy25;
		case 0x9B: goto yy26;
		case 0x9F: goto yy27;
		case 0xA5: goto yy28;
		case 0xA7: goto yy29;
		case 0xAA:
		case 0xB1: goto yy30;
		case 0xAE: goto yy31;
		default: goto yy2;
	}
yy10:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x81: goto yy32;
		case 0x82: goto yy24;
		case 0x85: goto yy33;
		case 0x86: goto yy34;
		case 0x91: goto yy35;
		case 0x92: goto yy36;
		case 0x93: goto yy37;
		case 0x9D: goto yy38;
		case 0x9E: goto yy39;
		case 0xB3: goto yy40;
		default: goto yy2;
	}
yy11:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x80: goto yy41;
		case 0x86: goto yy42;
		case 0x88: goto yy43;
		case 0x89: goto yy44;
		case 0x8A: goto yy45;
		default: goto yy2;
	}
yy12:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x98: goto yy43;
		case 0x9B: goto yy15;
		case 0xA0: goto yy46;
		case 0xA3:
		case 0xA9: goto yy22;
		case 0xA4: goto yy24;
		case 0xA7: goto yy47;
		case 0xAF: goto yy31;
		default: goto yy2;
	}
yy13:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0xBC: goto yy22;
		default: goto yy2;
	}
yy14:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x90: goto yy48;
		case 0x91: goto yy49;
		case 0x92: goto yy50;
		case 0x96: goto yy51;
		case 0x9D: goto yy52;
		case 0x9E: goto yy53;
		case 0x9F: goto yy54;
		default: goto yy2;
	}
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF: goto yy3;
		default: goto yy16;
	}
yy16:
	YYCURSOR = YYMARKER;
	goto yy2;
yy17:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9: goto yy3;
		default: goto yy16;
	}
yy18:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7: goto yy3;
		default: goto yy16;
	}
yy19:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2: goto yy3;
		default: goto yy16;
	}
yy20:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE: goto yy3;
		default: goto yy16;
	}
yy21:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8: goto yy3;
		default: goto yy16;
	}
yy22:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99: goto yy3;
		default: goto yy16;
	}
yy23:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3: goto yy3;
		default: goto yy16;
	}
yy24:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89: goto yy3;
		default: goto yy16;
	}
yy25:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC: goto yy3;
		default: goto yy16;
	}
yy26:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAE:
		case 0xAF:
		case 0xB0: goto yy3;
		default: goto yy16;
	}
yy27:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9: goto yy3;
		default: goto yy16;
	}
yy28:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F: goto yy3;
		default: goto yy16;
	}
yy29:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A: goto yy3;
		default: goto yy16;
	}
yy30:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99: goto yy3;
		default: goto yy16;
	}
yy31:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9: goto yy3;
		default: goto yy16;
	}
yy32:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB0:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9: goto yy3;
		default: goto yy16;
	}
yy33:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy3;
		default: goto yy16;
	}
yy34:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89: goto yy3;
		default: goto yy16;
	}
yy35:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy3;
		default: goto yy16;
	}
yy36:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B: goto yy3;
		default: goto yy16;
	}
yy37:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy3;
		default: goto yy16;
	}
yy38:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy3;
		default: goto yy16;
	}
yy39:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93: goto yy3;
		default: goto yy16;
	}
yy40:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xBD: goto yy3;
		default: goto yy16;
	}
yy41:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x87:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xB8:
		case 0xB9:
		case 0xBA: goto yy3;
		default: goto yy16;
	}
yy42:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95: goto yy3;
		default: goto yy16;
	}
yy43:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9: goto yy3;
		default: goto yy16;
	}
yy44:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F: goto yy3;
		default: goto yy16;
	}
yy45:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy3;
		default: goto yy16;
	}
yy46:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5: goto yy3;
		default: goto yy16;
	}
yy47:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9: goto yy3;
		default: goto yy16;
	}
yy48:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x84: goto yy55;
		case 0x85: goto yy56;
		case 0x86: goto yy57;
		case 0x8B: goto yy58;
		case 0x8C: goto yy59;
		case 0x8D: goto yy60;
		case 0x8F: goto yy61;
		case 0x92: goto yy43;
		case 0xA1: goto yy62;
		case 0xA2: goto yy63;
		case 0xA3: goto yy64;
		case 0xA4: goto yy65;
		case 0xA6: goto yy66;
		case 0xA7: goto yy67;
		case 0xA9: goto yy68;
		case 0xAA: goto yy69;
		case 0xAB: goto yy70;
		case 0xAD: goto yy71;
		case 0xAE: goto yy72;
		case 0xB3: goto yy73;
		case 0xB4: goto yy31;
		case 0xB9: goto yy74;
		case 0xBC: goto yy75;
		case 0xBD: goto yy76;
		default: goto yy16;
	}
yy49:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x81: goto yy77;
		case 0x83:
		case 0x8B: goto yy31;
		case 0x84: goto yy38;
		case 0x87: goto yy78;
		case 0x91:
		case 0x93:
		case 0x99:
		case 0xB5: goto yy22;
		case 0x9B: goto yy24;
		case 0x9C: goto yy79;
		case 0xA3: goto yy80;
		case 0xB1: goto yy81;
		case 0xB6: goto yy43;
		case 0xBF: goto yy82;
		default: goto yy16;
	}
yy50:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x90: goto yy83;
		case 0x91: goto yy84;
		default: goto yy16;
	}
yy51:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA9: goto yy43;
		case 0xAD: goto yy85;
		case 0xBA: goto yy86;
		default: goto yy16;
	}
yy52:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x8B: goto yy23;
		case 0x8D: goto yy87;
		case 0x9F: goto yy88;
		default: goto yy16;
	}
yy53:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x85: goto yy24;
		case 0x8B: goto yy31;
		case 0xA3: goto yy89;
		case 0xA5: goto yy22;
		case 0xB1: goto yy90;
		case 0xB2: goto yy91;
		case 0xB4: goto yy92;
		default: goto yy16;
	}
yy54:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x84: goto yy93;
		default: goto yy16;
	}
yy55:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3: goto yy3;
		default: goto yy16;
	}
yy56:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8: goto yy3;
		default: goto yy16;
	}
yy57:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x8A:
		case 0x8B: goto yy3;
		default: goto yy16;
	}
yy58:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB: goto yy3;
		default: goto yy16;
	}
yy59:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3: goto yy3;
		default: goto yy16;
	}
yy60:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x81:
		case 0x8A: goto yy3;
		default: goto yy16;
	}
yy61:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95: goto yy3;
		default: goto yy16;
	}
yy62:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy3;
		default: goto yy16;
	}
yy63:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF: goto yy3;
		default: goto yy16;
	}
yy64:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy3;
		default: goto yy16;
	}
yy65:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B: goto yy3;
		default: goto yy16;
	}
yy66:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xBC:
		case 0xBD: goto yy3;
		default: goto yy16;
	}
yy67:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy3;
		default: goto yy16;
	}
yy68:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0xBD:
		case 0xBE: goto yy3;
		default: goto yy16;
	}
yy69:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x9D:
		case 0x9E:
		case 0x9F: goto yy3;
		default: goto yy16;
	}
yy70:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF: goto yy3;
		default: goto yy16;
	}
yy71:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy3;
		default: goto yy16;
	}
yy72:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF: goto yy3;
		default: goto yy16;
	}
yy73:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy3;
		default: goto yy16;
	}
yy74:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE: goto yy3;
		default: goto yy16;
	}
yy75:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6: goto yy3;
		default: goto yy16;
	}
yy76:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94: goto yy3;
		default: goto yy16;
	}
yy77:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF: goto yy3;
		default: goto yy16;
	}
yy78:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4: goto yy3;
		default: goto yy16;
	}
yy79:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB: goto yy3;
		default: goto yy16;
	}
yy80:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2: goto yy3;
		default: goto yy16;
	}
yy81:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC: goto yy3;
		default: goto yy16;
	}
yy82:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94: goto yy3;
		default: goto yy16;
	}
yy83:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy3;
		default: goto yy16;
	}
yy84:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE: goto yy3;
		default: goto yy16;
	}
yy85:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xA0:
		case 0xA1: goto yy3;
		default: goto yy16;
	}
yy86:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96: goto yy3;
		default: goto yy16;
	}
yy87:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8: goto yy3;
		default: goto yy16;
	}
yy88:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x8E:
		case 0x8F:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy3;
		default: goto yy16;
	}
yy89:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F: goto yy3;
		default: goto yy16;
	}
yy90:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD:
		case 0xBE:
		case 0xBF: goto yy3;
		default: goto yy16;
	}
yy91:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAD:
		case 0xAE:
		case 0xAF:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4: goto yy3;
		default: goto yy16;
	}
yy92:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C:
		case 0x8D:
		case 0x8E:
		case 0x8F:
		case 0x90:
		case 0x91:
		case 0x92:
		case 0x93:
		case 0x94:
		case 0x95:
		case 0x96:
		case 0x97:
		case 0x98:
		case 0x99:
		case 0x9A:
		case 0x9B:
		case 0x9C:
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xA0:
		case 0xA1:
		case 0xA2:
		case 0xA3:
		case 0xA4:
		case 0xA5:
		case 0xA6:
		case 0xA7:
		case 0xA8:
		case 0xA9:
		case 0xAA:
		case 0xAB:
		case 0xAC:
		case 0xAD:
		case 0xAF:
		case 0xB0:
		case 0xB1:
		case 0xB2:
		case 0xB3:
		case 0xB4:
		case 0xB5:
		case 0xB6:
		case 0xB7:
		case 0xB8:
		case 0xB9:
		case 0xBA:
		case 0xBB:
		case 0xBC:
		case 0xBD: goto yy3;
		default: goto yy16;
	}
yy93:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x80:
		case 0x81:
		case 0x82:
		case 0x83:
		case 0x84:
		case 0x85:
		case 0x86:
		case 0x87:
		case 0x88:
		case 0x89:
		case 0x8A:
		case 0x8B:
		case 0x8C: goto yy3;
		default: goto yy16;
	}
}
#line 15 "encodings/unicode_group_N_8_encoding_policy_fail.re"

}
static const unsigned int chars_N [] = {0x30,0x39,  0xb2,0xb3,  0xb9,0xb9,  0xbc,0xbe,  0x660,0x669,  0x6f0,0x6f9,  0x7c0,0x7c9,  0x966,0x96f,  0x9e6,0x9ef,  0x9f4,0x9f9,  0xa66,0xa6f,  0xae6,0xaef,  0xb66,0xb6f,  0xb72,0xb77,  0xbe6,0xbf2,  0xc66,0xc6f,  0xc78,0xc7e,  0xce6,0xcef,  0xd58,0xd5e,  0xd66,0xd78,  0xde6,0xdef,  0xe50,0xe59,  0xed0,0xed9,  0xf20,0xf33,  0x1040,0x1049,  0x1090,0x1099,  0x1369,0x137c,  0x16ee,0x16f0,  0x17e0,0x17e9,  0x17f0,0x17f9,  0x1810,0x1819,  0x1946,0x194f,  0x19d0,0x19da,  0x1a80,0x1a89,  0x1a90,0x1a99,  0x1b50,0x1b59,  0x1bb0,0x1bb9,  0x1c40,0x1c49,  0x1c50,0x1c59,  0x2070,0x2070,  0x2074,0x2079,  0x2080,0x2089,  0x2150,0x2182,  0x2185,0x2189,  0x2460,0x249b,  0x24ea,0x24ff,  0x2776,0x2793,  0x2cfd,0x2cfd,  0x3007,0x3007,  0x3021,0x3029,  0x3038,0x303a,  0x3192,0x3195,  0x3220,0x3229,  0x3248,0x324f,  0x3251,0x325f,  0x3280,0x3289,  0x32b1,0x32bf,  0xa620,0xa629,  0xa6e6,0xa6ef,  0xa830,0xa835,  0xa8d0,0xa8d9,  0xa900,0xa909,  0xa9d0,0xa9d9,  0xa9f0,0xa9f9,  0xaa50,0xaa59,  0xabf0,0xabf9,  0xff10,0xff19,  0x10107,0x10133,  0x10140,0x10178,  0x1018a,0x1018b,  0x102e1,0x102fb,  0x10320,0x10323,  0x10341,0x10341,  0x1034a,0x1034a,  0x103d1,0x103d5,  0x104a0,0x104a9,  0x10858,0x1085f,  0x10879,0x1087f,  0x108a7,0x108af,  0x108fb,0x108ff,  0x10916,0x1091b,  0x109bc,0x109bd,  0x109c0,0x109cf,  0x109d2,0x109ff,  0x10a40,0x10a48,  0x10a7d,0x10a7e,  0x10a9d,0x10a9f,  0x10aeb,0x10aef,  0x10b58,0x10b5f,  0x10b78,0x10b7f,  0x10ba9,0x10baf,  0x10cfa,0x10cff,  0x10d30,0x10d39,  0x10e60,0x10e7e,  0x10f1d,0x10f26,  0x10f51,0x10f54,  0x11052,0x1106f,  0x110f0,0x110f9,  0x11136,0x1113f,  0x111d0,0x111d9,  0x111e1,0x111f4,  0x112f0,0x112f9,  0x11450,0x11459,  0x114d0,0x114d9,  0x11650,0x11659,  0x116c0,0x116c9,  0x11730,0x1173b,  0x118e0,0x118f2,  0x11c50,0x11c6c,  0x11d50,0x11d59,  0x11da0,0x11da9,  0x11fc0,0x11fd4,  0x12400,0x1246e,  0x16a60,0x16a69,  0x16b50,0x16b59,  0x16b5b,0x16b61,  0x16e80,0x16e96,  0x1d2e0,0x1d2f3,  0x1d360,0x1d378,  0x1d7ce,0x1d7ff,  0x1e140,0x1e149,  0x1e2f0,0x1e2f9,  0x1e8c7,0x1e8cf,  0x1e950,0x1e959,  0x1ec71,0x1ecab,  0x1ecad,0x1ecaf,  0x1ecb1,0x1ecb4,  0x1ed01,0x1ed2d,  0x1ed2f,0x1ed3d,  0x1f100,0x1f10c,  0x0,0x0};
static unsigned int encode_utf8 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count - 2; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
			s += re2c::utf8::rune_to_bytes (s, j);
	re2c::utf8::rune_to_bytes (s, ranges[ranges_count - 1]);
	return s - s_start + 1;
}

int main ()
{
	unsigned int * buffer_N = new unsigned int [7020];
	YYCTYPE * s = (YYCTYPE *) buffer_N;
	unsigned int buffer_len = encode_utf8 (chars_N, sizeof (chars_N) / sizeof (unsigned int), buffer_N);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_N[i];
	if (!scan (s, s + buffer_len))
		printf("test 'N' failed\n");
	delete [] buffer_N;
	return 0;
}
