/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -if




	switch (YYGETSTATE()) {
		default: goto yy0;
		case 0:
			if (YYLIMIT <= YYCURSOR) goto yy4;
			goto yyFillLabel0;
		case 1:
			if (YYLIMIT <= YYCURSOR) goto yy9;
			goto yyFillLabel1;
		case 2:
			if (YYLIMIT <= YYCURSOR) goto yy14;
			goto yyFillLabel2;
		case 3:
			if (YYLIMIT <= YYCURSOR) goto yy19;
			goto yyFillLabel3;
	}
yy0:
yyFillLabel0:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy3;
		default:
			if (YYLIMIT <= YYCURSOR) {
				YYSETSTATE(0);
				fill();
			}
			goto yy2;
	}
yy2:
	++YYCURSOR;
	YYSETSTATE(-1);
	{ return FAIL; }
yy3:
	++YYCURSOR;
	YYSETSTATE(-1);
	{ return OK; }
yy4:
	YYSETSTATE(-1);
	{ return EOF; }




yyFillLabel1:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy8;
		default:
			if (YYLIMIT <= YYCURSOR) {
				YYSETSTATE(1);
				fill();
			}
			goto yy7;
	}
yy7:
	++YYCURSOR;
	YYSETSTATE(-1);
	{ return FAIL; }
yy8:
	++YYCURSOR;
	YYSETSTATE(-1);
	{ return OK; }
yy9:
	YYSETSTATE(-1);
	{ return EOF; }




yyFillLabel2:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy13;
		default:
			if (YYLIMIT <= YYCURSOR) {
				YYSETSTATE(2);
				fill();
			}
			goto yy12;
	}
yy12:
	++YYCURSOR;
	YYSETSTATE(-1);
	{ return FAIL; }
yy13:
	++YYCURSOR;
	YYSETSTATE(-1);
	{ return OK; }
yy14:
	YYSETSTATE(-1);
	{ return EOF; }




yyFillLabel3:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy18;
		default:
			if (YYLIMIT <= YYCURSOR) {
				YYSETSTATE(3);
				fill();
			}
			goto yy17;
	}
yy17:
	++YYCURSOR;
	YYSETSTATE(-1);
	{ return FAIL; }
yy18:
	++YYCURSOR;
	YYSETSTATE(-1);
	{ return OK; }
yy19:
	YYSETSTATE(-1);
	{ return EOF; }
