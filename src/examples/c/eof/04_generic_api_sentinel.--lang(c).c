/* Generated by re2c */
#line 1 "c/eof/04_generic_api_sentinel.--lang(c).re"
#include <assert.h>
#include <stdlib.h>
#include <string.h>

// expect a string without terminating null
static int lex(const char *str, unsigned int len)
{
    const char *cur = str, *lim = str + len;
    int count = 0;

loop:
    
#line 16 "c/eof/04_generic_api_sentinel.--lang(c).c"
{
	char yych;
	yych = cur < lim ? *cur : 0;
	switch (yych) {
	case 0x00:	goto yy2;
	case ' ':	goto yy6;
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy9;
	default:	goto yy4;
	}
yy2:
	++cur;
#line 22 "c/eof/04_generic_api_sentinel.--lang(c).re"
	{ return count; }
#line 55 "c/eof/04_generic_api_sentinel.--lang(c).c"
yy4:
	++cur;
#line 21 "c/eof/04_generic_api_sentinel.--lang(c).re"
	{ return -1; }
#line 60 "c/eof/04_generic_api_sentinel.--lang(c).c"
yy6:
	++cur;
	yych = cur < lim ? *cur : 0;
	switch (yych) {
	case ' ':	goto yy6;
	default:	goto yy8;
	}
yy8:
#line 24 "c/eof/04_generic_api_sentinel.--lang(c).re"
	{ goto loop; }
#line 71 "c/eof/04_generic_api_sentinel.--lang(c).c"
yy9:
	++cur;
	yych = cur < lim ? *cur : 0;
	switch (yych) {
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy9;
	default:	goto yy11;
	}
yy11:
#line 23 "c/eof/04_generic_api_sentinel.--lang(c).re"
	{ ++count; goto loop; }
#line 107 "c/eof/04_generic_api_sentinel.--lang(c).c"
}
#line 26 "c/eof/04_generic_api_sentinel.--lang(c).re"

}

// make a copy of the string without terminating null
static void test(const char *str, unsigned int len, int res)
{
    char *s = (char*) malloc(len);
    memcpy(s, str, len);
    int r = lex(s, len);
    free(s);
    assert(r == res);
}

#define TEST(s, r) test(s, sizeof(s) - 1, r)
int main()
{
    TEST("", 0);
    TEST("one two three ", 3);
    TEST("f0ur", -1);
    return 0;
}
