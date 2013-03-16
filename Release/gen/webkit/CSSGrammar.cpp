/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         cssyyparse
#define yylex           cssyylex
#define yyerror         cssyyerror
#define yylval          cssyylval
#define yychar          cssyychar
#define yydebug         cssyydebug
#define yynerrs         cssyynerrs


/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "../../../../../out/Release/gen/webkit/CSSGrammar.y"


/*
 *  Copyright (C) 2002-2003 Lars Knoll (knoll@kde.org)
 *  Copyright (C) 2004, 2005, 2006, 2007, 2008, 2009, 2010 Apple Inc. All rights reserved.
 *  Copyright (C) 2006 Alexey Proskuryakov (ap@nypop.com)
 *  Copyright (C) 2008 Eric Seidel <eric@webkit.org>
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#include "config.h"

#include "CSSParser.h"
#include "CSSParserMode.h"
#include "CSSPrimitiveValue.h"
#include "CSSPropertyNames.h"
#include "CSSSelector.h"
#include "CSSSelectorList.h"
#include "Document.h"
#include "HTMLNames.h"
#include "MediaList.h"
#include "MediaQueryExp.h"
#include "StyleRule.h"
#include "StyleSheetContents.h"
#include "WebKitCSSKeyframeRule.h"
#include "WebKitCSSKeyframesRule.h"
#include <wtf/FastMalloc.h>
#include <stdlib.h>
#include <string.h>

using namespace WebCore;
using namespace HTMLNames;

#define YYMALLOC fastMalloc
#define YYFREE fastFree

#define YYENABLE_NLS 0
#define YYLTYPE_IS_TRIVIAL 1
#define YYMAXDEPTH 10000
#define YYDEBUG 0

#if YYDEBUG > 0
#define YYPRINT(File,Type,Value) print_token_value(File,Type,Value)
static void print_token_value(FILE * yyoutput, int yytype, YYSTYPE const &yyvalue)
{
    switch (yytype) {
    case IDENT:
    case STRING:
    case NTH:
    case HEX:
    case IDSEL:
    case DIMEN:
    case INVALIDDIMEN:
    case URI:
    case FUNCTION:
    case ANYFUNCTION:
    case NOTFUNCTION:
    case CALCFUNCTION:
    case MINFUNCTION:
    case MAXFUNCTION:
    case VAR_DEFINITION:
    case UNICODERANGE:
        YYFPRINTF(yyoutput, "%s", String(yyvalue.string).utf8().data());
        break;
    default:
        break;
    }
}
#endif



/* Line 268 of yacc.c  */
#line 166 "../../../../../out/Release/gen/webkit/CSSGrammar.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOKEN_EOF = 0,
     LOWEST_PREC = 258,
     UNIMPORTANT_TOK = 259,
     WHITESPACE = 260,
     SGML_CD = 261,
     INCLUDES = 262,
     DASHMATCH = 263,
     BEGINSWITH = 264,
     ENDSWITH = 265,
     CONTAINS = 266,
     STRING = 267,
     IDENT = 268,
     NTH = 269,
     HEX = 270,
     IDSEL = 271,
     IMPORT_SYM = 272,
     PAGE_SYM = 273,
     MEDIA_SYM = 274,
     FONT_FACE_SYM = 275,
     HOST_SYM = 276,
     CHARSET_SYM = 277,
     NAMESPACE_SYM = 278,
     VARFUNCTION = 279,
     WEBKIT_RULE_SYM = 280,
     WEBKIT_DECLS_SYM = 281,
     WEBKIT_KEYFRAME_RULE_SYM = 282,
     WEBKIT_KEYFRAMES_SYM = 283,
     WEBKIT_VALUE_SYM = 284,
     WEBKIT_MEDIAQUERY_SYM = 285,
     WEBKIT_SELECTOR_SYM = 286,
     WEBKIT_REGION_RULE_SYM = 287,
     WEBKIT_VIEWPORT_RULE_SYM = 288,
     TOPLEFTCORNER_SYM = 289,
     TOPLEFT_SYM = 290,
     TOPCENTER_SYM = 291,
     TOPRIGHT_SYM = 292,
     TOPRIGHTCORNER_SYM = 293,
     BOTTOMLEFTCORNER_SYM = 294,
     BOTTOMLEFT_SYM = 295,
     BOTTOMCENTER_SYM = 296,
     BOTTOMRIGHT_SYM = 297,
     BOTTOMRIGHTCORNER_SYM = 298,
     LEFTTOP_SYM = 299,
     LEFTMIDDLE_SYM = 300,
     LEFTBOTTOM_SYM = 301,
     RIGHTTOP_SYM = 302,
     RIGHTMIDDLE_SYM = 303,
     RIGHTBOTTOM_SYM = 304,
     ATKEYWORD = 305,
     IMPORTANT_SYM = 306,
     MEDIA_ONLY = 307,
     MEDIA_NOT = 308,
     MEDIA_AND = 309,
     REMS = 310,
     QEMS = 311,
     EMS = 312,
     EXS = 313,
     PXS = 314,
     CMS = 315,
     MMS = 316,
     INS = 317,
     PTS = 318,
     PCS = 319,
     DEGS = 320,
     RADS = 321,
     GRADS = 322,
     TURNS = 323,
     MSECS = 324,
     SECS = 325,
     HERTZ = 326,
     KHERTZ = 327,
     DIMEN = 328,
     INVALIDDIMEN = 329,
     PERCENTAGE = 330,
     FLOATTOKEN = 331,
     INTEGER = 332,
     VW = 333,
     VH = 334,
     VMIN = 335,
     DPPX = 336,
     DPI = 337,
     DPCM = 338,
     URI = 339,
     FUNCTION = 340,
     ANYFUNCTION = 341,
     CUEFUNCTION = 342,
     NOTFUNCTION = 343,
     CALCFUNCTION = 344,
     MINFUNCTION = 345,
     MAXFUNCTION = 346,
     VAR_DEFINITION = 347,
     UNICODERANGE = 348
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 89 "../../../../../out/Release/gen/webkit/CSSGrammar.y"

    bool boolean;
    char character;
    int integer;
    double number;
    CSSParserString string;
    StyleRuleBase* rule;
    Vector<RefPtr<StyleRuleBase> >* ruleList;
    CSSParserSelector* selector;
    Vector<OwnPtr<CSSParserSelector> >* selectorList;
    CSSSelector::MarginBoxType marginBox;
    CSSSelector::Relation relation;
    MediaQuerySet* mediaList;
    MediaQuery* mediaQuery;
    MediaQuery::Restrictor mediaQueryRestrictor;
    MediaQueryExp* mediaQueryExp;
    CSSParserValue value;
    CSSParserValueList* valueList;
    Vector<OwnPtr<MediaQueryExp> >* mediaQueryExpList;
    StyleKeyframe* keyframe;
    Vector<RefPtr<StyleKeyframe> >* keyframeRuleList;
    float val;
    CSSPropertyID id;



/* Line 293 of yacc.c  */
#line 323 "../../../../../out/Release/gen/webkit/CSSGrammar.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

/* Line 343 of yacc.c  */
#line 113 "../../../../../out/Release/gen/webkit/CSSGrammar.y"

static inline int cssyyerror(void*, const char*)
{
    return 1;
}


/* Line 343 of yacc.c  */
#line 343 "../../../../../out/Release/gen/webkit/CSSGrammar.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1943

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  114
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  325
/* YYNRULES -- Number of states.  */
#define YYNSTATES  625

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   348

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,   112,     2,   113,     2,     2,
     102,   103,    20,   105,   104,   108,    18,   111,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    17,   101,
       2,   110,   107,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    19,     2,   109,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    99,    21,   100,   106,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    11,    14,    17,    20,    23,    26,
      33,    40,    46,    52,    58,    64,    65,    68,    69,    72,
      75,    76,    78,    80,    82,    88,    92,    96,   102,   106,
     107,   111,   113,   115,   117,   119,   121,   123,   125,   127,
     129,   131,   133,   135,   137,   138,   142,   143,   147,   149,
     151,   153,   155,   157,   159,   161,   163,   165,   167,   169,
     171,   172,   180,   188,   196,   201,   206,   213,   220,   224,
     228,   229,   232,   234,   236,   239,   240,   245,   255,   257,
     263,   264,   268,   269,   271,   273,   275,   280,   281,   283,
     285,   290,   293,   294,   295,   297,   308,   317,   322,   325,
     326,   337,   339,   341,   342,   346,   353,   355,   361,   364,
     366,   367,   378,   383,   388,   390,   393,   395,   396,   398,
     403,   404,   412,   414,   416,   418,   420,   422,   424,   426,
     428,   430,   432,   434,   436,   438,   440,   442,   444,   445,
     454,   459,   464,   465,   474,   479,   481,   482,   493,   496,
     499,   502,   504,   505,   507,   509,   511,   512,   513,   514,
     524,   525,   527,   534,   537,   540,   542,   544,   547,   551,
     554,   556,   559,   562,   564,   567,   569,   572,   576,   579,
     581,   587,   590,   592,   594,   596,   599,   602,   604,   606,
     608,   610,   612,   615,   618,   623,   632,   638,   648,   650,
     652,   654,   656,   658,   660,   662,   664,   667,   670,   674,
     682,   689,   696,   704,   711,   718,   720,   723,   725,   729,
     731,   734,   737,   741,   745,   750,   754,   760,   765,   770,
     777,   783,   789,   792,   799,   806,   809,   813,   818,   821,
     824,   827,   828,   830,   834,   837,   841,   844,   847,   850,
     851,   853,   856,   859,   862,   865,   869,   872,   875,   878,
     881,   887,   889,   891,   893,   896,   899,   902,   905,   908,
     911,   914,   917,   920,   923,   926,   929,   932,   935,   938,
     941,   944,   947,   950,   953,   956,   959,   962,   965,   968,
     971,   974,   977,   983,   988,   993,   997,   999,  1005,  1008,
    1011,  1014,  1017,  1020,  1027,  1030,  1034,  1038,  1040,  1043,
    1045,  1050,  1056,  1060,  1062,  1064,  1070,  1074,  1076,  1079,
    1083,  1087,  1090,  1096,  1100,  1102
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     115,     0,    -1,   122,   124,   123,   128,    -1,   116,   122,
      -1,   118,   122,    -1,   119,   122,    -1,   120,   122,    -1,
     121,   122,    -1,   117,   122,    -1,    30,    99,   122,   129,
     122,   100,    -1,    32,    99,   122,   159,   122,   100,    -1,
      31,    99,   179,   201,   100,    -1,    34,    99,   122,   206,
     100,    -1,    35,     5,   122,   147,   100,    -1,    36,    99,
     122,   185,   100,    -1,    -1,   122,     5,    -1,    -1,   123,
       6,    -1,   123,     5,    -1,    -1,   126,    -1,   100,    -1,
       0,    -1,    27,   122,    12,   122,   101,    -1,    27,     1,
     222,    -1,    27,     1,   101,    -1,    27,   122,    12,   122,
     101,    -1,    27,   122,   101,    -1,    -1,   128,   130,   123,
      -1,   183,    -1,   153,    -1,   163,    -1,   170,    -1,   156,
      -1,   138,    -1,   137,    -1,   175,    -1,   172,    -1,   129,
      -1,   127,    -1,   221,    -1,   220,    -1,    -1,   131,   134,
     123,    -1,    -1,   132,   133,   123,    -1,   183,    -1,   163,
      -1,   170,    -1,   156,    -1,   133,    -1,   221,    -1,   220,
      -1,   138,    -1,   137,    -1,   153,    -1,   175,    -1,   122,
      -1,    -1,   136,    22,   135,   140,   122,   148,   101,    -1,
     136,    22,   135,   140,   122,   148,     0,    -1,   136,    22,
     135,   140,   122,   148,   222,    -1,   136,    22,     1,   101,
      -1,   136,    22,     1,   222,    -1,    28,   122,   139,   140,
     122,   101,    -1,    28,   122,   139,   140,   122,   222,    -1,
      28,     1,   222,    -1,    28,     1,   101,    -1,    -1,    13,
     122,    -1,    12,    -1,    89,    -1,    13,   122,    -1,    -1,
      17,   122,   206,   122,    -1,   146,   122,   102,   122,   141,
     122,   142,   103,   122,    -1,   143,    -1,   144,   122,    59,
     122,   143,    -1,    -1,    59,   122,   144,    -1,    -1,    57,
      -1,    58,    -1,   144,    -1,   146,   122,   154,   145,    -1,
      -1,   149,    -1,   147,    -1,   149,   104,   122,   147,    -1,
     149,     1,    -1,    -1,    -1,   122,    -1,   151,    24,   122,
     149,   181,    99,   150,   122,   131,   219,    -1,   151,    24,
     152,    99,   150,   122,   131,   219,    -1,   151,    24,   152,
     101,    -1,    13,   122,    -1,    -1,   155,    33,   122,   157,
     152,    99,   150,   122,   158,   125,    -1,    13,    -1,    12,
      -1,    -1,   158,   159,   122,    -1,   160,   122,    99,   122,
     201,   100,    -1,   161,    -1,   160,   122,   104,   122,   161,
      -1,   177,    80,    -1,    13,    -1,    -1,   162,    23,   122,
     164,   152,    99,   150,   179,   165,   125,    -1,   162,    23,
       1,   222,    -1,   162,    23,     1,   101,    -1,    13,    -1,
      13,   199,    -1,   199,    -1,    -1,   201,    -1,   165,   166,
     122,   201,    -1,    -1,   168,   167,   122,    99,   122,   201,
     125,    -1,    39,    -1,    40,    -1,    41,    -1,    42,    -1,
      43,    -1,    44,    -1,    45,    -1,    46,    -1,    47,    -1,
      48,    -1,    49,    -1,    50,    -1,    51,    -1,    52,    -1,
      53,    -1,    54,    -1,    -1,   169,    25,   152,    99,   150,
     179,   201,   125,    -1,   169,    25,     1,   222,    -1,   169,
      25,     1,   101,    -1,    -1,   171,    26,   152,    99,   150,
     122,   131,   219,    -1,   171,    26,   152,   101,    -1,   185,
      -1,    -1,   174,    37,     5,   173,   181,    99,   150,   122,
     132,   219,    -1,   105,   122,    -1,   106,   122,    -1,   107,
     122,    -1,   178,    -1,    -1,   108,    -1,   105,    -1,   122,
      -1,    -1,    -1,    -1,   180,   185,   182,   181,    99,   150,
     179,   201,   125,    -1,    -1,   187,    -1,   185,   182,   104,
     122,   184,   187,    -1,   185,     1,    -1,   187,     5,    -1,
     189,    -1,   186,    -1,   186,   189,    -1,   187,   176,   189,
      -1,   187,     1,    -1,    21,    -1,    20,    21,    -1,    13,
      21,    -1,   191,    -1,   191,   192,    -1,   192,    -1,   188,
     191,    -1,   188,   191,   192,    -1,   188,   192,    -1,   189,
      -1,   190,   122,   104,   122,   189,    -1,   190,     1,    -1,
      13,    -1,    20,    -1,   193,    -1,   192,   193,    -1,   192,
       1,    -1,    16,    -1,    15,    -1,   194,    -1,   196,    -1,
     200,    -1,    18,    13,    -1,    13,   122,    -1,    19,   122,
     195,   109,    -1,    19,   122,   195,   197,   122,   198,   122,
     109,    -1,    19,   122,   188,   195,   109,    -1,    19,   122,
     188,   195,   197,   122,   198,   122,   109,    -1,   110,    -1,
       7,    -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,
      13,    -1,    12,    -1,    17,    13,    -1,    17,    13,    -1,
      17,    17,    13,    -1,    17,    17,    92,   122,   190,   122,
     103,    -1,    17,    91,   122,   190,   122,   103,    -1,    17,
      90,   122,    14,   122,   103,    -1,    17,    90,   122,   177,
      82,   122,   103,    -1,    17,    90,   122,    13,   122,   103,
      -1,    17,    93,   122,   189,   122,   103,    -1,   203,    -1,
     202,   203,    -1,   202,    -1,     1,   223,     1,    -1,     1,
      -1,   202,     1,    -1,   202,   223,    -1,   203,   101,   122,
      -1,   203,   223,   122,    -1,   203,   223,   101,   122,    -1,
       1,   101,   122,    -1,     1,   223,     1,   101,   122,    -1,
     202,   203,   101,   122,    -1,   202,     1,   101,   122,    -1,
     202,     1,   223,     1,   101,   122,    -1,    97,    17,   122,
     206,   205,    -1,   204,    17,   122,   206,   205,    -1,   204,
       1,    -1,   204,    17,   122,     1,   206,   205,    -1,   204,
      17,   122,   206,   205,     1,    -1,    56,   122,    -1,   204,
      17,   122,    -1,   204,    17,   122,     1,    -1,   204,   222,
      -1,    13,   122,    -1,    56,   122,    -1,    -1,   208,    -1,
     206,   207,   208,    -1,   206,   223,    -1,   206,   223,     1,
      -1,   206,     1,    -1,   111,   122,    -1,   104,   122,    -1,
      -1,   209,    -1,   178,   209,    -1,    12,   122,    -1,    13,
     122,    -1,    78,   122,    -1,   178,    78,   122,    -1,    89,
     122,    -1,    98,   122,    -1,    15,   122,    -1,   112,   122,
      -1,    29,   122,    13,   103,   122,    -1,   210,    -1,   216,
      -1,   218,    -1,   113,   122,    -1,    82,   122,    -1,    81,
     122,    -1,    80,   122,    -1,    64,   122,    -1,    65,   122,
      -1,    66,   122,    -1,    67,   122,    -1,    68,   122,    -1,
      69,   122,    -1,    70,   122,    -1,    71,   122,    -1,    72,
     122,    -1,    73,   122,    -1,    74,   122,    -1,    75,   122,
      -1,    76,   122,    -1,    77,   122,    -1,    62,   122,    -1,
      61,   122,    -1,    63,   122,    -1,    60,   122,    -1,    83,
     122,    -1,    84,   122,    -1,    85,   122,    -1,    86,   122,
      -1,    87,   122,    -1,    88,   122,    -1,    90,   122,   206,
     103,   122,    -1,    90,   122,   206,     0,    -1,    90,   122,
     103,   122,    -1,    90,   122,     1,    -1,   209,    -1,    29,
     122,    13,   103,   122,    -1,   178,   209,    -1,   105,     5,
      -1,   108,     5,    -1,    20,   122,    -1,   111,   122,    -1,
     102,   122,   214,   122,   103,   122,    -1,   211,   122,    -1,
     214,   212,   211,    -1,   214,   212,   213,    -1,   213,    -1,
     214,     1,    -1,   214,    -1,   215,   104,   122,   214,    -1,
      94,   122,   214,   103,   122,    -1,    94,   122,     1,    -1,
      95,    -1,    96,    -1,   217,   122,   215,   103,   122,    -1,
     217,   122,     1,    -1,   125,    -1,     1,   125,    -1,    55,
       1,   222,    -1,    55,     1,   101,    -1,     1,   222,    -1,
      99,     1,   223,     1,   125,    -1,    99,     1,   125,    -1,
     222,    -1,   223,     1,   222,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   298,   298,   299,   300,   301,   302,   303,   304,   307,
     312,   317,   321,   332,   337,   345,   346,   348,   349,   350,
     352,   353,   357,   358,   361,   368,   370,   374,   377,   381,
     382,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     399,   402,   403,   404,   407,   408,   418,   419,   429,   430,
     431,   432,   435,   436,   437,   438,   439,   440,   441,   444,
     450,   455,   458,   461,   465,   469,   475,   479,   482,   485,
     490,   491,   494,   495,   498,   503,   506,   511,   521,   525,
     531,   534,   539,   542,   545,   550,   554,   560,   563,   566,
     571,   578,   583,   588,   593,   598,   601,   604,   610,   615,
     620,   625,   626,   629,   630,   637,   642,   646,   653,   654,
     666,   671,   681,   685,   691,   696,   703,   708,   714,   715,
     718,   718,   725,   728,   731,   734,   737,   740,   743,   746,
     749,   752,   755,   758,   761,   764,   767,   770,   775,   780,
     784,   788,   794,   799,   803,   809,   819,   824,   834,   835,
     836,   839,   840,   843,   844,   847,   852,   858,   863,   868,
     873,   877,   885,   893,   898,   903,   906,   910,   923,   935,
     940,   941,   942,   945,   949,   954,   959,   963,   968,   975,
     982,   989,   994,  1000,  1006,  1009,  1015,  1020,  1027,  1038,
    1039,  1040,  1043,  1052,  1060,  1065,  1071,  1076,  1084,  1087,
    1090,  1093,  1096,  1099,  1104,  1105,  1108,  1118,  1127,  1136,
    1148,  1161,  1170,  1179,  1196,  1211,  1214,  1219,  1222,  1225,
    1228,  1231,  1236,  1240,  1243,  1246,  1250,  1253,  1259,  1263,
    1269,  1275,  1291,  1295,  1300,  1305,  1309,  1314,  1319,  1324,
    1329,  1330,  1333,  1337,  1350,  1353,  1356,  1361,  1364,  1367,
    1372,  1373,  1374,  1375,  1380,  1381,  1382,  1383,  1384,  1385,
    1386,  1391,  1394,  1397,  1400,  1405,  1406,  1407,  1408,  1409,
    1410,  1411,  1412,  1413,  1414,  1415,  1416,  1417,  1418,  1419,
    1420,  1421,  1422,  1423,  1424,  1425,  1432,  1433,  1434,  1435,
    1436,  1437,  1440,  1448,  1456,  1465,  1475,  1476,  1481,  1484,
    1487,  1490,  1493,  1498,  1512,  1516,  1528,  1540,  1541,  1546,
    1549,  1562,  1570,  1575,  1578,  1583,  1591,  1596,  1599,  1604,
    1607,  1612,  1617,  1620,  1625,  1626
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "TOKEN_EOF", "error", "$undefined", "LOWEST_PREC", "UNIMPORTANT_TOK",
  "WHITESPACE", "SGML_CD", "INCLUDES", "DASHMATCH", "BEGINSWITH",
  "ENDSWITH", "CONTAINS", "STRING", "IDENT", "NTH", "HEX", "IDSEL", "':'",
  "'.'", "'['", "'*'", "'|'", "IMPORT_SYM", "PAGE_SYM", "MEDIA_SYM",
  "FONT_FACE_SYM", "HOST_SYM", "CHARSET_SYM", "NAMESPACE_SYM",
  "VARFUNCTION", "WEBKIT_RULE_SYM", "WEBKIT_DECLS_SYM",
  "WEBKIT_KEYFRAME_RULE_SYM", "WEBKIT_KEYFRAMES_SYM", "WEBKIT_VALUE_SYM",
  "WEBKIT_MEDIAQUERY_SYM", "WEBKIT_SELECTOR_SYM", "WEBKIT_REGION_RULE_SYM",
  "WEBKIT_VIEWPORT_RULE_SYM", "TOPLEFTCORNER_SYM", "TOPLEFT_SYM",
  "TOPCENTER_SYM", "TOPRIGHT_SYM", "TOPRIGHTCORNER_SYM",
  "BOTTOMLEFTCORNER_SYM", "BOTTOMLEFT_SYM", "BOTTOMCENTER_SYM",
  "BOTTOMRIGHT_SYM", "BOTTOMRIGHTCORNER_SYM", "LEFTTOP_SYM",
  "LEFTMIDDLE_SYM", "LEFTBOTTOM_SYM", "RIGHTTOP_SYM", "RIGHTMIDDLE_SYM",
  "RIGHTBOTTOM_SYM", "ATKEYWORD", "IMPORTANT_SYM", "MEDIA_ONLY",
  "MEDIA_NOT", "MEDIA_AND", "REMS", "QEMS", "EMS", "EXS", "PXS", "CMS",
  "MMS", "INS", "PTS", "PCS", "DEGS", "RADS", "GRADS", "TURNS", "MSECS",
  "SECS", "HERTZ", "KHERTZ", "DIMEN", "INVALIDDIMEN", "PERCENTAGE",
  "FLOATTOKEN", "INTEGER", "VW", "VH", "VMIN", "DPPX", "DPI", "DPCM",
  "URI", "FUNCTION", "ANYFUNCTION", "CUEFUNCTION", "NOTFUNCTION",
  "CALCFUNCTION", "MINFUNCTION", "MAXFUNCTION", "VAR_DEFINITION",
  "UNICODERANGE", "'{'", "'}'", "';'", "'('", "')'", "','", "'+'", "'~'",
  "'>'", "'-'", "']'", "'='", "'/'", "'#'", "'%'", "$accept", "stylesheet",
  "webkit_rule", "webkit_keyframe_rule", "webkit_decls", "webkit_value",
  "webkit_mediaquery", "webkit_selector", "maybe_space", "maybe_sgml",
  "maybe_charset", "closing_brace", "charset", "ignored_charset",
  "rule_list", "valid_rule", "rule", "block_rule_list",
  "region_block_rule_list", "block_valid_rule", "block_rule",
  "at_import_header_end_maybe_space", "before_import_rule", "import",
  "namespace", "maybe_ns_prefix", "string_or_uri", "media_feature",
  "maybe_media_value", "media_query_exp", "media_query_exp_list",
  "maybe_and_media_query_exp_list", "maybe_media_restrictor",
  "media_query", "maybe_media_list", "media_list", "at_rule_body_start",
  "before_media_rule", "at_rule_header_end_maybe_space", "media", "medium",
  "before_keyframes_rule", "keyframes", "keyframe_name", "keyframes_rule",
  "keyframe_rule", "key_list", "key", "before_page_rule", "page",
  "page_selector", "declarations_and_margins", "margin_box", "$@1",
  "margin_sym", "before_font_face_rule", "font_face", "before_host_rule",
  "host", "region_selector", "before_region_rule", "region", "combinator",
  "maybe_unary_operator", "unary_operator",
  "maybe_space_before_declaration", "before_selector_list",
  "at_rule_header_end", "at_selector_end", "ruleset",
  "before_selector_group_item", "selector_list",
  "selector_with_trailing_whitespace", "selector", "namespace_selector",
  "simple_selector", "simple_selector_list", "element_name",
  "specifier_list", "specifier", "class", "attr_name", "attrib", "match",
  "ident_or_string", "pseudo_page", "pseudo", "declaration_list",
  "decl_list", "declaration", "property", "prio", "expr", "operator",
  "term", "unary_term", "function", "calc_func_term", "calc_func_operator",
  "calc_func_paren_expr", "calc_func_expr", "calc_func_expr_list",
  "calc_function", "min_or_max", "min_or_max_function", "save_block",
  "invalid_at", "invalid_rule", "invalid_block", "invalid_block_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    58,    46,    91,
      42,   124,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   123,
     125,    59,    40,    41,    44,    43,   126,    62,    45,    93,
      61,    47,    35,    37
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   114,   115,   115,   115,   115,   115,   115,   115,   116,
     117,   118,   119,   120,   121,   122,   122,   123,   123,   123,
     124,   124,   125,   125,   126,   126,   126,   127,   127,   128,
     128,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     130,   130,   130,   130,   131,   131,   132,   132,   133,   133,
     133,   133,   134,   134,   134,   134,   134,   134,   134,   135,
     136,   137,   137,   137,   137,   137,   138,   138,   138,   138,
     139,   139,   140,   140,   141,   142,   142,   143,   144,   144,
     145,   145,   146,   146,   146,   147,   147,   148,   148,   149,
     149,   149,   150,   151,   152,   153,   153,   153,   154,   155,
     156,   157,   157,   158,   158,   159,   160,   160,   161,   161,
     162,   163,   163,   163,   164,   164,   164,   164,   165,   165,
     167,   166,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   169,   170,
     170,   170,   171,   172,   172,   173,   174,   175,   176,   176,
     176,   177,   177,   178,   178,   179,   180,   181,   182,   183,
     184,   185,   185,   185,   186,   187,   187,   187,   187,   187,
     188,   188,   188,   189,   189,   189,   189,   189,   189,   190,
     190,   190,   191,   191,   192,   192,   192,   193,   193,   193,
     193,   193,   194,   195,   196,   196,   196,   196,   197,   197,
     197,   197,   197,   197,   198,   198,   199,   200,   200,   200,
     200,   200,   200,   200,   200,   201,   201,   201,   201,   201,
     201,   201,   202,   202,   202,   202,   202,   202,   202,   202,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   204,
     205,   205,   206,   206,   206,   206,   206,   207,   207,   207,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   210,   210,   210,   210,   211,   211,   211,   212,
     212,   212,   212,   213,   214,   214,   214,   214,   214,   215,
     215,   216,   216,   217,   217,   218,   218,   219,   219,   220,
     220,   221,   222,   222,   223,   223
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     2,     2,     2,     2,     2,     6,
       6,     5,     5,     5,     5,     0,     2,     0,     2,     2,
       0,     1,     1,     1,     5,     3,     3,     5,     3,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     3,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     7,     7,     7,     4,     4,     6,     6,     3,     3,
       0,     2,     1,     1,     2,     0,     4,     9,     1,     5,
       0,     3,     0,     1,     1,     1,     4,     0,     1,     1,
       4,     2,     0,     0,     1,    10,     8,     4,     2,     0,
      10,     1,     1,     0,     3,     6,     1,     5,     2,     1,
       0,    10,     4,     4,     1,     2,     1,     0,     1,     4,
       0,     7,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     8,
       4,     4,     0,     8,     4,     1,     0,    10,     2,     2,
       2,     1,     0,     1,     1,     1,     0,     0,     0,     9,
       0,     1,     6,     2,     2,     1,     1,     2,     3,     2,
       1,     2,     2,     1,     2,     1,     2,     3,     2,     1,
       5,     2,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     2,     2,     4,     8,     5,     9,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     3,     7,
       6,     6,     7,     6,     6,     1,     2,     1,     3,     1,
       2,     2,     3,     3,     4,     3,     5,     4,     4,     6,
       5,     5,     2,     6,     6,     2,     3,     4,     2,     2,
       2,     0,     1,     3,     2,     3,     2,     2,     2,     0,
       1,     2,     2,     2,     2,     3,     2,     2,     2,     2,
       5,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     5,     4,     4,     3,     1,     5,     2,     2,
       2,     2,     2,     6,     2,     3,     3,     1,     2,     1,
       4,     5,     3,     1,     1,     5,     3,     1,     2,     3,
       3,     2,     5,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      15,     0,     0,     0,     0,     0,     0,     0,    15,    15,
      15,    15,    15,    15,    20,    15,    15,    15,    15,    15,
      15,     1,     3,     8,     4,     5,     6,     7,    16,     0,
      17,    21,   156,   155,     0,   152,     0,    82,     0,     0,
       0,    29,     0,    15,     0,    37,    36,     0,    32,     0,
      35,     0,    33,     0,    34,     0,    39,     0,    38,     0,
      31,   219,    15,    15,     0,     0,     0,   215,     0,   109,
     154,   153,    15,    15,   106,     0,   151,    15,    15,    15,
      15,    15,    15,    15,    15,    15,    15,    15,    15,    15,
      15,    15,    15,    15,    15,    15,    15,    15,    15,    15,
      15,    15,    15,    15,    15,    15,    15,    15,    15,    15,
      15,    15,   313,   314,    15,    15,    15,     0,     0,   242,
     250,   261,   262,    15,   263,    83,    84,    78,    85,    15,
       0,   182,   188,   187,     0,     0,    15,   183,   170,     0,
     166,     0,     0,   165,   173,     0,   184,   189,   190,   191,
       0,    26,    25,    15,    19,    18,     0,     0,    70,     0,
       0,    15,    15,     0,     0,    15,     0,     0,    15,   324,
       0,   239,   235,    15,    11,   220,   216,     0,    15,     0,
     232,    15,   238,     0,     0,   108,   252,   253,   258,     0,
     285,   283,   282,   284,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   254,   267,
     266,   265,   286,   287,   288,   289,   290,   291,   256,     0,
       0,   257,   259,   264,    15,   251,   246,    12,    15,    15,
       0,     0,     0,     0,     0,    13,   172,   207,     0,    15,
      15,    15,   192,     0,   171,   163,    14,     0,   167,   169,
     164,    15,    15,    15,     0,   182,   183,   176,     0,     0,
     186,   185,     0,     0,     0,    15,     0,    41,    40,    17,
      43,    42,    69,    68,    15,     0,     9,     0,    59,     0,
      82,     0,     0,     0,   117,     0,    94,     0,     0,     0,
     157,   225,   218,     0,    15,     0,    15,     0,   222,    15,
     223,     0,    10,    15,    15,     0,   295,    15,     0,   312,
      15,    15,     0,   296,    15,   307,     0,   255,   248,   247,
     243,   245,   316,     0,     0,    15,    15,    15,    80,   208,
      15,   152,     0,     0,    15,     0,     0,     0,    15,   148,
     149,   150,   168,     0,    23,    22,   323,     0,    24,   321,
       0,     0,    30,    71,    72,    73,    15,    64,    65,    15,
      89,     0,    92,    97,   102,   101,    15,   113,   112,   114,
       0,    15,   116,   141,   140,    92,    92,   144,   157,     0,
       0,    15,   325,     0,   228,     0,   227,   224,   237,     0,
       0,   152,    15,   294,   293,    15,     0,     0,   298,   304,
     308,    15,    15,     0,     0,    15,     0,    15,    15,    82,
      98,     0,    15,    86,     0,    15,    15,     0,   179,     0,
      15,   193,    15,     0,   199,   200,   201,   202,   203,   194,
     198,    15,   160,     0,    15,    28,   320,   319,     0,    87,
      91,    15,     0,    15,     0,   115,   206,     0,    15,    15,
       0,    92,   226,    15,   230,    15,     0,     0,     0,   107,
     260,   292,     0,     0,   301,   311,   299,   300,   302,   305,
     306,   315,     0,    79,    15,    15,    15,    82,     0,     0,
       0,    15,   181,     0,     0,   196,    15,     0,     0,   322,
       0,    66,    67,     0,     0,    82,    92,    44,    92,    92,
       0,    44,    92,    15,   240,   229,   233,   234,   105,    15,
       0,     0,     0,    74,    75,    81,     0,   213,   211,     0,
     210,    15,   214,     0,   205,   204,    15,     0,    27,    62,
      61,    63,    90,    15,     0,    15,    15,     0,     0,    15,
       0,   297,    15,    15,     0,   209,   212,     0,    15,     0,
      44,     0,   317,    52,    17,    56,    55,    57,    51,    49,
      50,    58,    48,    96,    54,    53,   103,     0,   139,   143,
      46,     0,   303,     0,    15,   180,     0,   195,     0,   318,
      45,   152,     0,   118,     0,   159,     0,    77,   197,    95,
     100,    15,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   111,    15,
     120,     0,    17,   147,    76,   104,     0,    15,    47,   119,
       0,    15,     0,     0,   121
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,    13,    33,    41,
      30,   552,    31,   267,   156,    43,   269,   534,   584,   553,
     554,   279,    44,   555,   556,   275,   356,   476,   544,   127,
     128,   413,   129,   360,   493,   361,   443,    47,   281,   557,
     328,    49,   558,   366,   581,    72,    73,    74,    51,   559,
     371,   582,   609,   617,   610,    53,   560,    55,    56,   378,
      57,   561,   254,    75,   117,    34,    59,   380,   247,   562,
     488,   139,   140,   141,   142,   143,   419,   144,   145,   146,
     147,   337,   148,   431,   526,   372,   149,    65,    66,    67,
      68,   454,   118,   230,   119,   120,   121,   314,   406,   315,
     316,   324,   122,   123,   124,   563,   564,   565,   169,   231
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -375
static const yytype_int16 yypact[] =
{
     789,   -24,    93,   139,   174,   304,   192,   355,  -375,  -375,
    -375,  -375,  -375,  -375,    44,  -375,  -375,  -375,  -375,  -375,
    -375,  -375,   335,   335,   335,   335,   335,   335,  -375,    56,
    -375,  -375,   684,   335,   398,   167,  1293,   399,   486,   297,
     257,    50,   373,  -375,   358,  -375,  -375,   382,  -375,   325,
    -375,   386,  -375,   396,  -375,   392,  -375,   405,  -375,   562,
    -375,   336,  -375,  -375,   449,   350,  1651,   366,    57,  -375,
    -375,  -375,  -375,  -375,  -375,   400,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,  -375,  -375,  -375,  -375,  1826,  1104,  -375,
    -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,   323,  -375,
     377,   452,  -375,  -375,   480,   472,  -375,   479,  -375,   132,
     562,   340,   707,  -375,   578,   821,  -375,  -375,  -375,  -375,
     512,  -375,  -375,  -375,  -375,  -375,  1830,   393,    47,   222,
     447,  -375,  -375,   334,   189,  -375,   513,    21,  -375,  -375,
     516,   335,   335,  -375,  -375,   397,   409,  1669,  -375,   511,
    -375,  -375,  -375,   242,   145,  -375,   335,   335,   335,   199,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,  1206,
    1385,   335,   335,   335,  -375,  -375,  -375,  -375,  -375,  -375,
    1560,   587,  1434,   344,   258,  -375,  -375,  -375,    38,  -375,
    -375,  -375,  -375,   509,  -375,  -375,  -375,   415,  -375,  -375,
    -375,  -375,  -375,  -375,   562,  -375,  -375,   578,   917,  1024,
    -375,  -375,   119,   179,   421,  -375,   530,  -375,  -375,  -375,
    -375,  -375,  -375,  -375,  -375,    35,  -375,   424,   335,    35,
     263,   433,   194,   445,   419,   467,   335,   438,   502,   562,
     415,   335,   505,  1293,  -375,   539,  -375,   421,   335,  -375,
     335,   803,  -375,  -375,  -375,   442,  -375,  -375,   894,  -375,
    -375,  -375,  1855,  -375,  -375,  -375,   181,   335,   335,   335,
    -375,   421,  -375,   156,   215,  -375,  -375,  -375,   482,  -375,
    -375,   197,   486,   486,   452,   479,   536,   206,  -375,   335,
     335,   335,  -375,  1133,  -375,  -375,  -375,   568,  -375,  -375,
     245,   506,    50,   335,  -375,  -375,  -375,  -375,  -375,  -375,
    -375,   196,  -375,  -375,  -375,  -375,  -375,  -375,  -375,   559,
     571,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,   232,
     490,  -375,  -375,   701,   335,   514,   335,   335,  1560,   701,
     374,   167,  -375,   335,  -375,  -375,   230,  1483,  -375,   335,
    -375,  -375,  -375,   580,   585,  -375,  1736,  -375,  -375,   399,
     335,   324,  -375,  -375,   486,  -375,  -375,   532,  -375,   117,
    -375,   335,  -375,   418,  -375,  -375,  -375,  -375,  -375,  -375,
    -375,  -375,   335,   119,  -375,  -375,  -375,  -375,   251,   356,
    -375,  -375,   499,  -375,   519,  -375,  -375,   520,  -375,  -375,
     523,  -375,   335,  -375,  -375,  -375,   701,  1561,   524,  -375,
     335,   335,   541,   265,   335,   335,  -375,  -375,   335,  -375,
    -375,   335,  1483,  -375,  -375,  -375,  -375,   399,   117,    64,
      71,  -375,  -375,   178,   195,  -375,  -375,   456,   562,  -375,
     253,  -375,  -375,   177,    40,   399,  -375,   335,  -375,  -375,
     398,   335,  -375,  -375,   335,   335,  -375,  -375,  -375,  -375,
     198,   286,   107,   335,    49,   323,   229,  -375,  -375,   240,
    -375,  -375,  -375,   456,  -375,  -375,  -375,   383,  -375,  -375,
    -375,  -375,  -375,  -375,  1739,  -375,  -375,    32,  1739,  -375,
     398,   335,  -375,  -375,   542,  -375,  -375,   486,  -375,    39,
     335,   119,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,  -375,  -375,  -375,   335,   398,  -375,  -375,
     335,    32,   335,  1293,  -375,  -375,    43,  -375,  1739,  -375,
      50,    37,  1210,  -375,  1312,  -375,   999,   335,  -375,  -375,
    -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,
    -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,
    -375,    32,  -375,  -375,   335,   335,   374,  -375,    50,  -375,
     184,  -375,   374,    32,  -375
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,     0,  -264,
    -375,  -258,  -375,  -375,  -375,   510,  -375,  -296,  -375,    58,
    -375,  -375,  -375,   -18,    -7,  -375,   367,  -375,  -375,   214,
     201,  -375,  -350,   -35,  -375,   254,  -311,  -375,  -141,    -2,
    -375,  -375,    -1,  -375,  -375,    98,  -375,   293,  -375,     2,
    -375,  -375,  -375,  -375,  -375,  -375,     3,  -375,  -375,  -375,
    -375,    13,  -375,   363,   -34,  -136,  -375,  -308,   529,    14,
    -375,   -52,  -375,   209,   460,  -137,   290,   563,  -106,  -112,
    -375,   375,  -375,   292,   205,   349,  -375,  -374,  -375,   653,
    -375,  -322,  -180,  -375,   501,   -89,  -375,   326,  -375,   327,
    -226,  -375,  -375,  -375,  -375,  -161,   573,   579,   187,   -40
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -311
static const yytype_int16 yytable[] =
{
      14,    76,   130,   248,   346,   352,   323,   167,    22,    23,
      24,    25,    26,    27,    45,    32,   458,    35,    36,    37,
      38,   170,   245,   287,   288,    46,   177,   179,   225,    40,
      48,    50,   344,   261,    52,    54,   258,   344,   259,   308,
     -88,   440,   158,   159,    28,    58,    60,   354,    28,    28,
      69,   329,    28,   442,    28,   154,   155,    39,   180,   474,
     274,   -15,   171,   172,   448,   449,   543,   457,   -15,    28,
     450,    29,   183,   184,   181,    15,    28,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,    28,   383,   221,   222,   223,   342,   482,   344,
    -158,   389,   -15,   232,   355,  -158,   537,   474,   233,   234,
     330,   313,   345,   245,   506,   295,   243,   345,    45,   -88,
     503,   -88,    70,   313,   441,    71,   261,   261,   577,    46,
      28,   343,   588,   263,    48,    50,   150,   400,    52,    54,
     278,   280,   282,   284,   286,   286,   571,   517,   291,    58,
      60,   463,    28,   293,   518,   489,   401,   529,   298,   300,
      69,   301,   400,    28,    28,   533,   312,   535,   536,    28,
     285,   539,    16,   583,   -15,   418,   420,   440,   312,    28,
      28,   401,    28,    28,    28,   538,   364,   365,   456,   327,
     415,   416,   305,   424,   425,   426,   427,   428,   150,   345,
     -15,   -15,   347,   398,   317,   444,   152,    28,   318,   319,
     447,   261,   246,   245,    28,    28,  -158,   379,    17,   331,
     332,   333,   619,   462,   303,    28,   511,    28,   623,   304,
      28,   339,   340,   341,   578,   182,    28,   434,    28,  -309,
    -309,   403,    28,    28,   404,   350,   400,   405,    28,   153,
     -15,   326,    70,    18,   353,    71,   150,   418,   530,   568,
     348,   520,   521,   621,   402,   401,   403,   400,   -15,   404,
     580,    20,   405,   579,   384,  -157,   386,    76,   522,   387,
     441,   542,    70,   390,   391,    71,   401,   393,   313,    19,
     396,   397,   500,   585,   399,   429,   430,   313,   407,   408,
     125,   126,   276,   590,   608,   409,   410,   411,   -15,    28,
     414,  -145,   545,   521,   421,   283,  -158,   475,   432,   -15,
      28,   249,   302,   546,   273,   250,   435,   -15,   618,    28,
     150,   -15,   491,   579,   528,    21,   438,    76,   162,   439,
     327,    28,   -94,   312,   -94,   624,   286,   540,   -15,   -82,
     403,   286,   312,   404,   157,    61,   405,   569,   -15,    28,
     160,   452,   -15,   313,   249,   -15,   -15,    62,   250,  -310,
    -310,   403,   460,   586,   404,   461,   150,   405,   151,    61,
     567,   464,   465,   325,    28,   468,   161,   471,   472,   163,
     575,    62,   477,   125,   126,   479,   480,   589,   165,   483,
     484,   164,   421,   613,    28,   424,   425,   426,   427,   428,
      63,   487,   369,   -15,   490,   150,   370,   168,   312,  -161,
    -161,   495,   166,   497,  -161,   251,   252,   253,   277,   501,
     174,   349,   -15,   504,    63,   505,   125,   126,   -82,   -15,
     532,    28,   -15,   510,   358,   150,   173,   178,   524,   525,
     368,    64,   374,   236,   512,   513,   514,   235,   516,   382,
     185,   519,  -162,  -162,   382,   242,   523,  -162,   251,   252,
     253,    28,   150,   237,   272,    64,   150,   238,   294,   131,
     244,   132,   133,   134,   135,   136,   137,   138,   382,   541,
     296,   -15,   297,   262,    28,   233,   -15,   292,   289,   338,
     150,   547,   334,   150,   -15,   357,   549,   485,   430,   335,
     138,   351,   362,   550,   363,   566,   -15,   375,   437,   570,
     385,   412,   572,   573,   150,   392,   367,    76,   576,   422,
     -15,   -15,   -15,   -15,   -15,   -15,   -15,   -15,   -15,   -15,
     -15,   -15,   -15,   -15,   -15,   -15,   150,   -15,   373,   433,
     239,   240,   382,   241,   587,   131,   370,   132,   133,   134,
     135,   136,   137,   138,   446,   466,   614,  -244,   321,   451,
     467,   615,  -244,   132,   133,   134,   135,   136,   496,  -244,
    -244,   376,  -244,   377,   150,   150,   381,   436,   -15,   616,
     -15,   -15,   299,   150,   481,   455,  -244,   620,   498,   499,
     382,   622,   502,   473,   508,   492,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,   612,  -244,   509,   574,   359,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,   268,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,   515,   591,
     531,  -244,  -244,  -244,   459,  -244,  -244,  -244,  -244,    28,
    -244,  -244,  -244,   494,   417,  -244,   290,   527,  -244,  -244,
    -244,  -241,   226,   336,   478,   257,   -60,  -110,   -93,  -138,
    -142,   423,    42,  -249,  -249,   486,  -249,   -99,   445,   176,
     255,  -146,   132,   133,   134,   135,   136,   256,   548,   270,
    -249,   320,   469,   470,     0,   271,     0,     0,   349,     0,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,     0,   453,     0,     0,
       0,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
       0,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,     0,     0,     0,  -249,  -249,  -249,     0,  -249,
     150,  -241,  -241,  -236,   388,   228,  -249,     0,    28,  -249,
       0,     0,   229,  -249,  -249,    77,    78,     0,    79,     1,
       2,     3,   260,     4,     5,     6,  -175,     0,     0,     0,
       0,     0,    80,     0,     0,     0,   132,   133,   134,   135,
     136,     0,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,
    -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,     0,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,     0,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   394,   226,     0,   111,   112,   113,
       0,   114,  -236,  -236,  -236,     0,  -249,  -249,    70,  -249,
       0,    71,     0,     0,     0,   115,   116,     0,   260,     0,
    -175,  -175,  -178,  -249,  -175,  -175,  -175,  -175,  -175,     0,
       0,     0,   132,   133,   134,   135,   136,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,     0,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,     0,     0,     0,  -249,  -249,
    -249,     0,  -249,   150,     0,     0,     0,   395,   228,  -249,
     226,     0,  -249,     0,   -15,   229,  -249,  -249,     0,     0,
       0,  -249,  -249,     0,  -249,     0,  -178,  -178,     0,     0,
    -178,  -178,  -178,  -178,  -178,   260,     0,     0,  -249,  -174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   132,
     133,   134,   135,   136,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,     0,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
       0,     0,     0,  -249,  -249,  -249,     0,  -249,   150,     0,
       0,     0,   -15,   228,  -249,   226,     0,  -249,     0,     0,
     229,  -249,  -249,     0,     0,     0,  -249,  -249,     0,  -249,
       0,     0,     0,  -174,  -174,     0,     0,  -174,  -174,  -174,
    -174,  -174,     0,  -249,   260,     0,     0,     0,  -177,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   132,   133,
     134,   135,   136,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,     0,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,     0,     0,     0,  -249,  -249,
    -249,     0,  -249,   150,   227,     0,     0,   306,   228,  -249,
     344,    28,  -249,     0,     0,   229,  -249,  -249,    77,    78,
       0,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -177,  -177,     0,    80,  -177,  -177,  -177,  -177,
    -177,     0,     0,     0,     0,     0,     0,     0,     0,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,     0,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     0,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,     0,    28,     0,
     111,   112,   113,     0,   114,    77,    78,     0,    79,   307,
     345,    70,   344,   611,    71,     0,     0,     0,   115,   116,
       0,     0,    80,     0,     0,  -156,     0,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,     0,  -110,     0,  -138,     0,     0,
       0,     0,     0,     0,     0,   -99,     0,     0,     0,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,     0,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,     0,     0,   309,   111,   112,   113,
      28,   114,     0,     0,     0,     0,     0,     0,    70,     0,
       0,    71,     0,     0,     0,   115,   116,     0,     0,     0,
       0,     0,   345,     0,   310,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   322,     0,     0,     0,    28,
       0,     0,     0,     0,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   310,     0,   100,   101,   102,   103,   104,
     105,   106,   107,   108,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   311,    28,     0,
      70,     0,     0,    71,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   310,     0,   100,   101,   102,   103,   104,   105,
     106,   107,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   311,     0,     0,    70,
       0,     0,    71,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,  -231,   507,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    77,    78,     0,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   311,     0,     0,    70,    80,
       0,    71,     0,     0,     0,     0,     0,     0,     0,     0,
    -231,  -231,  -231,  -231,  -231,  -231,  -231,  -231,  -231,  -231,
    -231,  -231,  -231,  -231,  -231,  -231,     0,     0,     0,     0,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,     0,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,  -217,   175,     0,   111,   112,   113,     0,   114,     0,
    -231,  -231,  -231,     0,    62,    70,     0,     0,    71,  -221,
     297,     0,   115,   116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,  -217,  -217,  -217,  -217,  -217,     0,    63,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   344,
     551,     0,     0,     0,     0,     0,     0,     0,    64,     0,
     150,  -217,  -156,     0,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,   -60,  -110,   -93,  -138,   310,     0,    42,     0,  -221,
       0,     0,   -99,     0,     0,     0,  -146,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   266,     0,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,     0,     0,   100,   101,   102,   103,
     104,   105,   106,   107,   108,     0,     0,     0,     0,     0,
      -2,   264,     0,     0,     0,     0,     0,     0,   311,   345,
       0,    70,     0,  -156,    71,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,   -60,  -110,   -93,  -138,  -142,   265,    42,     0,
       0,     0,     0,   -99,     0,     0,     0,  -146,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   266,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   224,     0,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,     0,     0,   100,   101,   102,   103,   104,
     105,   106,   107,   108
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-375))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,    35,    37,   140,   262,   269,   232,    59,     8,     9,
      10,    11,    12,    13,    32,    15,   390,    17,    18,    19,
      20,    61,     1,   164,   165,    32,    66,    67,   117,    29,
      32,    32,     0,   145,    32,    32,   142,     0,   144,   219,
       0,     1,    42,    43,     5,    32,    32,    12,     5,     5,
      13,    13,     5,   361,     5,     5,     6,     1,     1,   409,
      13,     5,    62,    63,   375,   376,    17,   389,    12,     5,
     378,    27,    72,    73,    17,    99,     5,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,     5,   293,   114,   115,   116,   254,     1,     0,
      99,   301,     5,   123,    89,   104,   500,   477,   128,   129,
      92,   220,   100,     1,   456,   175,   136,   100,   156,    99,
     451,   101,   105,   232,   104,   108,   258,   259,   109,   156,
       5,   257,   109,   153,   156,   156,    99,     1,   156,   156,
     160,   161,   162,   163,   164,   165,   540,   103,   168,   156,
     156,   397,     5,   173,   103,   433,    20,     0,   178,   179,
      13,   181,     1,     5,     5,   496,   220,   498,   499,     5,
       1,   502,    99,   567,     5,   332,   333,     1,   232,     5,
       5,    20,     5,     5,     5,   501,    12,    13,   388,   102,
      13,    14,    13,     7,     8,     9,    10,    11,    99,   100,
     103,   104,   262,   312,   224,   366,    39,     5,   228,   229,
     371,   343,   100,     1,     5,     5,   104,   289,    99,   239,
     240,   241,   616,    13,    99,     5,   472,     5,   622,   104,
       5,   251,   252,   253,   550,    68,     5,    12,     5,   103,
     104,   105,     5,     5,   108,   265,     1,   111,     5,    12,
       5,    13,   105,    99,   274,   108,    99,   414,   101,   537,
     101,   103,   104,    99,   103,    20,   105,     1,    99,   108,
     554,    99,   111,   551,   294,    99,   296,   331,   103,   299,
     104,   103,   105,   303,   304,   108,    20,   307,   397,     5,
     310,   311,   448,   571,   314,   109,   110,   406,   103,   104,
      57,    58,   100,   581,   582,   325,   326,   327,     5,     5,
     330,    99,   103,   104,   334,     1,   104,    13,   338,     5,
       5,     1,   100,   103,   157,     5,   101,    13,   612,     5,
      99,    17,   101,   611,   101,     0,   356,   391,    33,   359,
     102,     5,    99,   397,   101,   623,   366,   503,   103,    13,
     105,   371,   406,   108,     1,     1,   111,   538,     5,     5,
      22,   381,    59,   472,     1,    12,    13,    13,     5,   103,
     104,   105,   392,   573,   108,   395,    99,   111,   101,     1,
     536,   401,   402,    59,     5,   405,    24,   407,   408,    23,
     547,    13,   412,    57,    58,   415,   416,   578,    26,   419,
     420,    25,   422,   584,     5,     7,     8,     9,    10,    11,
      56,   431,    13,    99,   434,    99,    17,   101,   472,    99,
     100,   441,    37,   443,   104,   105,   106,   107,     1,   449,
     100,   264,     5,   453,    56,   455,    57,    58,   102,    12,
     495,     5,    89,   463,   277,    99,    17,   101,    12,    13,
     283,    97,   285,    21,   474,   475,   476,   100,   478,   292,
      80,   481,    99,   100,   297,    13,   486,   104,   105,   106,
     107,     5,    99,    13,   101,    97,    99,    17,   101,    13,
      21,    15,    16,    17,    18,    19,    20,    21,   321,   509,
     101,     0,     1,     1,     5,   515,     5,     1,     5,   104,
      99,   521,    13,    99,    13,   101,   526,   109,   110,    20,
      21,     1,    99,   533,   101,   535,    89,    99,   351,   539,
       1,    59,   542,   543,    99,   103,   101,   581,   548,    13,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    99,    56,   101,     1,
      90,    91,   385,    93,   574,    13,    17,    15,    16,    17,
      18,    19,    20,    21,    13,     5,   586,     0,     1,    99,
       5,   591,     5,    15,    16,    17,    18,    19,    99,    12,
      13,    99,    15,   101,    99,    99,   101,   101,    97,   609,
      99,   100,   101,    99,    82,   101,    29,   617,    99,    99,
     433,   621,    99,   409,   100,   438,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,   584,    56,   103,   103,   279,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,   156,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,   477,   581,
     493,    94,    95,    96,   391,    98,    99,   100,   101,     5,
     103,   104,   105,   439,   331,   108,   167,   488,   111,   112,
     113,     0,     1,   243,   414,   142,    22,    23,    24,    25,
      26,   336,    28,    12,    13,   423,    15,    33,   369,    66,
      13,    37,    15,    16,    17,    18,    19,    20,   523,   156,
      29,   230,   406,   406,    -1,   156,    -1,    -1,   551,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    56,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    94,    95,    96,    -1,    98,
      99,   100,   101,     0,     1,   104,   105,    -1,     5,   108,
      -1,    -1,   111,   112,   113,    12,    13,    -1,    15,    30,
      31,    32,     1,    34,    35,    36,     5,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    -1,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     0,     1,    -1,    94,    95,    96,
      -1,    98,    99,   100,   101,    -1,    12,    13,   105,    15,
      -1,   108,    -1,    -1,    -1,   112,   113,    -1,     1,    -1,
      99,   100,     5,    29,   103,   104,   105,   106,   107,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    94,    95,
      96,    -1,    98,    99,    -1,    -1,    -1,   103,   104,   105,
       1,    -1,   108,    -1,     5,   111,   112,   113,    -1,    -1,
      -1,    12,    13,    -1,    15,    -1,    99,   100,    -1,    -1,
     103,   104,   105,   106,   107,     1,    -1,    -1,    29,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    94,    95,    96,    -1,    98,    99,    -1,
      -1,    -1,   103,   104,   105,     1,    -1,   108,    -1,    -1,
     111,   112,   113,    -1,    -1,    -1,    12,    13,    -1,    15,
      -1,    -1,    -1,    99,   100,    -1,    -1,   103,   104,   105,
     106,   107,    -1,    29,     1,    -1,    -1,    -1,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    94,    95,
      96,    -1,    98,    99,   100,    -1,    -1,     1,   104,   105,
       0,     5,   108,    -1,    -1,   111,   112,   113,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,   100,    -1,    29,   103,   104,   105,   106,
     107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,     5,    -1,
      94,    95,    96,    -1,    98,    12,    13,    -1,    15,   103,
     100,   105,     0,     1,   108,    -1,    -1,    -1,   112,   113,
      -1,    -1,    29,    -1,    -1,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    -1,     1,    94,    95,    96,
       5,    98,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,   108,    -1,    -1,    -1,   112,   113,    -1,    -1,    -1,
      -1,    -1,   100,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    29,    -1,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,     5,    -1,
     105,    -1,    -1,   108,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    29,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,   105,
      -1,    -1,   108,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,     0,     1,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,   105,    29,
      -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,     0,     1,    -1,    94,    95,    96,    -1,    98,    -1,
      99,   100,   101,    -1,    13,   105,    -1,    -1,   108,     0,
       1,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    56,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,
      99,   100,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    29,    -1,    28,    -1,   100,
      -1,    -1,    33,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,
       0,     1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   100,
      -1,   105,    -1,    13,   108,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    -1,    80,    81,    82,    83,    84,
      85,    86,    87,    88
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,    31,    32,    34,    35,    36,   115,   116,   117,
     118,   119,   120,   121,   122,    99,    99,    99,    99,     5,
      99,     0,   122,   122,   122,   122,   122,   122,     5,    27,
     124,   126,   122,   122,   179,   122,   122,   122,   122,     1,
     122,   123,    28,   129,   136,   137,   138,   151,   153,   155,
     156,   162,   163,   169,   170,   171,   172,   174,   175,   180,
     183,     1,    13,    56,    97,   201,   202,   203,   204,    13,
     105,   108,   159,   160,   161,   177,   178,    12,    13,    15,
      29,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    94,    95,    96,    98,   112,   113,   178,   206,   208,
     209,   210,   216,   217,   218,    57,    58,   143,   144,   146,
     147,    13,    15,    16,    17,    18,    19,    20,    21,   185,
     186,   187,   188,   189,   191,   192,   193,   194,   196,   200,
      99,   101,   222,    12,     5,     6,   128,     1,   122,   122,
      22,    24,    33,    23,    25,    26,    37,   185,   101,   222,
     223,   122,   122,    17,   100,     1,   203,   223,   101,   223,
       1,    17,   222,   122,   122,    80,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,    78,   209,     1,   100,   104,   111,
     207,   223,   122,   122,   122,   100,    21,    13,    17,    90,
      91,    93,    13,   122,    21,     1,   100,   182,   189,     1,
       5,   105,   106,   107,   176,    13,    20,   191,   192,   192,
       1,   193,     1,   122,     1,    27,    55,   127,   129,   130,
     220,   221,   101,   222,    13,   139,   100,     1,   122,   135,
     122,   152,   122,     1,   122,     1,   122,   152,   152,     5,
     182,   122,     1,   122,   101,   223,   101,     1,   122,   101,
     122,   122,   100,    99,   104,    13,     1,   103,   206,     1,
      29,   102,   178,   209,   211,   213,   214,   122,   122,   122,
     208,     1,     1,   214,   215,    59,    13,   102,   154,    13,
      92,   122,   122,   122,    13,    20,   188,   195,   104,   122,
     122,   122,   189,   192,     0,   100,   125,   223,   101,   222,
     122,     1,   123,   122,    12,    89,   140,   101,   222,   140,
     147,   149,    99,   101,    12,    13,   157,   101,   222,    13,
      17,   164,   199,   101,   222,    99,    99,   101,   173,   185,
     181,   101,   222,   206,   122,     1,   122,   122,     1,   206,
     122,   122,   103,   122,     0,   103,   122,   122,   209,   122,
       1,    20,   103,   105,   108,   111,   212,   103,   104,   122,
     122,   122,    59,   145,   122,    13,    14,   177,   189,   190,
     189,   122,    13,   195,     7,     8,     9,    10,    11,   109,
     110,   197,   122,     1,    12,   101,   101,   222,   122,   122,
       1,   104,   181,   150,   152,   199,    13,   152,   150,   150,
     181,    99,   122,    56,   205,   101,   206,   205,   201,   161,
     122,   122,    13,   214,   122,   122,     5,     5,   122,   211,
     213,   122,   122,   143,   146,    13,   141,   122,   190,   122,
     122,    82,     1,   122,   122,   109,   197,   122,   184,   125,
     122,   101,   222,   148,   149,   122,    99,   122,    99,    99,
     179,   122,    99,   150,   122,   122,   205,     1,   100,   103,
     122,   214,   122,   122,   122,   144,   122,   103,   103,   122,
     103,   104,   103,   122,    12,    13,   198,   187,   101,     0,
     101,   222,   147,   150,   131,   150,   150,   201,   131,   150,
     179,   122,   103,    17,   142,   103,   103,   122,   198,   122,
     122,     1,   125,   133,   134,   137,   138,   153,   156,   163,
     170,   175,   183,   219,   220,   221,   122,   179,   125,   219,
     122,   201,   122,   122,   103,   189,   122,   109,   131,   125,
     123,   158,   165,   201,   132,   125,   206,   122,   109,   219,
     125,   159,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,   125,   166,
     168,     1,   133,   219,   122,   122,   122,   167,   123,   201,
     122,    99,   122,   201,   125
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (parser, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, parser)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, parser); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, CSSParser* parser)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, parser)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    CSSParser* parser;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (parser);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, CSSParser* parser)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, parser)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    CSSParser* parser;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, parser);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, CSSParser* parser)
#else
static void
yy_reduce_print (yyvsp, yyrule, parser)
    YYSTYPE *yyvsp;
    int yyrule;
    CSSParser* parser;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , parser);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, parser); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, CSSParser* parser)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, parser)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    CSSParser* parser;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (parser);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (CSSParser* parser);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (CSSParser* parser)
#else
int
yyparse (parser)
    CSSParser* parser;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 9:

/* Line 1806 of yacc.c  */
#line 307 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->m_rule = (yyvsp[(4) - (6)].rule);
    }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 312 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->m_keyframe = (yyvsp[(4) - (6)].keyframe);
    }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 317 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
    }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 321 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        if ((yyvsp[(4) - (5)].valueList)) {
            parser->m_valueList = parser->sinkFloatingValueList((yyvsp[(4) - (5)].valueList));
            int oldParsedProperties = parser->m_parsedProperties.size();
            if (!parser->parseValue(parser->m_id, parser->m_important))
                parser->rollbackLastProperties(parser->m_parsedProperties.size() - oldParsedProperties);
            parser->m_valueList = nullptr;
        }
    }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 332 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
         parser->m_mediaQuery = parser->sinkFloatingMediaQuery((yyvsp[(4) - (5)].mediaQuery));
     }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 337 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        if ((yyvsp[(4) - (5)].selectorList)) {
            if (parser->m_selectorListForParseSelector)
                parser->m_selectorListForParseSelector->adoptSelectorVector(*(yyvsp[(4) - (5)].selectorList));
        }
    }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 353 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
  }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 361 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
     if (parser->m_styleSheet)
         parser->m_styleSheet->parserSetEncodingFromCharsetRule((yyvsp[(3) - (5)].string));
     if (parser->isExtractingSourceData() && parser->m_currentRuleDataStack->isEmpty() && parser->m_ruleSourceDataResult)
         parser->addNewRuleToSourceTree(CSSRuleSourceData::createUnknown());
     (yyval.rule) = 0;
  }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 368 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
  }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 370 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
  }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 374 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.rule) = 0;
    }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 377 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.rule) = 0;
    }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 382 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
     if ((yyvsp[(2) - (3)].rule) && parser->m_styleSheet)
         parser->m_styleSheet->parserAppendRule((yyvsp[(2) - (3)].rule));
 }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 399 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->m_hadSyntacticallyValidCSSRule = true;
    }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 407 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.ruleList) = 0; }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 408 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
      (yyval.ruleList) = (yyvsp[(1) - (3)].ruleList);
      if ((yyvsp[(2) - (3)].rule)) {
          if (!(yyval.ruleList))
              (yyval.ruleList) = parser->createRuleList();
          (yyval.ruleList)->append((yyvsp[(2) - (3)].rule));
      }
  }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 418 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.ruleList) = 0; }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 419 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
      (yyval.ruleList) = (yyvsp[(1) - (3)].ruleList);
      if ((yyvsp[(2) - (3)].rule)) {
          if (!(yyval.ruleList))
              (yyval.ruleList) = parser->createRuleList();
          (yyval.ruleList)->append((yyvsp[(2) - (3)].rule));
      }
  }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 444 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markRuleHeaderEnd();
        parser->markRuleBodyStart();
    }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 450 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::IMPORT_RULE);
    }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 455 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.rule) = parser->createImportRule((yyvsp[(4) - (7)].string), (yyvsp[(6) - (7)].mediaList));
    }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 458 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.rule) = parser->createImportRule((yyvsp[(4) - (7)].string), (yyvsp[(6) - (7)].mediaList));
    }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 461 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.rule) = 0;
        parser->popRuleData();
    }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 465 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.rule) = 0;
        parser->popRuleData();
    }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 469 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.rule) = 0;
        parser->popRuleData();
    }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 475 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
    parser->addNamespace((yyvsp[(3) - (6)].string), (yyvsp[(4) - (6)].string));
    (yyval.rule) = 0;
}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 479 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
    (yyval.rule) = 0;
}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 482 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
    (yyval.rule) = 0;
}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 485 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
    (yyval.rule) = 0;
}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 490 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.string).clear(); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 491 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.string) = (yyvsp[(1) - (2)].string); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 498 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.string) = (yyvsp[(1) - (2)].string);
    }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 503 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.valueList) = 0;
    }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 506 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.valueList) = (yyvsp[(3) - (4)].valueList);
    }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 511 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        if ((yyvsp[(1) - (9)].mediaQueryRestrictor) != MediaQuery::None)
            (yyval.mediaQueryExp) = parser->createFloatingMediaQueryExp("", 0);
        else {
            (yyvsp[(5) - (9)].string).lower();
            (yyval.mediaQueryExp) = parser->createFloatingMediaQueryExp((yyvsp[(5) - (9)].string), (yyvsp[(7) - (9)].valueList));
        }
    }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 521 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.mediaQueryExpList) = parser->createFloatingMediaQueryExpList();
        (yyval.mediaQueryExpList)->append(parser->sinkFloatingMediaQueryExp((yyvsp[(1) - (1)].mediaQueryExp)));
    }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 525 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.mediaQueryExpList) = (yyvsp[(1) - (5)].mediaQueryExpList);
        (yyval.mediaQueryExpList)->append(parser->sinkFloatingMediaQueryExp((yyvsp[(5) - (5)].mediaQueryExp)));
    }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 531 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.mediaQueryExpList) = parser->createFloatingMediaQueryExpList();
    }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 534 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.mediaQueryExpList) = (yyvsp[(3) - (3)].mediaQueryExpList);
    }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 539 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.mediaQueryRestrictor) = MediaQuery::None;
    }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 542 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.mediaQueryRestrictor) = MediaQuery::Only;
    }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 545 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.mediaQueryRestrictor) = MediaQuery::Not;
    }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 550 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.mediaQuery) = parser->createFloatingMediaQuery(parser->sinkFloatingMediaQueryExpList((yyvsp[(1) - (1)].mediaQueryExpList)));
    }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 554 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyvsp[(3) - (4)].string).lower();
        (yyval.mediaQuery) = parser->createFloatingMediaQuery((yyvsp[(1) - (4)].mediaQueryRestrictor), (yyvsp[(3) - (4)].string), parser->sinkFloatingMediaQueryExpList((yyvsp[(4) - (4)].mediaQueryExpList)));
    }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 560 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.mediaList) = parser->createMediaQuerySet();
     }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 566 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.mediaList) = parser->createMediaQuerySet();
        (yyval.mediaList)->addMediaQuery(parser->sinkFloatingMediaQuery((yyvsp[(1) - (1)].mediaQuery)));
        parser->updateLastMediaLine((yyval.mediaList));
    }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 571 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.mediaList) = (yyvsp[(1) - (4)].mediaList);
        if ((yyval.mediaList)) {
            (yyval.mediaList)->addMediaQuery(parser->sinkFloatingMediaQuery((yyvsp[(4) - (4)].mediaQuery)));
            parser->updateLastMediaLine((yyval.mediaList));
        }
    }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 578 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.mediaList) = 0;
    }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 583 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markRuleBodyStart();
    }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 588 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::MEDIA_RULE);
    }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 593 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markRuleHeaderEnd();
    }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 598 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.rule) = parser->createMediaRule((yyvsp[(4) - (10)].mediaList), (yyvsp[(9) - (10)].ruleList));
    }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 601 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.rule) = parser->createMediaRule(0, (yyvsp[(7) - (8)].ruleList));
    }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 604 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.rule) = 0;
        parser->popRuleData();
    }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 610 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
      (yyval.string) = (yyvsp[(1) - (2)].string);
  }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 615 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::KEYFRAMES_RULE);
    }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 620 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.rule) = parser->createKeyframesRule((yyvsp[(4) - (10)].string), parser->sinkFloatingKeyframeVector((yyvsp[(9) - (10)].keyframeRuleList)));
    }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 629 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.keyframeRuleList) = parser->createFloatingKeyframeVector(); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 630 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.keyframeRuleList) = (yyvsp[(1) - (3)].keyframeRuleList);
        if ((yyvsp[(2) - (3)].keyframe))
            (yyval.keyframeRuleList)->append((yyvsp[(2) - (3)].keyframe));
    }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 637 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.keyframe) = parser->createKeyframe((yyvsp[(1) - (6)].valueList));
    }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 642 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.valueList) = parser->createFloatingValueList();
        (yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[(1) - (1)].value)));
    }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 646 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.valueList) = (yyvsp[(1) - (5)].valueList);
        if ((yyval.valueList))
            (yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[(5) - (5)].value)));
    }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 653 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).isInt = false; (yyval.value).fValue = (yyvsp[(1) - (2)].integer) * (yyvsp[(2) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER; }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 654 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.value).id = 0; (yyval.value).isInt = false; (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER;
        CSSParserString& str = (yyvsp[(1) - (1)].string);
        if (str.equalIgnoringCase("from"))
            (yyval.value).fValue = 0;
        else if (str.equalIgnoringCase("to"))
            (yyval.value).fValue = 100;
        else
            YYERROR;
    }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 666 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::PAGE_RULE);
    }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 672 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        if ((yyvsp[(4) - (10)].selector))
            (yyval.rule) = parser->createPageRule(parser->sinkFloatingSelector((yyvsp[(4) - (10)].selector)));
        else {
            parser->clearProperties();
            (yyval.rule) = 0;
            parser->popRuleData();
        }
    }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 681 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
      parser->popRuleData();
      (yyval.rule) = 0;
    }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 685 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
      parser->popRuleData();
      (yyval.rule) = 0;
    }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 691 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setTag(QualifiedName(nullAtom, (yyvsp[(1) - (1)].string), parser->m_defaultNamespace));
        (yyval.selector)->setForPage();
    }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 696 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(2) - (2)].selector);
        if ((yyval.selector)) {
            (yyval.selector)->setTag(QualifiedName(nullAtom, (yyvsp[(1) - (2)].string), parser->m_defaultNamespace));
            (yyval.selector)->setForPage();
        }
    }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 703 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(1) - (1)].selector);
        if ((yyval.selector))
            (yyval.selector)->setForPage();
    }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 708 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setForPage();
    }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 718 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->startDeclarationsForMarginBox();
    }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 720 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.rule) = parser->createMarginAtRule((yyvsp[(1) - (7)].marginBox));
    }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 725 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::TopLeftCornerMarginBox;
    }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 728 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::TopLeftMarginBox;
    }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 731 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::TopCenterMarginBox;
    }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 734 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::TopRightMarginBox;
    }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 737 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::TopRightCornerMarginBox;
    }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 740 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::BottomLeftCornerMarginBox;
    }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 743 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::BottomLeftMarginBox;
    }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 746 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::BottomCenterMarginBox;
    }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 749 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::BottomRightMarginBox;
    }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 752 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::BottomRightCornerMarginBox;
    }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 755 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::LeftTopMarginBox;
    }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 758 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::LeftMiddleMarginBox;
    }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 761 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::LeftBottomMarginBox;
    }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 764 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::RightTopMarginBox;
    }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 767 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::RightMiddleMarginBox;
    }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 770 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::RightBottomMarginBox;
    }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 775 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::FONT_FACE_RULE);
    }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 781 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.rule) = parser->createFontFaceRule();
    }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 784 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
      (yyval.rule) = 0;
      parser->popRuleData();
    }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 788 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
      (yyval.rule) = 0;
      parser->popRuleData();
    }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 794 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::HOST_RULE);
    }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 800 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.rule) = parser->createHostRule((yyvsp[(7) - (8)].ruleList));
    }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 803 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.rule) = 0;
        parser->popRuleData();
    }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 809 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        if ((yyvsp[(1) - (1)].selectorList)) {
            parser->setReusableRegionSelectorVector((yyvsp[(1) - (1)].selectorList));
            (yyval.selectorList) = parser->reusableRegionSelectorVector();
        }
        else
            (yyval.selectorList) = 0;
    }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 819 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::REGION_RULE);
    }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 824 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        if ((yyvsp[(4) - (10)].selectorList))
            (yyval.rule) = parser->createRegionRule((yyvsp[(4) - (10)].selectorList), (yyvsp[(9) - (10)].ruleList));
        else {
            (yyval.rule) = 0;
            parser->popRuleData();
        }
    }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 834 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.relation) = CSSSelector::DirectAdjacent; }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 835 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.relation) = CSSSelector::IndirectAdjacent; }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 836 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.relation) = CSSSelector::Child; }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 839 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 840 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.integer) = 1; }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 843 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.integer) = -1; }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 844 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.integer) = 1; }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 847 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markPropertyStart();
    }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 852 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markRuleHeaderStart(CSSRuleSourceData::STYLE_RULE);
        parser->markSelectorStart();
    }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 858 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markRuleHeaderEnd();
    }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 863 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markSelectorEnd();
    }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 868 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.rule) = parser->createStyleRule((yyvsp[(2) - (9)].selectorList));
    }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 873 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markSelectorStart();
    }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 877 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        if ((yyvsp[(1) - (1)].selector)) {
            (yyval.selectorList) = parser->reusableSelectorVector();
            (yyval.selectorList)->shrink(0);
            (yyval.selectorList)->append(parser->sinkFloatingSelector((yyvsp[(1) - (1)].selector)));
            parser->updateLastSelectorLineAndPosition();
        }
    }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 885 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        if ((yyvsp[(1) - (6)].selectorList) && (yyvsp[(6) - (6)].selector)) {
            (yyval.selectorList) = (yyvsp[(1) - (6)].selectorList);
            (yyval.selectorList)->append(parser->sinkFloatingSelector((yyvsp[(6) - (6)].selector)));
            parser->updateLastSelectorLineAndPosition();
        } else
            (yyval.selectorList) = 0;
    }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 893 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selectorList) = 0;
    }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 898 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(1) - (2)].selector);
    }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 903 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(1) - (1)].selector);
    }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 907 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(1) - (1)].selector);
    }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 911 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(2) - (2)].selector);
        if (!(yyvsp[(1) - (2)].selector))
            (yyval.selector) = 0;
        else if ((yyval.selector)) {
            CSSParserSelector* end = (yyval.selector);
            while (end->tagHistory())
                end = end->tagHistory();
            end->setRelation(CSSSelector::Descendant);
            end->setTagHistory(parser->sinkFloatingSelector((yyvsp[(1) - (2)].selector)));
        }
    }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 923 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(3) - (3)].selector);
        if (!(yyvsp[(1) - (3)].selector))
            (yyval.selector) = 0;
        else if ((yyval.selector)) {
            CSSParserSelector* end = (yyval.selector);
            while (end->tagHistory())
                end = end->tagHistory();
            end->setRelation((yyvsp[(2) - (3)].relation));
            end->setTagHistory(parser->sinkFloatingSelector((yyvsp[(1) - (3)].selector)));
        }
    }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 935 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = 0;
    }
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 940 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.string).clear(); }
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 941 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { static LChar star = '*'; (yyval.string).init(&star, 1); }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 942 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.string) = (yyvsp[(1) - (2)].string); }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 945 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setTag(QualifiedName(nullAtom, (yyvsp[(1) - (1)].string), parser->m_defaultNamespace));
    }
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 949 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(2) - (2)].selector);
        if ((yyval.selector))
            parser->updateSpecifiersWithElementName(nullAtom, (yyvsp[(1) - (2)].string), (yyval.selector));
    }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 954 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(1) - (1)].selector);
        if ((yyval.selector))
            parser->updateSpecifiersWithElementName(nullAtom, starAtom, (yyval.selector));
    }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 959 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setTag(parser->determineNameInNamespace((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].string)));
    }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 963 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(3) - (3)].selector);
        if ((yyval.selector))
            parser->updateSpecifiersWithElementName((yyvsp[(1) - (3)].string), (yyvsp[(2) - (3)].string), (yyval.selector));
    }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 968 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(2) - (2)].selector);
        if ((yyval.selector))
            parser->updateSpecifiersWithElementName((yyvsp[(1) - (2)].string), starAtom, (yyval.selector));
    }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 975 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        if ((yyvsp[(1) - (1)].selector)) {
            (yyval.selectorList) = parser->createFloatingSelectorVector();
            (yyval.selectorList)->append(parser->sinkFloatingSelector((yyvsp[(1) - (1)].selector)));
        } else
            (yyval.selectorList) = 0;
    }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 982 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        if ((yyvsp[(1) - (5)].selectorList) && (yyvsp[(5) - (5)].selector)) {
            (yyval.selectorList) = (yyvsp[(1) - (5)].selectorList);
            (yyval.selectorList)->append(parser->sinkFloatingSelector((yyvsp[(5) - (5)].selector)));
        } else
            (yyval.selectorList) = 0;
    }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 989 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selectorList) = 0;
    }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 994 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        CSSParserString& str = (yyvsp[(1) - (1)].string);
        if (parser->m_context.isHTMLDocument)
            str.lower();
        (yyval.string) = str;
    }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 1000 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        static LChar star = '*';
        (yyval.string).init(&star, 1);
    }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 1006 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(1) - (1)].selector);
    }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 1009 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        if (!(yyvsp[(2) - (2)].selector))
            (yyval.selector) = 0;
        else if ((yyvsp[(1) - (2)].selector))
            (yyval.selector) = parser->updateSpecifiers((yyvsp[(1) - (2)].selector), (yyvsp[(2) - (2)].selector));
    }
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 1015 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = 0;
    }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 1020 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::Id);
        if (parser->m_context.mode == CSSQuirksMode)
            (yyvsp[(1) - (1)].string).lower();
        (yyval.selector)->setValue((yyvsp[(1) - (1)].string));
    }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 1027 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        if ((yyvsp[(1) - (1)].string)[0] >= '0' && (yyvsp[(1) - (1)].string)[0] <= '9') {
            (yyval.selector) = 0;
        } else {
            (yyval.selector) = parser->createFloatingSelector();
            (yyval.selector)->setMatch(CSSSelector::Id);
            if (parser->m_context.mode == CSSQuirksMode)
                (yyvsp[(1) - (1)].string).lower();
            (yyval.selector)->setValue((yyvsp[(1) - (1)].string));
        }
    }
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 1043 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::Class);
        if (parser->m_context.mode == CSSQuirksMode)
            (yyvsp[(2) - (2)].string).lower();
        (yyval.selector)->setValue((yyvsp[(2) - (2)].string));
    }
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 1052 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        CSSParserString& str = (yyvsp[(1) - (2)].string);
        if (parser->m_context.isHTMLDocument)
            str.lower();
        (yyval.string) = str;
    }
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 1060 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setAttribute(QualifiedName(nullAtom, (yyvsp[(3) - (4)].string), nullAtom));
        (yyval.selector)->setMatch(CSSSelector::Set);
    }
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 1065 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setAttribute(QualifiedName(nullAtom, (yyvsp[(3) - (8)].string), nullAtom));
        (yyval.selector)->setMatch((CSSSelector::Match)(yyvsp[(4) - (8)].integer));
        (yyval.selector)->setValue((yyvsp[(6) - (8)].string));
    }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 1071 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setAttribute(parser->determineNameInNamespace((yyvsp[(3) - (5)].string), (yyvsp[(4) - (5)].string)));
        (yyval.selector)->setMatch(CSSSelector::Set);
    }
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 1076 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setAttribute(parser->determineNameInNamespace((yyvsp[(3) - (9)].string), (yyvsp[(4) - (9)].string)));
        (yyval.selector)->setMatch((CSSSelector::Match)(yyvsp[(5) - (9)].integer));
        (yyval.selector)->setValue((yyvsp[(7) - (9)].string));
    }
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 1084 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.integer) = CSSSelector::Exact;
    }
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 1087 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.integer) = CSSSelector::List;
    }
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 1090 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.integer) = CSSSelector::Hyphen;
    }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 1093 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.integer) = CSSSelector::Begin;
    }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 1096 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.integer) = CSSSelector::End;
    }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 1099 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.integer) = CSSSelector::Contain;
    }
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 1108 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::PagePseudoClass);
        (yyvsp[(2) - (2)].string).lower();
        (yyval.selector)->setValue((yyvsp[(2) - (2)].string));
        CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
        if (type == CSSSelector::PseudoUnknown)
            (yyval.selector) = 0;
    }
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 1118 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::PseudoClass);
        (yyvsp[(2) - (2)].string).lower();
        (yyval.selector)->setValue((yyvsp[(2) - (2)].string));
        CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
        if (type == CSSSelector::PseudoUnknown)
            (yyval.selector) = 0;
    }
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 1127 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::PseudoElement);
        (yyvsp[(3) - (3)].string).lower();
        (yyval.selector)->setValue((yyvsp[(3) - (3)].string));
        CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
        if (type == CSSSelector::PseudoUnknown)
            (yyval.selector) = 0;
    }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 1136 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        if ((yyvsp[(5) - (7)].selectorList)) {
            (yyval.selector) = parser->createFloatingSelector();
            (yyval.selector)->setMatch(CSSSelector::PseudoClass);
            (yyval.selector)->adoptSelectorVector(*parser->sinkFloatingSelectorVector((yyvsp[(5) - (7)].selectorList)));
            (yyval.selector)->setValue((yyvsp[(3) - (7)].string));
            CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
            if (type != CSSSelector::PseudoCue)
                (yyval.selector) = 0;
        } else
            (yyval.selector) = 0;
    }
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 1148 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        if ((yyvsp[(4) - (6)].selectorList)) {
            (yyval.selector) = parser->createFloatingSelector();
            (yyval.selector)->setMatch(CSSSelector::PseudoClass);
            (yyval.selector)->adoptSelectorVector(*parser->sinkFloatingSelectorVector((yyvsp[(4) - (6)].selectorList)));
            (yyvsp[(2) - (6)].string).lower();
            (yyval.selector)->setValue((yyvsp[(2) - (6)].string));
            CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
            if (type != CSSSelector::PseudoAny)
                (yyval.selector) = 0;
        } else
            (yyval.selector) = 0;
    }
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 1161 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::PseudoClass);
        (yyval.selector)->setArgument((yyvsp[(4) - (6)].string));
        (yyval.selector)->setValue((yyvsp[(2) - (6)].string));
        CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
        if (type == CSSSelector::PseudoUnknown)
            (yyval.selector) = 0;
    }
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 1170 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::PseudoClass);
        (yyval.selector)->setArgument(String::number((yyvsp[(4) - (7)].integer) * (yyvsp[(5) - (7)].number)));
        (yyval.selector)->setValue((yyvsp[(2) - (7)].string));
        CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
        if (type == CSSSelector::PseudoUnknown)
            (yyval.selector) = 0;
    }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 1179 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.selector) = parser->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::PseudoClass);
        (yyval.selector)->setArgument((yyvsp[(4) - (6)].string));
        (yyvsp[(2) - (6)].string).lower();
        (yyval.selector)->setValue((yyvsp[(2) - (6)].string));
        CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
        if (type == CSSSelector::PseudoUnknown)
            (yyval.selector) = 0;
        else if (type == CSSSelector::PseudoNthChild ||
                 type == CSSSelector::PseudoNthOfType ||
                 type == CSSSelector::PseudoNthLastChild ||
                 type == CSSSelector::PseudoNthLastOfType) {
            if (!isValidNthToken((yyvsp[(4) - (6)].string)))
                (yyval.selector) = 0;
        }
    }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 1196 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        if (!(yyvsp[(4) - (6)].selector) || !(yyvsp[(4) - (6)].selector)->isSimple())
            (yyval.selector) = 0;
        else {
            (yyval.selector) = parser->createFloatingSelector();
            (yyval.selector)->setMatch(CSSSelector::PseudoClass);
            Vector<OwnPtr<CSSParserSelector> > selectorVector;
            selectorVector.append(parser->sinkFloatingSelector((yyvsp[(4) - (6)].selector)));
            (yyval.selector)->adoptSelectorVector(selectorVector);
            (yyvsp[(2) - (6)].string).lower();
            (yyval.selector)->setValue((yyvsp[(2) - (6)].string));
        }
    }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 1211 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.boolean) = (yyvsp[(1) - (1)].boolean);
    }
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 1214 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.boolean) = (yyvsp[(1) - (2)].boolean);
        if ( (yyvsp[(2) - (2)].boolean) )
            (yyval.boolean) = (yyvsp[(2) - (2)].boolean);
    }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 1219 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.boolean) = (yyvsp[(1) - (1)].boolean);
    }
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 1222 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.boolean) = false;
    }
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 1225 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.boolean) = false;
    }
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 1228 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.boolean) = (yyvsp[(1) - (2)].boolean);
    }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 1231 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.boolean) = (yyvsp[(1) - (2)].boolean);
    }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 1236 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markPropertyStart();
        (yyval.boolean) = (yyvsp[(1) - (3)].boolean);
    }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 1240 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.boolean) = false;
    }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 1243 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.boolean) = false;
    }
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 1246 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markPropertyStart();
        (yyval.boolean) = false;
    }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 1250 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.boolean) = false;
    }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 1253 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markPropertyStart();
        (yyval.boolean) = (yyvsp[(1) - (4)].boolean);
        if ((yyvsp[(2) - (4)].boolean))
            (yyval.boolean) = (yyvsp[(2) - (4)].boolean);
    }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 1259 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markPropertyStart();
        (yyval.boolean) = (yyvsp[(1) - (4)].boolean);
    }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 1263 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markPropertyStart();
        (yyval.boolean) = (yyvsp[(1) - (6)].boolean);
    }
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 1269 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->storeVariableDeclaration((yyvsp[(1) - (5)].string), parser->sinkFloatingValueList((yyvsp[(4) - (5)].valueList)), (yyvsp[(5) - (5)].boolean));
        (yyval.boolean) = true;
        parser->markPropertyEnd((yyvsp[(5) - (5)].boolean), true);
    }
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 1275 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.boolean) = false;
        bool isPropertyParsed = false;
        if ((yyvsp[(1) - (5)].id) && (yyvsp[(4) - (5)].valueList)) {
            parser->m_valueList = parser->sinkFloatingValueList((yyvsp[(4) - (5)].valueList));
            int oldParsedProperties = parser->m_parsedProperties.size();
            (yyval.boolean) = parser->parseValue(static_cast<CSSPropertyID>((yyvsp[(1) - (5)].id)), (yyvsp[(5) - (5)].boolean));
            if (!(yyval.boolean))
                parser->rollbackLastProperties(parser->m_parsedProperties.size() - oldParsedProperties);
            else
                isPropertyParsed = true;
            parser->m_valueList = nullptr;
        }
        parser->markPropertyEnd((yyvsp[(5) - (5)].boolean), isPropertyParsed);
    }
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 1291 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.boolean) = false;
    }
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 1295 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markPropertyEnd(false, false);
        (yyval.boolean) = false;
    }
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 1300 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markPropertyEnd(false, false);
        (yyval.boolean) = false;
    }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 1305 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.boolean) = false;
    }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 1309 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markPropertyEnd(false, false);
        (yyval.boolean) = false;
    }
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 1314 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->markPropertyEnd(false, false);
        (yyval.boolean) = false;
    }
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 1319 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.boolean) = false;
    }
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 1324 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.id) = cssPropertyID((yyvsp[(1) - (2)].string));
    }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 1329 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.boolean) = true; }
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 1330 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.boolean) = false; }
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 1333 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.valueList) = parser->createFloatingValueList();
        (yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[(1) - (1)].value)));
    }
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 1337 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.valueList) = (yyvsp[(1) - (3)].valueList);
        if ((yyval.valueList)) {
            if ((yyvsp[(2) - (3)].character)) {
                CSSParserValue v;
                v.id = 0;
                v.unit = CSSParserValue::Operator;
                v.iValue = (yyvsp[(2) - (3)].character);
                (yyval.valueList)->addValue(v);
            }
            (yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[(3) - (3)].value)));
        }
    }
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 1350 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.valueList) = 0;
    }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 1353 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.valueList) = 0;
    }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 1356 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.valueList) = 0;
    }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 1361 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.character) = '/';
    }
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 1364 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.character) = ',';
    }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 1367 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.character) = 0;
  }
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 1372 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value) = (yyvsp[(1) - (1)].value); }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 1373 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value) = (yyvsp[(2) - (2)].value); (yyval.value).fValue *= (yyvsp[(1) - (2)].integer); }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 1374 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).string = (yyvsp[(1) - (2)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_STRING; }
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 1375 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
      (yyval.value).id = cssValueKeywordID((yyvsp[(1) - (2)].string));
      (yyval.value).unit = CSSPrimitiveValue::CSS_IDENT;
      (yyval.value).string = (yyvsp[(1) - (2)].string);
  }
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 1380 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).string = (yyvsp[(1) - (2)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_DIMENSION; }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 1381 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).string = (yyvsp[(2) - (3)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_DIMENSION; }
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 1382 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).string = (yyvsp[(1) - (2)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_URI; }
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 1383 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).string = (yyvsp[(1) - (2)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_UNICODE_RANGE; }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 1384 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).string = (yyvsp[(1) - (2)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_PARSER_HEXCOLOR; }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 1385 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).string = CSSParserString(); (yyval.value).unit = CSSPrimitiveValue::CSS_PARSER_HEXCOLOR; }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 1386 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
      (yyval.value).id = 0;
      (yyval.value).string = (yyvsp[(3) - (5)].string);
      (yyval.value).unit = CSSPrimitiveValue::CSS_VARIABLE_NAME;
  }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 1391 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
      (yyval.value) = (yyvsp[(1) - (1)].value);
  }
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 1394 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
      (yyval.value) = (yyvsp[(1) - (1)].value);
  }
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 1397 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
      (yyval.value) = (yyvsp[(1) - (1)].value);
  }
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 1400 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
      (yyval.value).id = 0; (yyval.value).unit = 0;
  }
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 1405 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).isInt = true; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER; }
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 1406 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).isInt = false; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER; }
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 1407 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PERCENTAGE; }
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 1408 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PX; }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 1409 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_CM; }
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 1410 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_MM; }
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 1411 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_IN; }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 1412 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PT; }
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 1413 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PC; }
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 1414 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_DEG; }
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 1415 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_RAD; }
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 1416 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_GRAD; }
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 1417 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_TURN; }
    break;

  case 278:

/* Line 1806 of yacc.c  */
#line 1418 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_MS; }
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 1419 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_S; }
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 1420 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_HZ; }
    break;

  case 281:

/* Line 1806 of yacc.c  */
#line 1421 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_KHZ; }
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 1422 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_EMS; }
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 1423 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSParserValue::Q_EMS; }
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 1424 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_EXS; }
    break;

  case 285:

/* Line 1806 of yacc.c  */
#line 1425 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
      (yyval.value).id = 0;
      (yyval.value).fValue = (yyvsp[(1) - (2)].number);
      (yyval.value).unit = CSSPrimitiveValue::CSS_REMS;
      if (parser->m_styleSheet)
          parser->m_styleSheet->parserSetUsesRemUnits(true);
  }
    break;

  case 286:

/* Line 1806 of yacc.c  */
#line 1432 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_VW; }
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 1433 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_VH; }
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 1434 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_VMIN; }
    break;

  case 289:

/* Line 1806 of yacc.c  */
#line 1435 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_DPPX; }
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 1436 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_DPI; }
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 1437 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_DPCM; }
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 1440 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        CSSParserFunction* f = parser->createFloatingFunction();
        f->name = (yyvsp[(1) - (5)].string);
        f->args = parser->sinkFloatingValueList((yyvsp[(3) - (5)].valueList));
        (yyval.value).id = 0;
        (yyval.value).unit = CSSParserValue::Function;
        (yyval.value).function = f;
    }
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 1448 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        CSSParserFunction* f = parser->createFloatingFunction();
        f->name = (yyvsp[(1) - (4)].string);
        f->args = parser->sinkFloatingValueList((yyvsp[(3) - (4)].valueList));
        (yyval.value).id = 0;
        (yyval.value).unit = CSSParserValue::Function;
        (yyval.value).function = f;
    }
    break;

  case 294:

/* Line 1806 of yacc.c  */
#line 1456 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        CSSParserFunction* f = parser->createFloatingFunction();
        f->name = (yyvsp[(1) - (4)].string);
        CSSParserValueList* valueList = parser->createFloatingValueList();
        f->args = parser->sinkFloatingValueList(valueList);
        (yyval.value).id = 0;
        (yyval.value).unit = CSSParserValue::Function;
        (yyval.value).function = f;
    }
    break;

  case 295:

/* Line 1806 of yacc.c  */
#line 1465 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        CSSParserFunction* f = parser->createFloatingFunction();
        f->name = (yyvsp[(1) - (3)].string);
        f->args = nullptr;
        (yyval.value).id = 0;
        (yyval.value).unit = CSSParserValue::Function;
        (yyval.value).function = f;
  }
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 1475 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value) = (yyvsp[(1) - (1)].value); }
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 1476 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
      (yyval.value).id = 0;
      (yyval.value).string = (yyvsp[(3) - (5)].string);
      (yyval.value).unit = CSSPrimitiveValue::CSS_VARIABLE_NAME;
  }
    break;

  case 298:

/* Line 1806 of yacc.c  */
#line 1481 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    { (yyval.value) = (yyvsp[(2) - (2)].value); (yyval.value).fValue *= (yyvsp[(1) - (2)].integer); }
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 1484 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.character) = '+';
    }
    break;

  case 300:

/* Line 1806 of yacc.c  */
#line 1487 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.character) = '-';
    }
    break;

  case 301:

/* Line 1806 of yacc.c  */
#line 1490 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.character) = '*';
    }
    break;

  case 302:

/* Line 1806 of yacc.c  */
#line 1493 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.character) = '/';
    }
    break;

  case 303:

/* Line 1806 of yacc.c  */
#line 1498 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        if ((yyvsp[(3) - (6)].valueList)) {
            (yyval.valueList) = (yyvsp[(3) - (6)].valueList);
            CSSParserValue v;
            v.id = 0;
            v.unit = CSSParserValue::Operator;
            v.iValue = '(';
            (yyval.valueList)->insertValueAt(0, v);
            v.iValue = ')';
            (yyval.valueList)->addValue(v);
        } else
            (yyval.valueList) = 0;
    }
    break;

  case 304:

/* Line 1806 of yacc.c  */
#line 1512 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.valueList) = parser->createFloatingValueList();
        (yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[(1) - (2)].value)));
    }
    break;

  case 305:

/* Line 1806 of yacc.c  */
#line 1516 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        if ((yyvsp[(1) - (3)].valueList) && (yyvsp[(2) - (3)].character)) {
            (yyval.valueList) = (yyvsp[(1) - (3)].valueList);
            CSSParserValue v;
            v.id = 0;
            v.unit = CSSParserValue::Operator;
            v.iValue = (yyvsp[(2) - (3)].character);
            (yyval.valueList)->addValue(v);
            (yyval.valueList)->addValue(parser->sinkFloatingValue((yyvsp[(3) - (3)].value)));
        } else
            (yyval.valueList) = 0;
    }
    break;

  case 306:

/* Line 1806 of yacc.c  */
#line 1528 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        if ((yyvsp[(1) - (3)].valueList) && (yyvsp[(2) - (3)].character) && (yyvsp[(3) - (3)].valueList)) {
            (yyval.valueList) = (yyvsp[(1) - (3)].valueList);
            CSSParserValue v;
            v.id = 0;
            v.unit = CSSParserValue::Operator;
            v.iValue = (yyvsp[(2) - (3)].character);
            (yyval.valueList)->addValue(v);
            (yyval.valueList)->extend(*((yyvsp[(3) - (3)].valueList)));
        } else
            (yyval.valueList) = 0;
    }
    break;

  case 308:

/* Line 1806 of yacc.c  */
#line 1541 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.valueList) = 0;
    }
    break;

  case 309:

/* Line 1806 of yacc.c  */
#line 1546 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.valueList) = (yyvsp[(1) - (1)].valueList);
    }
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 1549 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        if ((yyvsp[(1) - (4)].valueList) && (yyvsp[(4) - (4)].valueList)) {
            (yyval.valueList) = (yyvsp[(1) - (4)].valueList);
            CSSParserValue v;
            v.id = 0;
            v.unit = CSSParserValue::Operator;
            v.iValue = ',';
            (yyval.valueList)->addValue(v);
            (yyval.valueList)->extend(*((yyvsp[(4) - (4)].valueList)));
        } else
            (yyval.valueList) = 0;
    }
    break;

  case 311:

/* Line 1806 of yacc.c  */
#line 1562 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        CSSParserFunction* f = parser->createFloatingFunction();
        f->name = (yyvsp[(1) - (5)].string);
        f->args = parser->sinkFloatingValueList((yyvsp[(3) - (5)].valueList));
        (yyval.value).id = 0;
        (yyval.value).unit = CSSParserValue::Function;
        (yyval.value).function = f;
    }
    break;

  case 312:

/* Line 1806 of yacc.c  */
#line 1570 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        YYERROR;
    }
    break;

  case 313:

/* Line 1806 of yacc.c  */
#line 1575 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.string) = (yyvsp[(1) - (1)].string);
    }
    break;

  case 314:

/* Line 1806 of yacc.c  */
#line 1578 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.string) = (yyvsp[(1) - (1)].string);
    }
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 1583 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        CSSParserFunction* f = parser->createFloatingFunction();
        f->name = (yyvsp[(1) - (5)].string);
        f->args = parser->sinkFloatingValueList((yyvsp[(3) - (5)].valueList));
        (yyval.value).id = 0;
        (yyval.value).unit = CSSParserValue::Function;
        (yyval.value).function = f;
    }
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 1591 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        YYERROR;
    }
    break;

  case 317:

/* Line 1806 of yacc.c  */
#line 1596 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.rule) = 0;
    }
    break;

  case 318:

/* Line 1806 of yacc.c  */
#line 1599 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.rule) = 0;
    }
    break;

  case 319:

/* Line 1806 of yacc.c  */
#line 1604 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.rule) = 0;
    }
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 1607 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.rule) = 0;
    }
    break;

  case 321:

/* Line 1806 of yacc.c  */
#line 1612 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        (yyval.rule) = 0;
    }
    break;

  case 322:

/* Line 1806 of yacc.c  */
#line 1617 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->invalidBlockHit();
    }
    break;

  case 323:

/* Line 1806 of yacc.c  */
#line 1620 "../../../../../out/Release/gen/webkit/CSSGrammar.y"
    {
        parser->invalidBlockHit();
    }
    break;



/* Line 1806 of yacc.c  */
#line 5133 "../../../../../out/Release/gen/webkit/CSSGrammar.cpp"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (parser, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (parser, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, parser);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, parser);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (parser, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, parser);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, parser);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 1628 "../../../../../out/Release/gen/webkit/CSSGrammar.y"


