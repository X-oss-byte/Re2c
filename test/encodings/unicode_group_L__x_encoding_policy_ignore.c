/* Generated by re2c */
#line 1 "encodings/unicode_group_L__x_encoding_policy_ignore.re"
// re2c $INPUT -o $OUTPUT -x --encoding-policy ignore
#include <stdio.h>
#include "utf16.h"
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
L_:
	
#line 14 "encodings/unicode_group_L__x_encoding_policy_ignore.c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x1FCF) {
		if (yych <= 0x10CC) {
			if (yych <= 0x037D) {
				if (yych <= 0x01BA) {
					if (yych <= 0x00B5) {
						if (yych <= '`') {
							if (yych <= '@') goto yy1;
							if (yych <= 'Z') goto yy3;
						} else {
							if (yych <= 'z') goto yy3;
							if (yych >= 0x00B5) goto yy3;
						}
					} else {
						if (yych <= 0x00D7) {
							if (yych <= 0x00BF) goto yy1;
							if (yych <= 0x00D6) goto yy3;
						} else {
							if (yych != 0x00F7) goto yy3;
						}
					}
				} else {
					if (yych <= 0x02AF) {
						if (yych <= 0x01C3) {
							if (yych <= 0x01BB) goto yy1;
							if (yych <= 0x01BF) goto yy3;
						} else {
							if (yych != 0x0294) goto yy3;
						}
					} else {
						if (yych <= 0x0375) {
							if (yych <= 0x036F) goto yy1;
							if (yych <= 0x0373) goto yy3;
						} else {
							if (yych <= 0x0377) goto yy3;
							if (yych >= 0x037B) goto yy3;
						}
					}
				}
			} else {
				if (yych <= 0x03F5) {
					if (yych <= 0x038A) {
						if (yych <= 0x0385) {
							if (yych == 0x037F) goto yy3;
						} else {
							if (yych != 0x0387) goto yy3;
						}
					} else {
						if (yych <= 0x038D) {
							if (yych == 0x038C) goto yy3;
						} else {
							if (yych != 0x03A2) goto yy3;
						}
					}
				} else {
					if (yych <= 0x0556) {
						if (yych <= 0x0489) {
							if (yych <= 0x03F6) goto yy1;
							if (yych <= 0x0481) goto yy3;
						} else {
							if (yych != 0x0530) goto yy3;
						}
					} else {
						if (yych <= 0x109F) {
							if (yych <= 0x055F) goto yy1;
							if (yych <= 0x0588) goto yy3;
						} else {
							if (yych == 0x10C6) goto yy1;
							if (yych <= 0x10C7) goto yy3;
						}
					}
				}
			}
		} else {
			if (yych <= 0x1F1D) {
				if (yych <= 0x1C8F) {
					if (yych <= 0x139F) {
						if (yych <= 0x10FA) {
							if (yych <= 0x10CD) goto yy3;
							if (yych >= 0x10D0) goto yy3;
						} else {
							if (yych <= 0x10FC) goto yy1;
							if (yych <= 0x10FF) goto yy3;
						}
					} else {
						if (yych <= 0x13FD) {
							if (yych <= 0x13F5) goto yy3;
							if (yych >= 0x13F8) goto yy3;
						} else {
							if (yych <= 0x1C7F) goto yy1;
							if (yych <= 0x1C88) goto yy3;
						}
					}
				} else {
					if (yych <= 0x1D6A) {
						if (yych <= 0x1CBF) {
							if (yych <= 0x1CBA) goto yy3;
							if (yych >= 0x1CBD) goto yy3;
						} else {
							if (yych <= 0x1CFF) goto yy1;
							if (yych <= 0x1D2B) goto yy3;
						}
					} else {
						if (yych <= 0x1D9A) {
							if (yych != 0x1D78) goto yy3;
						} else {
							if (yych <= 0x1DFF) goto yy1;
							if (yych <= 0x1F15) goto yy3;
							if (yych >= 0x1F18) goto yy3;
						}
					}
				}
			} else {
				if (yych <= 0x1F5D) {
					if (yych <= 0x1F57) {
						if (yych <= 0x1F47) {
							if (yych <= 0x1F1F) goto yy1;
							if (yych <= 0x1F45) goto yy3;
						} else {
							if (yych <= 0x1F4D) goto yy3;
							if (yych >= 0x1F50) goto yy3;
						}
					} else {
						if (yych <= 0x1F5A) {
							if (yych == 0x1F59) goto yy3;
						} else {
							if (yych != 0x1F5C) goto yy3;
						}
					}
				} else {
					if (yych <= 0x1FBC) {
						if (yych <= 0x1F7F) {
							if (yych <= 0x1F5E) goto yy1;
							if (yych <= 0x1F7D) goto yy3;
						} else {
							if (yych != 0x1FB5) goto yy3;
						}
					} else {
						if (yych <= 0x1FC1) {
							if (yych == 0x1FBE) goto yy3;
						} else {
							if (yych == 0x1FC5) goto yy1;
							if (yych <= 0x1FCC) goto yy3;
						}
					}
				}
			}
		}
	} else {
		if (yych <= 0x2CF1) {
			if (yych <= 0x2128) {
				if (yych <= 0x2106) {
					if (yych <= 0x1FF1) {
						if (yych <= 0x1FDB) {
							if (yych <= 0x1FD3) goto yy3;
							if (yych >= 0x1FD6) goto yy3;
						} else {
							if (yych <= 0x1FDF) goto yy1;
							if (yych <= 0x1FEC) goto yy3;
						}
					} else {
						if (yych <= 0x1FFC) {
							if (yych != 0x1FF5) goto yy3;
						} else {
							if (yych == 0x2102) goto yy3;
						}
					}
				} else {
					if (yych <= 0x2118) {
						if (yych <= 0x2113) {
							if (yych <= 0x2107) goto yy3;
							if (yych >= 0x210A) goto yy3;
						} else {
							if (yych == 0x2115) goto yy3;
						}
					} else {
						if (yych <= 0x2124) {
							if (yych <= 0x211D) goto yy3;
							if (yych >= 0x2124) goto yy3;
						} else {
							if (yych == 0x2126) goto yy3;
							if (yych >= 0x2128) goto yy3;
						}
					}
				}
			} else {
				if (yych <= 0x214E) {
					if (yych <= 0x2139) {
						if (yych <= 0x212E) {
							if (yych <= 0x2129) goto yy1;
							if (yych <= 0x212D) goto yy3;
						} else {
							if (yych <= 0x2134) goto yy3;
							if (yych >= 0x2139) goto yy3;
						}
					} else {
						if (yych <= 0x2144) {
							if (yych <= 0x213B) goto yy1;
							if (yych <= 0x213F) goto yy3;
						} else {
							if (yych <= 0x2149) goto yy3;
							if (yych >= 0x214E) goto yy3;
						}
					}
				} else {
					if (yych <= 0x2C5E) {
						if (yych <= 0x2BFF) {
							if (yych <= 0x2182) goto yy1;
							if (yych <= 0x2184) goto yy3;
						} else {
							if (yych != 0x2C2F) goto yy3;
						}
					} else {
						if (yych <= 0x2C7D) {
							if (yych <= 0x2C5F) goto yy1;
							if (yych <= 0x2C7B) goto yy3;
						} else {
							if (yych <= 0x2CE4) goto yy3;
							if (yych <= 0x2CEA) goto yy1;
							if (yych <= 0x2CEE) goto yy3;
						}
					}
				}
			}
		} else {
			if (yych <= 0xAB5A) {
				if (yych <= 0xA721) {
					if (yych <= 0x2D2C) {
						if (yych <= 0x2D25) {
							if (yych <= 0x2CF3) goto yy3;
							if (yych >= 0x2D00) goto yy3;
						} else {
							if (yych == 0x2D27) goto yy3;
						}
					} else {
						if (yych <= 0xA66D) {
							if (yych <= 0x2D2D) goto yy3;
							if (yych >= 0xA640) goto yy3;
						} else {
							if (yych <= 0xA67F) goto yy1;
							if (yych <= 0xA69B) goto yy3;
						}
					}
				} else {
					if (yych <= 0xA78F) {
						if (yych <= 0xA787) {
							if (yych != 0xA770) goto yy3;
						} else {
							if (yych <= 0xA78A) goto yy1;
							if (yych <= 0xA78E) goto yy3;
						}
					} else {
						if (yych <= 0xA7C6) {
							if (yych <= 0xA7BF) goto yy3;
							if (yych >= 0xA7C2) goto yy3;
						} else {
							if (yych == 0xA7FA) goto yy3;
							if (yych >= 0xAB30) goto yy3;
						}
					}
				}
			} else {
				if (yych <= 0xD81B) {
					if (yych <= 0xD801) {
						if (yych <= 0xAB6F) {
							if (yych <= 0xAB5F) goto yy1;
							if (yych <= 0xAB67) goto yy3;
						} else {
							if (yych <= 0xABBF) goto yy3;
							if (yych >= 0xD801) goto yy4;
						}
					} else {
						if (yych <= 0xD805) {
							if (yych == 0xD803) goto yy5;
						} else {
							if (yych <= 0xD806) goto yy6;
							if (yych >= 0xD81B) goto yy7;
						}
					}
				} else {
					if (yych <= 0xFB06) {
						if (yych <= 0xD839) {
							if (yych == 0xD835) goto yy8;
						} else {
							if (yych <= 0xD83A) goto yy9;
							if (yych >= 0xFB00) goto yy3;
						}
					} else {
						if (yych <= 0xFF20) {
							if (yych <= 0xFB12) goto yy1;
							if (yych <= 0xFB17) goto yy3;
						} else {
							if (yych <= 0xFF3A) goto yy3;
							if (yych <= 0xFF40) goto yy1;
							if (yych <= 0xFF5A) goto yy3;
						}
					}
				}
			}
		}
	}
yy1:
	++YYCURSOR;
yy2:
#line 14 "encodings/unicode_group_L__x_encoding_policy_ignore.re"
	{ return YYCURSOR == limit; }
#line 323 "encodings/unicode_group_L__x_encoding_policy_ignore.c"
yy3:
	++YYCURSOR;
#line 13 "encodings/unicode_group_L__x_encoding_policy_ignore.re"
	{ goto L_; }
#line 328 "encodings/unicode_group_L__x_encoding_policy_ignore.c"
yy4:
	yych = *++YYCURSOR;
	if (yych <= 0xDCAF) {
		if (yych <= 0xDBFF) goto yy2;
		if (yych <= 0xDC4F) goto yy3;
		goto yy2;
	} else {
		if (yych <= 0xDCD3) goto yy3;
		if (yych <= 0xDCD7) goto yy2;
		if (yych <= 0xDCFB) goto yy3;
		goto yy2;
	}
yy5:
	yych = *++YYCURSOR;
	if (yych <= 0xDC7F) goto yy2;
	if (yych <= 0xDCB2) goto yy3;
	if (yych <= 0xDCBF) goto yy2;
	if (yych <= 0xDCF2) goto yy3;
	goto yy2;
yy6:
	yych = *++YYCURSOR;
	if (yych <= 0xDC9F) goto yy2;
	if (yych <= 0xDCDF) goto yy3;
	goto yy2;
yy7:
	yych = *++YYCURSOR;
	if (yych <= 0xDE3F) goto yy2;
	if (yych <= 0xDE7F) goto yy3;
	goto yy2;
yy8:
	yych = *++YYCURSOR;
	if (yych <= 0xDD3E) {
		if (yych <= 0xDCBA) {
			if (yych <= 0xDCA1) {
				if (yych <= 0xDC55) {
					if (yych <= 0xDBFF) goto yy2;
					if (yych <= 0xDC54) goto yy3;
					goto yy2;
				} else {
					if (yych == 0xDC9D) goto yy2;
					if (yych <= 0xDC9F) goto yy3;
					goto yy2;
				}
			} else {
				if (yych <= 0xDCA8) {
					if (yych <= 0xDCA2) goto yy3;
					if (yych <= 0xDCA4) goto yy2;
					if (yych <= 0xDCA6) goto yy3;
					goto yy2;
				} else {
					if (yych == 0xDCAD) goto yy2;
					if (yych <= 0xDCB9) goto yy3;
					goto yy2;
				}
			}
		} else {
			if (yych <= 0xDD0A) {
				if (yych <= 0xDCC3) {
					if (yych == 0xDCBC) goto yy2;
					goto yy3;
				} else {
					if (yych <= 0xDCC4) goto yy2;
					if (yych == 0xDD06) goto yy2;
					goto yy3;
				}
			} else {
				if (yych <= 0xDD1C) {
					if (yych <= 0xDD0C) goto yy2;
					if (yych == 0xDD15) goto yy2;
					goto yy3;
				} else {
					if (yych <= 0xDD1D) goto yy2;
					if (yych == 0xDD3A) goto yy2;
					goto yy3;
				}
			}
		}
	} else {
		if (yych <= 0xDEFB) {
			if (yych <= 0xDD51) {
				if (yych <= 0xDD45) {
					if (yych <= 0xDD3F) goto yy2;
					if (yych <= 0xDD44) goto yy3;
					goto yy2;
				} else {
					if (yych <= 0xDD46) goto yy3;
					if (yych <= 0xDD49) goto yy2;
					if (yych <= 0xDD50) goto yy3;
					goto yy2;
				}
			} else {
				if (yych <= 0xDEC1) {
					if (yych <= 0xDEA5) goto yy3;
					if (yych <= 0xDEA7) goto yy2;
					if (yych <= 0xDEC0) goto yy3;
					goto yy2;
				} else {
					if (yych == 0xDEDB) goto yy2;
					if (yych <= 0xDEFA) goto yy3;
					goto yy2;
				}
			}
		} else {
			if (yych <= 0xDF6F) {
				if (yych <= 0xDF35) {
					if (yych == 0xDF15) goto yy2;
					if (yych <= 0xDF34) goto yy3;
					goto yy2;
				} else {
					if (yych == 0xDF4F) goto yy2;
					if (yych <= 0xDF6E) goto yy3;
					goto yy2;
				}
			} else {
				if (yych <= 0xDFA9) {
					if (yych == 0xDF89) goto yy2;
					if (yych <= 0xDFA8) goto yy3;
					goto yy2;
				} else {
					if (yych == 0xDFC3) goto yy2;
					if (yych <= 0xDFCB) goto yy3;
					goto yy2;
				}
			}
		}
	}
yy9:
	yych = *++YYCURSOR;
	if (yych <= 0xDCFF) goto yy2;
	if (yych <= 0xDD43) goto yy3;
	goto yy2;
}
#line 15 "encodings/unicode_group_L__x_encoding_policy_ignore.re"

}
static const unsigned int chars_L_ [] = {0x41,0x5a,  0x61,0x7a,  0xb5,0xb5,  0xc0,0xd6,  0xd8,0xf6,  0xf8,0x1ba,  0x1bc,0x1bf,  0x1c4,0x293,  0x295,0x2af,  0x370,0x373,  0x376,0x377,  0x37b,0x37d,  0x37f,0x37f,  0x386,0x386,  0x388,0x38a,  0x38c,0x38c,  0x38e,0x3a1,  0x3a3,0x3f5,  0x3f7,0x481,  0x48a,0x52f,  0x531,0x556,  0x560,0x588,  0x10a0,0x10c5,  0x10c7,0x10c7,  0x10cd,0x10cd,  0x10d0,0x10fa,  0x10fd,0x10ff,  0x13a0,0x13f5,  0x13f8,0x13fd,  0x1c80,0x1c88,  0x1c90,0x1cba,  0x1cbd,0x1cbf,  0x1d00,0x1d2b,  0x1d6b,0x1d77,  0x1d79,0x1d9a,  0x1e00,0x1f15,  0x1f18,0x1f1d,  0x1f20,0x1f45,  0x1f48,0x1f4d,  0x1f50,0x1f57,  0x1f59,0x1f59,  0x1f5b,0x1f5b,  0x1f5d,0x1f5d,  0x1f5f,0x1f7d,  0x1f80,0x1fb4,  0x1fb6,0x1fbc,  0x1fbe,0x1fbe,  0x1fc2,0x1fc4,  0x1fc6,0x1fcc,  0x1fd0,0x1fd3,  0x1fd6,0x1fdb,  0x1fe0,0x1fec,  0x1ff2,0x1ff4,  0x1ff6,0x1ffc,  0x2102,0x2102,  0x2107,0x2107,  0x210a,0x2113,  0x2115,0x2115,  0x2119,0x211d,  0x2124,0x2124,  0x2126,0x2126,  0x2128,0x2128,  0x212a,0x212d,  0x212f,0x2134,  0x2139,0x2139,  0x213c,0x213f,  0x2145,0x2149,  0x214e,0x214e,  0x2183,0x2184,  0x2c00,0x2c2e,  0x2c30,0x2c5e,  0x2c60,0x2c7b,  0x2c7e,0x2ce4,  0x2ceb,0x2cee,  0x2cf2,0x2cf3,  0x2d00,0x2d25,  0x2d27,0x2d27,  0x2d2d,0x2d2d,  0xa640,0xa66d,  0xa680,0xa69b,  0xa722,0xa76f,  0xa771,0xa787,  0xa78b,0xa78e,  0xa790,0xa7bf,  0xa7c2,0xa7c6,  0xa7fa,0xa7fa,  0xab30,0xab5a,  0xab60,0xab67,  0xab70,0xabbf,  0xfb00,0xfb06,  0xfb13,0xfb17,  0xff21,0xff3a,  0xff41,0xff5a,  0x10400,0x1044f,  0x104b0,0x104d3,  0x104d8,0x104fb,  0x10c80,0x10cb2,  0x10cc0,0x10cf2,  0x118a0,0x118df,  0x16e40,0x16e7f,  0x1d400,0x1d454,  0x1d456,0x1d49c,  0x1d49e,0x1d49f,  0x1d4a2,0x1d4a2,  0x1d4a5,0x1d4a6,  0x1d4a9,0x1d4ac,  0x1d4ae,0x1d4b9,  0x1d4bb,0x1d4bb,  0x1d4bd,0x1d4c3,  0x1d4c5,0x1d505,  0x1d507,0x1d50a,  0x1d50d,0x1d514,  0x1d516,0x1d51c,  0x1d51e,0x1d539,  0x1d53b,0x1d53e,  0x1d540,0x1d544,  0x1d546,0x1d546,  0x1d54a,0x1d550,  0x1d552,0x1d6a5,  0x1d6a8,0x1d6c0,  0x1d6c2,0x1d6da,  0x1d6dc,0x1d6fa,  0x1d6fc,0x1d714,  0x1d716,0x1d734,  0x1d736,0x1d74e,  0x1d750,0x1d76e,  0x1d770,0x1d788,  0x1d78a,0x1d7a8,  0x1d7aa,0x1d7c2,  0x1d7c4,0x1d7cb,  0x1e900,0x1e943,  0x0,0x0};
static unsigned int encode_utf16 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
		{
			if (j <= re2c::utf16::MAX_1WORD_RUNE)
				*s++ = j;
			else
			{
				*s++ = re2c::utf16::lead_surr(j);
				*s++ = re2c::utf16::trail_surr(j);
			}
		}
	return s - s_start;
}

int main ()
{
	unsigned int * buffer_L_ = new unsigned int [7942];
	YYCTYPE * s = (YYCTYPE *) buffer_L_;
	unsigned int buffer_len = encode_utf16 (chars_L_, sizeof (chars_L_) / sizeof (unsigned int), buffer_L_);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_L_[i];
	if (!scan (s, s + buffer_len))
		printf("test 'L_' failed\n");
	delete [] buffer_L_;
	return 0;
}
