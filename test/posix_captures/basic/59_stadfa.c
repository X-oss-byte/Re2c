/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a': goto yy2;
		default: goto yy1;
	}
yy1:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy4;
		case 'b':
		case 'c': goto yy5;
		case 'd': goto yy6;
		default: goto yy3;
	}
yy3:
	YYCURSOR = YYMARKER;
	goto yy1;
yy4:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy4;
		case 'b':
		case 'c': goto yy5;
		case 'd': goto yy6;
		default: goto yy3;
	}
yy5:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b':
		case 'c': goto yy5;
		case 'd': goto yy8;
		default: goto yy3;
	}
yy6:
	yych = *++YYCURSOR;
	yyt1 = NULL;
	switch (yych) {
		case 'd': goto yy9;
		default:
			yyt2 = yyt1;
			yyt1 = yyt3;
			goto yy7;
	}
yy7:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = yyt2;
	if (yyt2 != NULL) yypmatch[2] -= 1;
	{}
yy8:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'd': goto yy9;
		default:
			yyt2 = yyt1;
			yyt1 = yyt3;
			goto yy7;
	}
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'd': goto yy9;
		default:
			yyt2 = yyt1;
			yyt1 = yyt3;
			goto yy7;
	}
}

posix_captures/basic/59_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]