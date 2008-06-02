/* Generated by re2c 0.13.5 on Mon Jun  2 14:42:52 2008 */
/*
 * implicit.re
 *
 * $Author$
 * $Date$
 *
 * Copyright (C) 2003 why the lucky stiff
 */

#include "syck.h"

#define YYCTYPE     char
#define YYCURSOR    cursor
#define YYMARKER    marker
#define YYLIMIT     limit
#define YYFILL(n)

void
try_tag_implicit( SyckNode *n, int taguri )
{
    char *tid = "";
    switch ( n->kind )
    {
        case syck_str_kind:
            tid = syck_match_implicit( n->data.str->ptr, n->data.str->len );
        break;

        case syck_seq_kind:
            tid = "seq";
        break;

        case syck_map_kind:
            tid = "map";
        break;
    }
    if ( n->type_id != NULL ) S_FREE( n->type_id );
    if ( taguri == 1 )
    {
        n->type_id = syck_taguri( YAML_DOMAIN, tid, strlen( tid ) );
    } else {
        n->type_id = syck_strndup( tid, strlen( tid ) );
    }
}

char *syck_match_implicit( const char *str, size_t len )
{
    const char *cursor, *limit, *marker;
    cursor = str;
    limit = str + len;


{
	YYCTYPE yych;
	static const unsigned char yybm[] = {
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   8,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  8,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0, 193,   0,   4,   0, 
		215, 231, 231, 231, 231, 231, 231, 231, 
		167, 167,   0,   0,   0,   0,   0,   0, 
		  0, 128, 128, 128, 128, 128, 128,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0, 128, 128, 128, 128, 128, 128,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
	};

	if ((YYLIMIT - YYCURSOR) < 26) YYFILL(26);
	yych = *YYCURSOR;
	if (yych <= 'N') {
		if (yych <= '0') {
			if (yych <= ',') {
				if (yych <= 0x00) goto yy6;
				if (yych == '+') goto yy16;
				goto yy23;
			} else {
				if (yych <= '-') goto yy17;
				if (yych <= '.') goto yy20;
				if (yych <= '/') goto yy23;
				goto yy18;
			}
		} else {
			if (yych <= '=') {
				if (yych <= '9') goto yy19;
				if (yych <= ';') goto yy23;
				if (yych <= '<') goto yy22;
				goto yy21;
			} else {
				if (yych == 'F') goto yy15;
				if (yych <= 'M') goto yy23;
				goto yy5;
			}
		}
	} else {
		if (yych <= 'm') {
			if (yych <= 'X') {
				if (yych <= 'O') goto yy13;
				if (yych == 'T') goto yy11;
				goto yy23;
			} else {
				if (yych <= 'Y') goto yy9;
				if (yych == 'f') goto yy14;
				goto yy23;
			}
		} else {
			if (yych <= 't') {
				if (yych <= 'n') goto yy4;
				if (yych <= 'o') goto yy12;
				if (yych <= 's') goto yy23;
				goto yy10;
			} else {
				if (yych <= 'y') {
					if (yych <= 'x') goto yy23;
					goto yy8;
				} else {
					if (yych != '~') goto yy23;
				}
			}
		}
	}
	++YYCURSOR;
	if ((yych = *YYCURSOR) <= 0x00) goto yy6;
yy3:
	{   return "str"; }
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'o') goto yy172;
	if (yych == 'u') goto yy200;
	goto yy3;
yy5:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= 'U') {
		if (yych == 'O') goto yy172;
		if (yych <= 'T') goto yy3;
		goto yy195;
	} else {
		if (yych <= 'o') {
			if (yych <= 'n') goto yy3;
			goto yy172;
		} else {
			if (yych == 'u') goto yy196;
			goto yy3;
		}
	}
yy6:
	++YYCURSOR;
	{   return "null"; }
yy8:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'e') goto yy194;
	goto yy3;
yy9:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'E') goto yy192;
	if (yych == 'e') goto yy193;
	goto yy3;
yy10:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'r') goto yy190;
	goto yy3;
yy11:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'R') goto yy186;
	if (yych == 'r') goto yy187;
	goto yy3;
yy12:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'f') goto yy185;
	if (yych == 'n') goto yy182;
	goto yy3;
yy13:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= 'N') {
		if (yych == 'F') goto yy180;
		if (yych <= 'M') goto yy3;
		goto yy182;
	} else {
		if (yych <= 'f') {
			if (yych <= 'e') goto yy3;
			goto yy181;
		} else {
			if (yych == 'n') goto yy182;
			goto yy3;
		}
	}
yy14:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'a') goto yy177;
	goto yy3;
yy15:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == 'A') goto yy168;
	if (yych == 'a') goto yy169;
	goto yy3;
yy16:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= '/') {
		if (yych == '.') goto yy167;
		goto yy3;
	} else {
		if (yych <= '0') goto yy158;
		if (yych <= '9') goto yy47;
		goto yy3;
	}
yy17:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= '/') {
		if (yych == '.') goto yy157;
		goto yy3;
	} else {
		if (yych <= '0') goto yy158;
		if (yych <= '9') goto yy47;
		goto yy3;
	}
yy18:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= '/') {
		if (yych <= ',') {
			if (yych <= 0x00) goto yy52;
			if (yych <= '+') goto yy3;
			goto yy142;
		} else {
			if (yych == '.') goto yy50;
			goto yy3;
		}
	} else {
		if (yych <= ':') {
			if (yych <= '7') goto yy140;
			if (yych <= '9') goto yy141;
			goto yy49;
		} else {
			if (yych == 'x') goto yy144;
			goto yy3;
		}
	}
yy19:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= '-') {
		if (yych <= 0x00) goto yy52;
		if (yych == ',') goto yy47;
		goto yy3;
	} else {
		if (yych <= '/') {
			if (yych <= '.') goto yy50;
			goto yy3;
		} else {
			if (yych <= '9') goto yy46;
			if (yych <= ':') goto yy49;
			goto yy3;
		}
	}
yy20:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= 'N') {
		if (yych == 'I') goto yy33;
		if (yych <= 'M') goto yy3;
		goto yy31;
	} else {
		if (yych <= 'i') {
			if (yych <= 'h') goto yy3;
			goto yy32;
		} else {
			if (yych == 'n') goto yy30;
			goto yy3;
		}
	}
yy21:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy28;
	goto yy3;
yy22:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych == '<') goto yy24;
	goto yy3;
yy23:
	yych = *++YYCURSOR;
	goto yy3;
yy24:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy26;
yy25:
	YYCURSOR = YYMARKER;
	goto yy3;
yy26:
	++YYCURSOR;
	{   return "merge"; }
yy28:
	++YYCURSOR;
	{   return "default"; }
yy30:
	yych = *++YYCURSOR;
	if (yych == 'a') goto yy45;
	goto yy25;
yy31:
	yych = *++YYCURSOR;
	if (yych == 'A') goto yy40;
	if (yych == 'a') goto yy41;
	goto yy25;
yy32:
	yych = *++YYCURSOR;
	if (yych == 'n') goto yy39;
	goto yy25;
yy33:
	yych = *++YYCURSOR;
	if (yych == 'N') goto yy34;
	if (yych == 'n') goto yy35;
	goto yy25;
yy34:
	yych = *++YYCURSOR;
	if (yych == 'F') goto yy36;
	goto yy25;
yy35:
	yych = *++YYCURSOR;
	if (yych != 'f') goto yy25;
yy36:
	yych = *++YYCURSOR;
	if (yych >= 0x01) goto yy25;
	++YYCURSOR;
	{   return "float#inf"; }
yy39:
	yych = *++YYCURSOR;
	if (yych == 'f') goto yy36;
	goto yy25;
yy40:
	yych = *++YYCURSOR;
	if (yych == 'N') goto yy42;
	goto yy25;
yy41:
	yych = *++YYCURSOR;
	if (yych != 'N') goto yy25;
yy42:
	yych = *++YYCURSOR;
	if (yych >= 0x01) goto yy25;
	++YYCURSOR;
	{   return "float#nan"; }
yy45:
	yych = *++YYCURSOR;
	if (yych == 'n') goto yy42;
	goto yy25;
yy46:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy48;
	if (yych <= '9') goto yy74;
	goto yy48;
yy47:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy48:
	if (yybm[0+yych] & 1) {
		goto yy47;
	}
	if (yych <= '.') {
		if (yych <= 0x00) goto yy52;
		if (yych <= '-') goto yy25;
		goto yy50;
	} else {
		if (yych <= '/') goto yy25;
		if (yych >= ';') goto yy25;
	}
yy49:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych <= '5') goto yy66;
	if (yych <= '9') goto yy67;
	goto yy25;
yy50:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 2) {
		goto yy50;
	}
	if (yych <= '.') {
		if (yych <= '+') {
			if (yych <= 0x00) goto yy56;
			goto yy25;
		} else {
			if (yych <= ',') goto yy54;
			if (yych <= '-') goto yy25;
			goto yy58;
		}
	} else {
		if (yych <= 'E') {
			if (yych <= 'D') goto yy25;
			goto yy60;
		} else {
			if (yych == 'e') goto yy60;
			goto yy25;
		}
	}
yy52:
	++YYCURSOR;
	{   return "int"; }
yy54:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= ',') {
		if (yych <= 0x00) goto yy56;
		if (yych <= '+') goto yy25;
		goto yy54;
	} else {
		if (yych <= '/') goto yy25;
		if (yych <= '9') goto yy54;
		goto yy25;
	}
yy56:
	++YYCURSOR;
	{   return "float#fix"; }
yy58:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 4) {
		goto yy58;
	}
	if (yych == 'E') goto yy60;
	if (yych != 'e') goto yy25;
yy60:
	yych = *++YYCURSOR;
	if (yych == '+') goto yy61;
	if (yych != '-') goto yy25;
yy61:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy25;
	goto yy63;
yy62:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy63:
	if (yych <= 0x00) goto yy64;
	if (yych <= '/') goto yy25;
	if (yych <= '9') goto yy62;
	goto yy25;
yy64:
	++YYCURSOR;
	{   return "float#exp"; }
yy66:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych <= 0x00) goto yy70;
		if (yych <= '-') goto yy25;
		goto yy68;
	} else {
		if (yych <= '/') goto yy25;
		if (yych <= '9') goto yy67;
		if (yych <= ':') goto yy49;
		goto yy25;
	}
yy67:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '.') {
		if (yych <= 0x00) goto yy70;
		if (yych <= '-') goto yy25;
	} else {
		if (yych == ':') goto yy49;
		goto yy25;
	}
yy68:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= ',') {
		if (yych <= 0x00) goto yy72;
		if (yych <= '+') goto yy25;
		goto yy68;
	} else {
		if (yych <= '/') goto yy25;
		if (yych <= '9') goto yy68;
		goto yy25;
	}
yy70:
	++YYCURSOR;
	{   return "int#base60"; }
yy72:
	++YYCURSOR;
	{   return "float#base60"; }
yy74:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy48;
	if (yych >= ':') goto yy48;
	yych = *++YYCURSOR;
	if (yych != '-') goto yy48;
yy76:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych != '-') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= 'S') {
		if (yych <= 0x00) goto yy82;
		if (yych <= '/') goto yy87;
		if (yych <= '9') goto yy25;
		goto yy87;
	} else {
		if (yych <= 'T') goto yy84;
		if (yych == 't') goto yy85;
		goto yy87;
	}
yy82:
	++YYCURSOR;
	{   return "timestamp#ymd"; }
yy84:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych <= '9') goto yy126;
	goto yy25;
yy85:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych <= '9') goto yy108;
	goto yy25;
yy86:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 9) YYFILL(9);
	yych = *YYCURSOR;
yy87:
	if (yybm[0+yych] & 8) {
		goto yy86;
	}
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych != ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych != ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= 0x1F) {
		if (yych == '\t') goto yy98;
		goto yy25;
	} else {
		if (yych <= ' ') goto yy98;
		if (yych != '.') goto yy25;
	}
yy96:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= 0x1F) {
		if (yych != '\t') goto yy25;
	} else {
		if (yych <= ' ') goto yy98;
		if (yych <= '/') goto yy25;
		if (yych <= '9') goto yy96;
		goto yy25;
	}
yy98:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 7) YYFILL(7);
	yych = *YYCURSOR;
	if (yych <= '*') {
		if (yych <= '\t') {
			if (yych <= 0x08) goto yy25;
			goto yy98;
		} else {
			if (yych == ' ') goto yy98;
			goto yy25;
		}
	} else {
		if (yych <= '-') {
			if (yych == ',') goto yy25;
			goto yy101;
		} else {
			if (yych != 'Z') goto yy25;
		}
	}
yy100:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy105;
	goto yy25;
yy101:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy105;
	if (yych != ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych <= '9') goto yy107;
	goto yy25;
yy105:
	++YYCURSOR;
	{   return "timestamp#spaced"; }
yy107:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych <= '9') goto yy100;
	goto yy25;
yy108:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych != ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych != ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych == '.') goto yy116;
	if (yych <= '/') goto yy117;
	if (yych <= '9') goto yy25;
	goto yy117;
yy116:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 7) YYFILL(7);
	yych = *YYCURSOR;
yy117:
	if (yych <= '-') {
		if (yych == '+') goto yy119;
		if (yych <= ',') goto yy25;
		goto yy119;
	} else {
		if (yych <= '9') {
			if (yych <= '/') goto yy25;
			goto yy116;
		} else {
			if (yych != 'Z') goto yy25;
		}
	}
yy118:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy123;
	goto yy25;
yy119:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy123;
	if (yych != ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych <= '9') goto yy125;
	goto yy25;
yy123:
	++YYCURSOR;
yy124:
	{   return "timestamp#iso8601"; }
yy125:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych <= '9') goto yy118;
	goto yy25;
yy126:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych != ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych != ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy25;
	if (yych >= ':') goto yy25;
	yych = *++YYCURSOR;
	if (yych <= '/') {
		if (yych != '.') goto yy135;
	} else {
		if (yych <= '9') goto yy25;
		if (yych == 'Z') goto yy136;
		goto yy135;
	}
yy134:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 7) YYFILL(7);
	yych = *YYCURSOR;
yy135:
	if (yybm[0+yych] & 16) {
		goto yy134;
	}
	if (yych <= '-') {
		if (yych == '+') goto yy119;
		if (yych <= ',') goto yy25;
		goto yy119;
	} else {
		if (yych <= '9') {
			if (yych <= '0') goto yy25;
			goto yy138;
		} else {
			if (yych == 'Z') goto yy118;
			goto yy25;
		}
	}
yy136:
	yych = *++YYCURSOR;
	if (yych >= 0x01) goto yy25;
	yych = *++YYCURSOR;
	goto yy124;
yy138:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 7) YYFILL(7);
	yych = *YYCURSOR;
	if (yybm[0+yych] & 16) {
		goto yy134;
	}
	if (yych <= '-') {
		if (yych == '+') goto yy119;
		if (yych <= ',') goto yy25;
		goto yy119;
	} else {
		if (yych <= '9') {
			if (yych <= '0') goto yy25;
			goto yy138;
		} else {
			if (yych == 'Z') goto yy136;
			goto yy25;
		}
	}
yy140:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy143;
	if (yych <= '7') goto yy155;
	if (yych <= '9') goto yy153;
	goto yy143;
yy141:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy152;
	if (yych <= '9') goto yy153;
	goto yy152;
yy142:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy143:
	if (yybm[0+yych] & 64) {
		goto yy142;
	}
	if (yych <= '.') {
		if (yych <= 0x00) goto yy149;
		if (yych <= '-') goto yy25;
		goto yy50;
	} else {
		if (yych <= '/') goto yy25;
		if (yych <= '9') goto yy151;
		if (yych <= ':') goto yy49;
		goto yy25;
	}
yy144:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy25;
	goto yy146;
yy145:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy146:
	if (yybm[0+yych] & 128) {
		goto yy145;
	}
	if (yych >= 0x01) goto yy25;
	++YYCURSOR;
	{   return "int#hex"; }
yy149:
	++YYCURSOR;
	{   return "int#oct"; }
yy151:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy152:
	if (yych <= '.') {
		if (yych == ',') goto yy151;
		if (yych <= '-') goto yy25;
		goto yy50;
	} else {
		if (yych <= '/') goto yy25;
		if (yych <= '9') goto yy151;
		if (yych <= ':') goto yy49;
		goto yy25;
	}
yy153:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy152;
	if (yych >= ':') goto yy152;
yy154:
	yych = *++YYCURSOR;
	if (yych == '-') goto yy76;
	goto yy152;
yy155:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy143;
	if (yych <= '7') goto yy156;
	if (yych <= '9') goto yy154;
	goto yy143;
yy156:
	yych = *++YYCURSOR;
	if (yych == '-') goto yy76;
	goto yy143;
yy157:
	yych = *++YYCURSOR;
	if (yych == 'I') goto yy160;
	if (yych == 'i') goto yy159;
	goto yy25;
yy158:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy52;
	if (yych == 'x') goto yy144;
	goto yy143;
yy159:
	yych = *++YYCURSOR;
	if (yych == 'n') goto yy166;
	goto yy25;
yy160:
	yych = *++YYCURSOR;
	if (yych == 'N') goto yy161;
	if (yych == 'n') goto yy162;
	goto yy25;
yy161:
	yych = *++YYCURSOR;
	if (yych == 'F') goto yy163;
	goto yy25;
yy162:
	yych = *++YYCURSOR;
	if (yych != 'f') goto yy25;
yy163:
	yych = *++YYCURSOR;
	if (yych >= 0x01) goto yy25;
	++YYCURSOR;
	{   return "float#neginf"; }
yy166:
	yych = *++YYCURSOR;
	if (yych == 'f') goto yy163;
	goto yy25;
yy167:
	yych = *++YYCURSOR;
	if (yych == 'I') goto yy33;
	if (yych == 'i') goto yy32;
	goto yy25;
yy168:
	yych = *++YYCURSOR;
	if (yych == 'L') goto yy175;
	goto yy25;
yy169:
	yych = *++YYCURSOR;
	if (yych != 'l') goto yy25;
	yych = *++YYCURSOR;
	if (yych != 's') goto yy25;
	yych = *++YYCURSOR;
	if (yych != 'e') goto yy25;
yy172:
	yych = *++YYCURSOR;
	if (yych >= 0x01) goto yy25;
	++YYCURSOR;
	{   return "bool#no"; }
yy175:
	yych = *++YYCURSOR;
	if (yych != 'S') goto yy25;
	yych = *++YYCURSOR;
	if (yych == 'E') goto yy172;
	goto yy25;
yy177:
	yych = *++YYCURSOR;
	if (yych != 'l') goto yy25;
	yych = *++YYCURSOR;
	if (yych != 's') goto yy25;
	yych = *++YYCURSOR;
	if (yych == 'e') goto yy172;
	goto yy25;
yy180:
	yych = *++YYCURSOR;
	if (yych == 'F') goto yy172;
	goto yy25;
yy181:
	yych = *++YYCURSOR;
	if (yych == 'f') goto yy172;
	goto yy25;
yy182:
	yych = *++YYCURSOR;
	if (yych >= 0x01) goto yy25;
	++YYCURSOR;
	{   return "bool#yes"; }
yy185:
	yych = *++YYCURSOR;
	if (yych == 'f') goto yy172;
	goto yy25;
yy186:
	yych = *++YYCURSOR;
	if (yych == 'U') goto yy189;
	goto yy25;
yy187:
	yych = *++YYCURSOR;
	if (yych != 'u') goto yy25;
	yych = *++YYCURSOR;
	if (yych == 'e') goto yy182;
	goto yy25;
yy189:
	yych = *++YYCURSOR;
	if (yych == 'E') goto yy182;
	goto yy25;
yy190:
	yych = *++YYCURSOR;
	if (yych != 'u') goto yy25;
	yych = *++YYCURSOR;
	if (yych == 'e') goto yy182;
	goto yy25;
yy192:
	yych = *++YYCURSOR;
	if (yych == 'S') goto yy182;
	goto yy25;
yy193:
	yych = *++YYCURSOR;
	if (yych == 's') goto yy182;
	goto yy25;
yy194:
	yych = *++YYCURSOR;
	if (yych == 's') goto yy182;
	goto yy25;
yy195:
	yych = *++YYCURSOR;
	if (yych == 'L') goto yy199;
	goto yy25;
yy196:
	yych = *++YYCURSOR;
	if (yych != 'l') goto yy25;
	yych = *++YYCURSOR;
	if (yych != 'l') goto yy25;
yy198:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy6;
	goto yy25;
yy199:
	yych = *++YYCURSOR;
	if (yych == 'L') goto yy198;
	goto yy25;
yy200:
	yych = *++YYCURSOR;
	if (yych != 'l') goto yy25;
	++YYCURSOR;
	if ((yych = *YYCURSOR) == 'l') goto yy198;
	goto yy25;
}


}

/* Remove ending fragment and compare types */
int
syck_tagcmp( const char *tag1, const char *tag2 )
{
    if ( tag1 == tag2 ) return 1;
    if ( tag1 == NULL || tag2 == NULL ) return 0;
    else {
        int i;
        char *othorpe;
        char *tmp1 = syck_strndup( tag1, strlen( tag1 ) );
        char *tmp2 = syck_strndup( tag2, strlen( tag2 ) );
        othorpe = strstr( tmp1, "#" );
		if ( othorpe != NULL ) {
            othorpe[0] = '\0';
        }
        othorpe = strstr( tmp2, "#" );
		if ( othorpe != NULL ) {
            othorpe[0] = '\0';
        }
        i = strcmp( tmp1, tmp2 );
        S_FREE( tmp1 ); S_FREE( tmp2 );
        return i;
    }
}

char *
syck_type_id_to_uri( char *type_id )
{
    char *cursor, *limit, *marker;

    cursor = type_id;
    limit = type_id + strlen( type_id );


{
	YYCTYPE yych;
	static const unsigned char yybm[] = {
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,  64,   0,   0, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128,   0,   0,   0,   0,   0,   0, 
		  0, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128,   0,   0,   0,   0, 128, 
		  0, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
	};
	if ((YYLIMIT - YYCURSOR) < 21) YYFILL(21);
	yych = *YYCURSOR;
	if (yych <= '^') {
		if (yych <= '/') {
			if (yych <= 0x00) goto yy204;
			if (yych == '!') goto yy208;
			goto yy211;
		} else {
			if (yych <= '9') goto yy210;
			if (yych <= '@') goto yy211;
			if (yych <= 'Z') goto yy210;
			goto yy211;
		}
	} else {
		if (yych <= 't') {
			if (yych == '`') goto yy211;
			if (yych <= 's') goto yy210;
			goto yy205;
		} else {
			if (yych == 'x') goto yy207;
			if (yych <= 'z') goto yy210;
			goto yy211;
		}
	}
yy204:
	YYCURSOR = YYMARKER;
	goto yy206;
yy205:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yybm[0+yych] & 64) {
		goto yy212;
	}
	if (yych <= '@') {
		if (yych <= '.') {
			if (yych <= '+') goto yy206;
			if (yych <= ',') goto yy216;
			goto yy217;
		} else {
			if (yych <= '/') goto yy218;
			if (yych <= '9') goto yy214;
		}
	} else {
		if (yych <= '_') {
			if (yych <= 'Z') goto yy214;
			if (yych >= '_') goto yy214;
		} else {
			if (yych <= '`') goto yy206;
			if (yych <= 'a') goto yy246;
			if (yych <= 'z') goto yy214;
		}
	}
yy206:
	{   return syck_taguri( YAML_DOMAIN, type_id, strlen( type_id ) ); }
yy207:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= '@') {
		if (yych <= ',') {
			if (yych <= '+') goto yy206;
			goto yy215;
		} else {
			if (yych <= '-') goto yy236;
			if (yych <= '9') goto yy215;
			goto yy206;
		}
	} else {
		if (yych <= '_') {
			if (yych <= 'Z') goto yy215;
			if (yych <= '^') goto yy206;
			goto yy215;
		} else {
			if (yych <= '`') goto yy206;
			if (yych <= 'z') goto yy215;
			goto yy206;
		}
	}
yy208:
	++YYCURSOR;
	{   return syck_xprivate( type_id + 1, strlen( type_id ) - 1 ); }
yy210:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yybm[0+yych] & 64) {
		goto yy212;
	}
	if (yych <= '@') {
		if (yych <= '.') {
			if (yych <= '+') goto yy206;
			if (yych <= ',') goto yy216;
			goto yy217;
		} else {
			if (yych <= '/') goto yy218;
			if (yych <= '9') goto yy214;
			goto yy206;
		}
	} else {
		if (yych <= '_') {
			if (yych <= 'Z') goto yy214;
			if (yych <= '^') goto yy206;
			goto yy214;
		} else {
			if (yych <= '`') goto yy206;
			if (yych <= 'z') goto yy214;
			goto yy206;
		}
	}
yy211:
	yych = *++YYCURSOR;
	goto yy206;
yy212:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy213:
	if (yybm[0+yych] & 64) {
		goto yy212;
	}
	if (yych <= 'Z') {
		if (yych <= '/') goto yy204;
		if (yych <= '9') goto yy214;
		if (yych <= '@') goto yy204;
	} else {
		if (yych <= '_') {
			if (yych <= '^') goto yy204;
		} else {
			if (yych <= '`') goto yy204;
			if (yych >= '{') goto yy204;
		}
	}
yy214:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 12) YYFILL(12);
	yych = *YYCURSOR;
yy215:
	if (yybm[0+yych] & 64) {
		goto yy212;
	}
	if (yych <= '@') {
		if (yych <= '.') {
			if (yych <= '+') goto yy204;
			if (yych >= '-') goto yy217;
		} else {
			if (yych <= '/') goto yy218;
			if (yych <= '9') goto yy214;
			goto yy204;
		}
	} else {
		if (yych <= '_') {
			if (yych <= 'Z') goto yy214;
			if (yych <= '^') goto yy204;
			goto yy214;
		} else {
			if (yych <= '`') goto yy204;
			if (yych <= 'z') goto yy214;
			goto yy204;
		}
	}
yy216:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy204;
	if (yych <= '9') goto yy224;
	goto yy204;
yy217:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= 'Z') {
		if (yych <= '/') goto yy204;
		if (yych <= '9') goto yy220;
		if (yych <= '@') goto yy204;
		goto yy220;
	} else {
		if (yych <= '_') {
			if (yych <= '^') goto yy204;
			goto yy220;
		} else {
			if (yych <= '`') goto yy204;
			if (yych <= 'z') goto yy220;
			goto yy204;
		}
	}
yy218:
	++YYCURSOR;
	{   char *domain = S_ALLOC_N( char, ( YYCURSOR - type_id ) + 15 );
                    char *uri;

                    domain[0] = '\0';
                    strncat( domain, type_id, ( YYCURSOR - type_id ) - 1 );
                    strcat( domain, "." );
                    strcat( domain, YAML_DOMAIN );
                    uri = syck_taguri( domain, YYCURSOR, YYLIMIT - YYCURSOR );

                    S_FREE( domain );
                    return uri;
                }
yy220:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 12) YYFILL(12);
	yych = *YYCURSOR;
	if (yych <= '9') {
		if (yych <= '-') {
			if (yych <= '+') goto yy204;
			if (yych <= ',') goto yy216;
		} else {
			if (yych <= '.') goto yy217;
			if (yych <= '/') goto yy218;
			goto yy220;
		}
	} else {
		if (yych <= '^') {
			if (yych <= '@') goto yy204;
			if (yych <= 'Z') goto yy220;
			goto yy204;
		} else {
			if (yych == '`') goto yy204;
			if (yych <= 'z') goto yy220;
			goto yy204;
		}
	}
yy222:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '@') {
		if (yych <= '-') {
			if (yych <= ',') goto yy204;
			goto yy222;
		} else {
			if (yych <= '/') goto yy204;
			if (yych <= '9') goto yy220;
			goto yy204;
		}
	} else {
		if (yych <= '_') {
			if (yych <= 'Z') goto yy220;
			if (yych <= '^') goto yy204;
			goto yy220;
		} else {
			if (yych <= '`') goto yy204;
			if (yych <= 'z') goto yy220;
			goto yy204;
		}
	}
yy224:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy204;
	if (yych >= ':') goto yy204;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy204;
	if (yych >= ':') goto yy204;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy204;
	if (yych >= ':') goto yy204;
	yych = *++YYCURSOR;
	if (yych == '-') goto yy228;
	if (yych == '/') goto yy229;
	goto yy204;
yy228:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy204;
	if (yych <= '9') goto yy231;
	goto yy204;
yy229:
	++YYCURSOR;
	{   char *domain = S_ALLOC_N( char, YYCURSOR - type_id );
                               char *uri;

                               domain[0] = '\0';
                               strncat( domain, type_id, ( YYCURSOR - type_id ) - 1 );
                               uri = syck_taguri( domain, YYCURSOR, YYLIMIT - YYCURSOR );

                               S_FREE( domain );
                               return uri;
                            }
yy231:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy204;
	if (yych >= ':') goto yy204;
	yych = *++YYCURSOR;
	if (yych == '-') goto yy233;
	if (yych == '/') goto yy229;
	goto yy204;
yy233:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy204;
	if (yych >= ':') goto yy204;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy204;
	if (yych >= ':') goto yy204;
	yych = *++YYCURSOR;
	if (yych == '/') goto yy229;
	goto yy204;
yy236:
	yych = *++YYCURSOR;
	if (yych != 'p') goto yy213;
	yych = *++YYCURSOR;
	if (yych <= '.') {
		if (yych == ',') goto yy216;
		if (yych <= '-') goto yy213;
		goto yy217;
	} else {
		if (yych <= '/') goto yy218;
		if (yych != 'r') goto yy213;
	}
	yych = *++YYCURSOR;
	if (yych <= '.') {
		if (yych == ',') goto yy216;
		if (yych <= '-') goto yy213;
		goto yy217;
	} else {
		if (yych <= '/') goto yy218;
		if (yych != 'i') goto yy213;
	}
	yych = *++YYCURSOR;
	if (yych <= '.') {
		if (yych == ',') goto yy216;
		if (yych <= '-') goto yy213;
		goto yy217;
	} else {
		if (yych <= '/') goto yy218;
		if (yych != 'v') goto yy213;
	}
	yych = *++YYCURSOR;
	if (yych <= '.') {
		if (yych == ',') goto yy216;
		if (yych <= '-') goto yy213;
		goto yy217;
	} else {
		if (yych <= '/') goto yy218;
		if (yych != 'a') goto yy213;
	}
	yych = *++YYCURSOR;
	if (yych <= '.') {
		if (yych == ',') goto yy216;
		if (yych <= '-') goto yy213;
		goto yy217;
	} else {
		if (yych <= '/') goto yy218;
		if (yych != 't') goto yy213;
	}
	yych = *++YYCURSOR;
	if (yych <= '.') {
		if (yych == ',') goto yy216;
		if (yych <= '-') goto yy213;
		goto yy217;
	} else {
		if (yych <= '/') goto yy218;
		if (yych != 'e') goto yy213;
	}
	yych = *++YYCURSOR;
	if (yych <= '.') {
		if (yych == ',') goto yy216;
		if (yych <= '-') goto yy213;
		goto yy217;
	} else {
		if (yych <= '/') goto yy218;
		if (yych != ':') goto yy213;
	}
	++YYCURSOR;
	{   return syck_strndup( type_id, strlen( type_id ) ); }
yy246:
	yych = *++YYCURSOR;
	if (yych <= '.') {
		if (yych == ',') goto yy216;
		if (yych <= '-') goto yy213;
		goto yy217;
	} else {
		if (yych <= '/') goto yy218;
		if (yych != 'g') goto yy213;
	}
	yych = *++YYCURSOR;
	if (yych <= '.') {
		if (yych == ',') goto yy216;
		if (yych <= '-') goto yy213;
		goto yy217;
	} else {
		if (yych <= '/') goto yy218;
		if (yych != ':') goto yy213;
	}
	yych = *++YYCURSOR;
	if (yych <= '+') goto yy250;
	if (yych <= '.') goto yy204;
	goto yy250;
yy249:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 12) YYFILL(12);
	yych = *YYCURSOR;
yy250:
	if (yych <= '9') {
		if (yych <= '-') {
			if (yych <= '+') goto yy204;
			if (yych <= ',') goto yy253;
		} else {
			if (yych <= '.') goto yy254;
			if (yych <= '/') goto yy204;
			goto yy249;
		}
	} else {
		if (yych <= '^') {
			if (yych <= '@') goto yy204;
			if (yych <= 'Z') goto yy249;
			goto yy204;
		} else {
			if (yych == '`') goto yy204;
			if (yych <= 'z') goto yy249;
			goto yy204;
		}
	}
yy251:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '@') {
		if (yych <= '-') {
			if (yych <= ',') goto yy204;
			goto yy251;
		} else {
			if (yych <= '/') goto yy204;
			if (yych <= '9') goto yy249;
			goto yy204;
		}
	} else {
		if (yych <= '_') {
			if (yych <= 'Z') goto yy249;
			if (yych <= '^') goto yy204;
			goto yy249;
		} else {
			if (yych <= '`') goto yy204;
			if (yych <= 'z') goto yy249;
			goto yy204;
		}
	}
yy253:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy204;
	if (yych <= '9') goto yy259;
	goto yy204;
yy254:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= 'Z') {
		if (yych <= '/') goto yy204;
		if (yych <= '9') goto yy255;
		if (yych <= '@') goto yy204;
	} else {
		if (yych <= '_') {
			if (yych <= '^') goto yy204;
		} else {
			if (yych <= '`') goto yy204;
			if (yych >= '{') goto yy204;
		}
	}
yy255:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 12) YYFILL(12);
	yych = *YYCURSOR;
	if (yych <= '9') {
		if (yych <= '-') {
			if (yych <= '+') goto yy204;
			if (yych <= ',') goto yy253;
		} else {
			if (yych <= '.') goto yy254;
			if (yych <= '/') goto yy204;
			goto yy255;
		}
	} else {
		if (yych <= '^') {
			if (yych <= '@') goto yy204;
			if (yych <= 'Z') goto yy255;
			goto yy204;
		} else {
			if (yych == '`') goto yy204;
			if (yych <= 'z') goto yy255;
			goto yy204;
		}
	}
yy257:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych <= '@') {
		if (yych <= '-') {
			if (yych <= ',') goto yy204;
			goto yy257;
		} else {
			if (yych <= '/') goto yy204;
			if (yych <= '9') goto yy255;
			goto yy204;
		}
	} else {
		if (yych <= '_') {
			if (yych <= 'Z') goto yy255;
			if (yych <= '^') goto yy204;
			goto yy255;
		} else {
			if (yych <= '`') goto yy204;
			if (yych <= 'z') goto yy255;
			goto yy204;
		}
	}
yy259:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy204;
	if (yych >= ':') goto yy204;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy204;
	if (yych >= ':') goto yy204;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy204;
	if (yych >= ':') goto yy204;
	yych = *++YYCURSOR;
	if (yych == '-') goto yy263;
	if (yych == ':') goto yy264;
	goto yy204;
yy263:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy204;
	if (yych <= '9') goto yy266;
	goto yy204;
yy264:
	++YYCURSOR;
	{   return syck_strndup( type_id, strlen( type_id ) ); }
yy266:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy204;
	if (yych >= ':') goto yy204;
	yych = *++YYCURSOR;
	if (yych == '-') goto yy268;
	if (yych == ':') goto yy264;
	goto yy204;
yy268:
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy204;
	if (yych >= ':') goto yy204;
	yych = *++YYCURSOR;
	if (yych <= '/') goto yy204;
	if (yych >= ':') goto yy204;
	++YYCURSOR;
	if ((yych = *YYCURSOR) == ':') goto yy264;
	goto yy204;
}


}
