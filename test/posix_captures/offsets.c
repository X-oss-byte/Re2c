/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --posix-captures --input custom
#include <stddef.h>
#include <stdio.h>

static void lex(const char *s)
{
#define YYPEEK()           *s
#define YYSKIP()           ++s
#define YYBACKUP()         marker = s
#define YYRESTORE()        s = marker
#define YYSTAGP(t)         t = (s - p)
#define YYSTAGN(t)         t = 0
    #define YYMAXNMATCH 2

    size_t yynmatch;
    const char *marker, *p = s;
    long yypmatch[YYMAXNMATCH * 2];
    long yyt1;long yyt2;long yyt3;
    
{
	char yych;
	yych = YYPEEK();
	switch (yych) {
		case 'a':
			YYSTAGP(yyt1);
			YYSTAGP(yyt2);
			goto yy2;
		default: goto yy1;
	}
yy1:
	YYSKIP();
	{ printf("error\n"); return; }
yy2:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
		case 'a': goto yy4;
		default:
			YYSTAGP(yyt3);
			goto yy3;
	}
yy3:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	YYSTAGP(yypmatch[1]);
	{
            printf("'%.*s', '%.*s'\n",
                yypmatch[1] - yypmatch[0], p + yypmatch[0],
                yypmatch[3] - yypmatch[2], p + yypmatch[2]);
            return;
        }
yy4:
	YYSKIP();
	yych = YYPEEK();
	switch (yych) {
		case 'a':
			YYSTAGP(yyt2);
			goto yy2;
		default:
			YYSTAGP(yyt3);
			goto yy3;
	}
}

}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        lex(argv[i]);
    }
    return 0;
}
posix_captures/offsets.re:23:22: warning: rule matches empty string [-Wmatch-empty-string]