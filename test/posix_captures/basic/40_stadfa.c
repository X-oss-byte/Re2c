/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy2;
		case 'b': goto yy4;
		default: goto yy1;
	}
yy1:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	yyt1 = yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy5;
		case 'b': goto yy6;
		default:
			yyt3 = YYCURSOR;
			goto yy3;
	}
yy3:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[1] = YYCURSOR;
	{}
yy4:
	yych = *++YYCURSOR;
	yyt1 = yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy7;
		case 'b': goto yy6;
		default:
			yyt3 = YYCURSOR;
			goto yy3;
	}
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy5;
		case 'b': goto yy6;
		default:
			yyt3 = YYCURSOR;
			goto yy3;
	}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy7;
		case 'b': goto yy6;
		default:
			yyt3 = YYCURSOR;
			goto yy3;
	}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy5;
		case 'b': goto yy6;
		default:
			yyt3 = YYCURSOR;
			goto yy3;
	}
}

posix_captures/basic/40_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]