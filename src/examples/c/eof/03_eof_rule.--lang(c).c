/* Generated by re2c */
#line 1 "c/eof/03_eof_rule.--lang(c).re"
#include <assert.h>

// expect a null-terminated string
static int lex(const char *str, unsigned int len)
{
    const char *YYCURSOR = str, *YYLIMIT = str + len, *YYMARKER;
    int count = 0;

loop:
    
#line 14 "c/eof/03_eof_rule.--lang(c).c"
{
	char yych;
	yych = *YYCURSOR;
	switch (yych) {
	case ' ':	goto yy4;
	case '\'':	goto yy7;
	default:
		if (YYLIMIT <= YYCURSOR) goto yyeof1;
		goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 15 "c/eof/03_eof_rule.--lang(c).re"
	{ return -1; }
#line 30 "c/eof/03_eof_rule.--lang(c).c"
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
	case ' ':	goto yy4;
	default:	goto yy6;
	}
yy6:
#line 18 "c/eof/03_eof_rule.--lang(c).re"
	{ goto loop; }
#line 40 "c/eof/03_eof_rule.--lang(c).c"
yy7:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych >= 0x01) goto yy9;
	if (YYLIMIT <= YYCURSOR) goto yy3;
yy8:
	yych = *++YYCURSOR;
yy9:
	switch (yych) {
	case '\'':	goto yy10;
	case '\\':	goto yy12;
	default:
		if (YYLIMIT <= YYCURSOR) goto yy13;
		goto yy8;
	}
yy10:
	++YYCURSOR;
#line 17 "c/eof/03_eof_rule.--lang(c).re"
	{ ++count; goto loop; }
#line 59 "c/eof/03_eof_rule.--lang(c).c"
yy12:
	yych = *++YYCURSOR;
	if (yych <= 0x00) {
		if (YYLIMIT <= YYCURSOR) goto yy13;
		goto yy8;
	}
	goto yy8;
yy13:
	YYCURSOR = YYMARKER;
	goto yy3;
yyeof1:
#line 16 "c/eof/03_eof_rule.--lang(c).re"
	{ return count; }
#line 73 "c/eof/03_eof_rule.--lang(c).c"
}
#line 20 "c/eof/03_eof_rule.--lang(c).re"

}

#define TEST(s, r) assert(lex(s, sizeof(s) - 1) == r)
int main()
{
    TEST("", 0);
    TEST("'qu\0tes' 'are' 'fine: \\'' ", 3);
    TEST("'unterminated\\'", -1);
    return 0;
}
