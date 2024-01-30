
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "prog.y"

#include "prog.h"


/* Line 189 of yacc.c  */
#line 78 "prog.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
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
     SHR_OP = 258,
     SHL_OP = 259,
     GE_OP = 260,
     LE_OP = 261,
     NE_OP = 262,
     EQ_OP = 263,
     AND_OP = 264,
     OR_OP = 265,
     ADD_ASSIGN = 266,
     IDENTIFIER = 267,
     CONSTANT = 268,
     CONSTANT_STRING = 269,
     CONSTANT_F = 270,
     INT = 271,
     FLOAT = 272,
     STRING = 273,
     CIN = 274,
     COUT = 275,
     IF = 276,
     ELSE = 277,
     FOR = 278,
     CONTINUE = 279,
     BREAK = 280,
     RETURN = 281,
     READ = 282,
     DO = 283,
     WHILE = 284,
     ENDL = 285,
     DOBLEMAS = 286,
     EXTDEFS = 287,
     PARAS = 288,
     STMTS = 289,
     DEFS = 290,
     DECS = 291,
     ARGS = 292,
     LIB1 = 293,
     LIB2 = 294
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 6 "prog.y"

    int i;
    struct ast_node *n;
	char* s;
	float f;



/* Line 214 of yacc.c  */
#line 162 "prog.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 187 "prog.tab.c"

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
# if YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   568

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNRULES -- Number of states.  */
#define YYNSTATES  230

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,     2,     2,     2,     2,     2,
      40,    41,    53,    51,    42,    52,     2,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    47,
      50,    48,    49,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    43,     2,    44,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    46,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     8,    10,    13,    15,    19,    23,
      27,    32,    36,    38,    42,    45,    48,    51,    53,    58,
      60,    63,    65,    67,    69,    71,    73,    75,    77,    79,
      81,    83,    88,    92,    96,    99,   101,   103,   111,   118,
     125,   131,   135,   140,   145,   150,   157,   164,   167,   173,
     181,   191,   200,   209,   217,   226,   234,   242,   249,   257,
     263,   265,   268,   272,   276,   280,   282,   286,   290,   292,
     296,   298,   302,   304,   308,   310,   312,   314,   318,   322,
     324,   328,   330,   334,   336,   340,   344,   346,   350,   354,
     358,   362,   364,   366,   370,   374,   376,   380,   384,   386,
     389,   391,   396,   400,   402,   404,   406,   410,   412
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      57,     0,    -1,    -1,    38,    39,    58,    -1,    59,    -1,
      58,    59,    -1,    77,    -1,    16,    60,    67,    -1,    17,
      60,    67,    -1,    18,    60,    67,    -1,    12,    40,    61,
      41,    -1,    12,    40,    41,    -1,    62,    -1,    61,    42,
      62,    -1,    16,    63,    -1,    17,    63,    -1,    18,    63,
      -1,    12,    -1,    12,    43,    13,    44,    -1,    65,    -1,
      64,    65,    -1,    66,    -1,    69,    -1,    70,    -1,    71,
      -1,    72,    -1,    73,    -1,    74,    -1,    75,    -1,    68,
      -1,    76,    -1,    45,    76,    64,    46,    -1,    45,    76,
      46,    -1,    45,    64,    46,    -1,    45,    46,    -1,    47,
      -1,    66,    -1,    45,    76,    64,    26,    83,    47,    46,
      -1,    45,    76,    26,    83,    47,    46,    -1,    45,    64,
      26,    83,    47,    46,    -1,    45,    26,    83,    47,    46,
      -1,    26,    83,    47,    -1,    19,     3,    12,    47,    -1,
      20,     4,    12,    47,    -1,    20,     4,    14,    47,    -1,
      20,     4,    12,     4,    30,    47,    -1,    20,     4,    14,
       4,    30,    47,    -1,    83,    47,    -1,    21,    40,    83,
      41,    65,    -1,    21,    40,    83,    41,    65,    22,    65,
      -1,    23,    40,    83,    47,    83,    47,    83,    41,    65,
      -1,    23,    40,    83,    47,    83,    47,    41,    65,    -1,
      23,    40,    83,    47,    47,    83,    41,    65,    -1,    23,
      40,    83,    47,    47,    41,    65,    -1,    23,    40,    47,
      83,    47,    83,    41,    65,    -1,    23,    40,    47,    83,
      47,    41,    65,    -1,    23,    40,    47,    47,    83,    41,
      65,    -1,    23,    40,    47,    47,    41,    65,    -1,    28,
      65,    29,    40,    83,    41,    47,    -1,    29,    40,    83,
      41,    65,    -1,    77,    -1,    76,    77,    -1,    16,    80,
      47,    -1,    17,    78,    47,    -1,    18,    79,    47,    -1,
      63,    -1,    63,    48,    15,    -1,    63,    48,    13,    -1,
      63,    -1,    63,    48,    14,    -1,    81,    -1,    80,    42,
      81,    -1,    63,    -1,    63,    48,    82,    -1,    83,    -1,
      84,    -1,    85,    -1,    92,    48,    84,    -1,    92,    11,
      84,    -1,    86,    -1,    85,    10,    86,    -1,    87,    -1,
      86,     9,    87,    -1,    88,    -1,    87,     8,    88,    -1,
      87,     7,    88,    -1,    89,    -1,    88,    49,    89,    -1,
      88,     5,    89,    -1,    88,    50,    89,    -1,    88,     6,
      89,    -1,    90,    -1,    91,    -1,    90,    51,    91,    -1,
      90,    52,    91,    -1,    92,    -1,    91,    53,    92,    -1,
      91,    54,    92,    -1,    93,    -1,    55,    92,    -1,    94,
      -1,    93,    40,    95,    41,    -1,    93,    40,    41,    -1,
      12,    -1,    13,    -1,    15,    -1,    40,    83,    41,    -1,
      83,    -1,    95,    42,    83,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    40,    40,    41,    45,    46,    50,    51,    52,    53,
      58,    59,    63,    64,    68,    69,    70,    74,    75,    79,
      80,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    97,    98,    99,   100,   101,   105,   106,   107,   108,
     109,   113,   117,   121,   122,   123,   124,   128,   132,   133,
     137,   138,   139,   140,   141,   142,   143,   144,   152,   156,
     160,   161,   165,   166,   167,   171,   172,   173,   177,   178,
     183,   184,   188,   189,   193,   197,   201,   202,   203,   207,
     208,   212,   213,   217,   218,   219,   223,   224,   225,   226,
     227,   231,   235,   236,   237,   241,   242,   243,   247,   248,
     252,   253,   254,   258,   259,   260,   261,   265,   266
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SHR_OP", "SHL_OP", "GE_OP", "LE_OP",
  "NE_OP", "EQ_OP", "AND_OP", "OR_OP", "ADD_ASSIGN", "IDENTIFIER",
  "CONSTANT", "CONSTANT_STRING", "CONSTANT_F", "INT", "FLOAT", "STRING",
  "CIN", "COUT", "IF", "ELSE", "FOR", "CONTINUE", "BREAK", "RETURN",
  "READ", "DO", "WHILE", "ENDL", "DOBLEMAS", "EXTDEFS", "PARAS", "STMTS",
  "DEFS", "DECS", "ARGS", "LIB1", "LIB2", "'('", "')'", "','", "'['",
  "']'", "'{'", "'}'", "';'", "'='", "'>'", "'<'", "'+'", "'-'", "'*'",
  "'/'", "'!'", "$accept", "program", "extdefs", "extdef", "func", "paras",
  "para", "var", "stmts", "stmt", "compound_stmt", "compound_stmt_func",
  "jump_stmt", "in_stmt", "out_stmt", "expr_stmt", "selection_stmt",
  "iteration_stmt", "do_stmt", "while_stmt", "defs", "def", "real", "str",
  "decs", "dec", "init", "expr", "assignment", "logical_or", "logical_and",
  "equality", "relational", "shift", "additive", "multi", "unary",
  "postfix", "primary", "args", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
      40,    41,    44,    91,    93,   123,   125,    59,    61,    62,
      60,    43,    45,    42,    47,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    57,    58,    58,    59,    59,    59,    59,
      60,    60,    61,    61,    62,    62,    62,    63,    63,    64,
      64,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    66,    66,    66,    66,    66,    67,    67,    67,    67,
      67,    68,    69,    70,    70,    70,    70,    71,    72,    72,
      73,    73,    73,    73,    73,    73,    73,    73,    74,    75,
      76,    76,    77,    77,    77,    78,    78,    78,    79,    79,
      80,    80,    81,    81,    82,    83,    84,    84,    84,    85,
      85,    86,    86,    87,    87,    87,    88,    88,    88,    88,
      88,    89,    90,    90,    90,    91,    91,    91,    92,    92,
      93,    93,    93,    94,    94,    94,    94,    95,    95
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     1,     2,     1,     3,     3,     3,
       4,     3,     1,     3,     2,     2,     2,     1,     4,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     3,     3,     2,     1,     1,     7,     6,     6,
       5,     3,     4,     4,     4,     6,     6,     2,     5,     7,
       9,     8,     8,     7,     8,     7,     7,     6,     7,     5,
       1,     2,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     1,     3,     3,     1,     3,     3,     1,     2,
       1,     4,     3,     1,     1,     1,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,     1,     0,     0,     0,     3,     4,
       6,    17,     0,    72,     0,    70,     0,    65,     0,     0,
      68,     0,     5,     0,     0,     0,    35,    36,     7,     0,
       0,    62,     8,     0,    63,     9,     0,    64,     0,     0,
       0,    11,     0,    12,     0,   103,   104,   105,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,     0,    19,    21,    29,    22,    23,    24,    25,
      26,    27,    28,     0,    60,     0,    75,    76,    79,    81,
      83,    86,    91,    92,    95,    98,   100,    73,    74,    17,
      71,    67,    66,    69,    14,    15,    16,    10,     0,    18,
       0,     0,     0,     0,     0,     0,     0,    30,     0,     0,
       0,     0,    99,     0,    33,    20,     0,    32,     0,    60,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,     0,     0,
       0,     0,     0,    41,     0,     0,    61,     0,   106,     0,
       0,     0,     0,    31,    80,    95,    82,    85,    84,    88,
      90,    87,    89,    93,    94,    96,    97,    78,    77,   102,
     107,     0,    42,     0,    43,     0,    44,     0,     0,     0,
       0,    40,    41,     0,     0,    41,    41,     0,   101,     0,
       0,     0,    48,     0,     0,     0,     0,     0,     0,    59,
      39,    38,    41,   108,    45,    46,     0,    57,     0,     0,
       0,     0,     0,     0,     0,    37,    49,    56,    55,     0,
      53,     0,     0,     0,    58,    54,    52,    51,     0,    50
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,     9,    12,    42,    43,    13,    62,    63,
      64,    28,    65,    66,    67,    68,    69,    70,    71,    72,
     107,    74,    18,    21,    14,    15,    87,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,   171
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -59
static const yytype_int16 yypact[] =
{
     -10,    10,    36,   102,   -59,    66,    66,    66,   102,   -59,
     -59,   -13,    25,    42,    24,   -59,    25,    63,    53,    25,
      73,    77,   -59,    15,   113,   185,   -59,   -59,   -59,    90,
     116,   -59,   -59,    83,   -59,   -59,   127,   -59,   116,   116,
     116,   -59,   -28,   -59,    98,   -59,   -59,   -59,   116,   116,
     116,   141,   146,   115,   117,    90,   513,   124,    90,   226,
     -59,    90,   267,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   308,   -59,   118,   -59,   158,   161,    35,
      -3,   -59,    34,    61,    13,   133,   -59,   -59,   -59,   131,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   122,   -59,
     163,    96,    90,     8,   129,    90,   148,   130,    90,   138,
     349,   390,   -59,    90,   -59,   -59,    90,   -59,   431,   -59,
     -59,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,     4,   -59,   134,     5,     7,
     139,    22,   135,   137,   152,   167,   -59,   168,   -59,   472,
     165,   169,    90,   -59,   161,   -59,    35,    -3,    -3,   -59,
     -59,   -59,   -59,    61,    61,   -59,   -59,   -59,   -59,   -59,
     -59,    16,   -59,   180,   -59,   187,   -59,   513,    52,   171,
      82,   -59,   -59,    90,   513,   173,   174,   175,   -59,    90,
     176,   177,   193,   513,   186,    76,   221,   179,   188,   -59,
     -59,   -59,   182,   -59,   -59,   -59,   513,   -59,   513,   513,
     194,   513,   196,   262,   201,   -59,   -59,   -59,   -59,   513,
     -59,   513,   513,   209,   -59,   -59,   -59,   -59,   513,   -59
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -59,   -59,   -59,   213,   126,   -59,   153,     1,   -58,   -50,
       6,    85,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -21,     2,   -59,   -59,   -59,   223,   -59,   -29,    19,   -59,
     136,   142,    12,   -45,   -59,    33,    64,   -59,   -59,   -59
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      88,   110,   125,   126,    73,    10,   106,    17,    20,   173,
      10,   175,   115,    97,    98,   118,    45,    46,    27,    47,
      45,    46,    27,    47,   133,    27,   104,    23,     1,   109,
      24,    38,    39,    40,    45,    46,     4,    47,   111,    94,
      95,    96,   123,   124,    58,   169,   127,   128,    58,     3,
      17,    20,   174,   149,   176,   141,    41,   188,   189,    61,
     115,   134,    58,    61,    45,    46,    30,    47,   115,   178,
      25,    31,    26,   140,   142,   119,   144,    61,    11,   147,
     159,   160,   161,   162,   150,   129,   130,   151,    45,    46,
      29,    47,    58,   193,    45,    46,    91,    47,    92,   115,
      34,    32,    45,    46,    35,    47,   170,    61,   138,   146,
     139,    33,   179,   119,   131,   132,    58,   209,     5,     6,
       7,    36,    58,   187,    37,   112,    44,   192,    89,   196,
      58,    61,    16,    19,   199,   157,   158,    61,    38,    39,
      40,    93,    99,   207,   100,    61,    48,    49,    50,   194,
     101,   197,   167,   168,   198,   102,   216,   103,   217,   218,
     203,   220,   163,   164,   108,   120,   210,   212,   121,   225,
     122,   226,   227,   135,    24,   137,   143,   145,   229,   148,
     177,   172,   180,   181,   223,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   165,   166,    45,    46,   182,
      47,    48,    49,    50,    51,    52,    53,   183,    54,   184,
     190,    55,   185,    56,    57,   206,   186,   191,   195,   200,
     201,    22,   202,   204,   205,    58,   213,   208,   215,   214,
      59,    60,    26,    45,    46,   219,    47,   221,    45,    46,
      61,    47,    48,    49,    50,    51,    52,    53,   224,    54,
     228,   136,   105,    90,    56,    57,     0,   154,     0,     0,
       0,    58,   211,     0,   156,     0,    58,     0,     0,     0,
       0,    59,    60,    26,    45,    46,    61,    47,     0,    45,
      46,    61,    47,    48,    49,    50,    51,    52,    53,     0,
      54,     0,     0,   113,     0,    56,    57,     0,     0,     0,
       0,     0,    58,   222,     0,     0,     0,    58,     0,     0,
       0,     0,    59,   114,    26,     0,     0,    61,     0,     0,
      45,    46,    61,    47,    48,    49,    50,    51,    52,    53,
       0,    54,     0,     0,   116,     0,    56,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
       0,     0,     0,    59,   117,    26,     0,     0,     0,     0,
       0,    45,    46,    61,    47,    48,    49,    50,    51,    52,
      53,     0,    54,     0,     0,   105,     0,    56,    57,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,     0,     0,     0,    59,   114,    26,     0,     0,     0,
       0,     0,    45,    46,    61,    47,    48,    49,    50,    51,
      52,    53,     0,    54,     0,     0,   105,     0,    56,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      58,     0,     0,     0,     0,    59,   117,    26,     0,     0,
       0,     0,     0,    45,    46,    61,    47,    48,    49,    50,
      51,    52,    53,     0,    54,     0,     0,   152,     0,    56,
      57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,     0,     0,     0,    59,   153,    26,     0,
       0,     0,     0,     0,    45,    46,    61,    47,    48,    49,
      50,    51,    52,    53,     0,    54,     0,     0,   105,     0,
      56,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,     0,     0,     0,     0,    59,   153,    26,
       0,     0,     0,     0,     0,    45,    46,    61,    47,    48,
      49,    50,    51,    52,    53,     0,    54,     0,     0,   105,
       0,    56,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    58,     0,     0,     0,     0,    59,     0,
      26,     0,     0,     0,     0,     0,     0,     0,    61
};

static const yytype_int16 yycheck[] =
{
      29,    59,     5,     6,    25,     3,    56,     6,     7,     4,
       8,     4,    62,    41,    42,    73,    12,    13,    12,    15,
      12,    13,    16,    15,    11,    19,    55,    40,    38,    58,
      43,    16,    17,    18,    12,    13,     0,    15,    59,    38,
      39,    40,     7,     8,    40,    41,    49,    50,    40,    39,
      49,    50,    47,   111,    47,    47,    41,    41,    42,    55,
     110,    48,    40,    55,    12,    13,    42,    15,   118,    47,
      45,    47,    47,   102,   103,    73,   105,    55,    12,   108,
     125,   126,   127,   128,   113,    51,    52,   116,    12,    13,
      48,    15,    40,    41,    12,    13,    13,    15,    15,   149,
      47,    16,    12,    13,    19,    15,   135,    55,    12,   107,
      14,    48,   141,   111,    53,    54,    40,    41,    16,    17,
      18,    48,    40,   152,    47,    61,    13,   177,    12,    47,
      40,    55,     6,     7,   184,   123,   124,    55,    16,    17,
      18,    14,    44,   193,     3,    55,    16,    17,    18,   178,
       4,   180,   133,   134,   183,    40,   206,    40,   208,   209,
     189,   211,   129,   130,    40,    47,   195,   196,    10,   219,
       9,   221,   222,    40,    43,    12,    47,    29,   228,    41,
      41,    47,    47,    46,   213,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,    12,    13,    47,
      15,    16,    17,    18,    19,    20,    21,    40,    23,    41,
      30,    26,    47,    28,    29,    22,    47,    30,    47,    46,
      46,     8,    47,    47,    47,    40,    47,    41,    46,    41,
      45,    46,    47,    12,    13,    41,    15,    41,    12,    13,
      55,    15,    16,    17,    18,    19,    20,    21,    47,    23,
      41,    98,    26,    30,    28,    29,    -1,   121,    -1,    -1,
      -1,    40,    41,    -1,   122,    -1,    40,    -1,    -1,    -1,
      -1,    45,    46,    47,    12,    13,    55,    15,    -1,    12,
      13,    55,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    -1,    -1,    26,    -1,    28,    29,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    45,    46,    47,    -1,    -1,    55,    -1,    -1,
      12,    13,    55,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    -1,    -1,    26,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    12,    13,    55,    15,    16,    17,    18,    19,    20,
      21,    -1,    23,    -1,    -1,    26,    -1,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    45,    46,    47,    -1,    -1,    -1,
      -1,    -1,    12,    13,    55,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    -1,    -1,    26,    -1,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,    -1,
      -1,    -1,    -1,    12,    13,    55,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    -1,    -1,    26,    -1,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,    12,    13,    55,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    -1,    -1,    26,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    45,    46,    47,
      -1,    -1,    -1,    -1,    -1,    12,    13,    55,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    -1,    -1,    26,
      -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    45,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    57,    39,     0,    16,    17,    18,    58,    59,
      77,    12,    60,    63,    80,    81,    60,    63,    78,    60,
      63,    79,    59,    40,    43,    45,    47,    66,    67,    48,
      42,    47,    67,    48,    47,    67,    48,    47,    16,    17,
      18,    41,    61,    62,    13,    12,    13,    15,    16,    17,
      18,    19,    20,    21,    23,    26,    28,    29,    40,    45,
      46,    55,    64,    65,    66,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    82,    83,    12,
      81,    13,    15,    14,    63,    63,    63,    41,    42,    44,
       3,     4,    40,    40,    83,    26,    65,    76,    40,    83,
      64,    76,    92,    26,    46,    65,    26,    46,    64,    77,
      47,    10,     9,     7,     8,     5,     6,    49,    50,    51,
      52,    53,    54,    11,    48,    40,    62,    12,    12,    14,
      83,    47,    83,    47,    83,    29,    77,    83,    41,    64,
      83,    83,    26,    46,    86,    92,    87,    88,    88,    89,
      89,    89,    89,    91,    91,    92,    92,    84,    84,    41,
      83,    95,    47,     4,    47,     4,    47,    41,    47,    83,
      47,    46,    47,    40,    41,    47,    47,    83,    41,    42,
      30,    30,    65,    41,    83,    47,    47,    83,    83,    65,
      46,    46,    47,    83,    47,    47,    22,    65,    41,    41,
      83,    41,    83,    47,    41,    46,    65,    65,    65,    41,
      65,    41,    41,    83,    47,    65,    65,    65,    41,    65
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
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
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 40 "prog.y"
    { set_parse_tree((yyval.n) = NULL); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 41 "prog.y"
    { set_parse_tree((yyval.n) = (yyvsp[(3) - (3)].n)); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 45 "prog.y"
    { (yyval.n) = list_new(EXTDEFS, (yyvsp[(1) - (1)].n), NULL); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 46 "prog.y"
    { list_append((yyval.n) = (yyvsp[(1) - (2)].n), list_new(EXTDEFS, (yyvsp[(2) - (2)].n), NULL)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 50 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 51 "prog.y"
    { (yyval.n) = funcdef_new(int_type(), (yyvsp[(2) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 52 "prog.y"
    { (yyval.n) = funcdef_new(float_type(), (yyvsp[(2) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 53 "prog.y"
    { (yyval.n) = funcdef_new(string_type(), (yyvsp[(2) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 58 "prog.y"
    { (yyval.n) = funchead_new((yyvsp[(1) - (4)].i), (yyvsp[(3) - (4)].n)); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 59 "prog.y"
    { (yyval.n) = funchead_new((yyvsp[(1) - (3)].i), NULL); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 63 "prog.y"
    { (yyval.n) = list_new(PARAS, (yyvsp[(1) - (1)].n), NULL); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 64 "prog.y"
    { list_append((yyval.n) = (yyvsp[(1) - (3)].n), list_new(PARAS, (yyvsp[(3) - (3)].n), NULL)); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 68 "prog.y"
    { (yyval.n) = para_new(int_type(), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 69 "prog.y"
    { (yyval.n) = para_new(float_type(), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 70 "prog.y"
    { (yyval.n) = para_new(string_type(), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 74 "prog.y"
    { (yyval.n) = var_new((yyvsp[(1) - (1)].i), 0); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 75 "prog.y"
    { (yyval.n) = var_new((yyvsp[(1) - (4)].i), (yyvsp[(3) - (4)].i)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 79 "prog.y"
    { (yyval.n) = list_new(STMTS, (yyvsp[(1) - (1)].n), NULL); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 80 "prog.y"
    { list_append((yyval.n) = (yyvsp[(1) - (2)].n), list_new(STMTS, (yyvsp[(2) - (2)].n), NULL)); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 84 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 85 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 86 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 87 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 88 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 89 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 90 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 91 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 92 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 93 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 97 "prog.y"
    { (yyval.n) = compound_stmt_new((yyvsp[(2) - (4)].n), (yyvsp[(3) - (4)].n), NULL); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 98 "prog.y"
    { (yyval.n) = compound_stmt_new((yyvsp[(2) - (3)].n), NULL, NULL); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 99 "prog.y"
    { (yyval.n) = compound_stmt_new(NULL, (yyvsp[(2) - (3)].n),  NULL); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 100 "prog.y"
    { (yyval.n) = compound_stmt_new(NULL, NULL,  NULL); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 101 "prog.y"
    { (yyval.n) = compound_stmt_new(NULL, NULL, NULL); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 105 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 106 "prog.y"
    { (yyval.n) = compound_stmt_new((yyvsp[(2) - (7)].n), (yyvsp[(3) - (7)].n),  (yyvsp[(5) - (7)].n)); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 107 "prog.y"
    { (yyval.n) = compound_stmt_new((yyvsp[(2) - (6)].n), NULL,  (yyvsp[(4) - (6)].n)); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 108 "prog.y"
    { (yyval.n) = compound_stmt_new(NULL, (yyvsp[(2) - (6)].n),  (yyvsp[(4) - (6)].n)); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 109 "prog.y"
    { (yyval.n) = compound_stmt_new(NULL, NULL,  (yyvsp[(3) - (5)].n)); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 113 "prog.y"
    { (yyval.n) = return_stmt_new((yyvsp[(2) - (3)].n)); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 117 "prog.y"
    { (yyval.n) = in_stmt_new((yyvsp[(3) - (4)].i)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 121 "prog.y"
    { (yyval.n) = out_stmt_new((yyvsp[(3) - (4)].i),NULL); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 122 "prog.y"
    { (yyval.n) = out_stmt_new(0,(yyvsp[(3) - (4)].s)); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 123 "prog.y"
    { (yyval.n) = out_stmt_new((yyvsp[(3) - (6)].i),NULL); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 124 "prog.y"
    { (yyval.n) = out_stmt_new(0,(yyvsp[(3) - (6)].s)); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 128 "prog.y"
    { (yyval.n) = expr_stmt_new((yyvsp[(1) - (2)].n)); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 132 "prog.y"
    { (yyval.n) = if_stmt_new((yyvsp[(3) - (5)].n), (yyvsp[(5) - (5)].n), NULL); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 133 "prog.y"
    { (yyval.n) = if_stmt_new((yyvsp[(3) - (7)].n), (yyvsp[(5) - (7)].n), (yyvsp[(7) - (7)].n)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 137 "prog.y"
    { (yyval.n) = for_stmt_new((yyvsp[(3) - (9)].n),   (yyvsp[(5) - (9)].n),   (yyvsp[(7) - (9)].n),   (yyvsp[(9) - (9)].n)); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 138 "prog.y"
    { (yyval.n) = for_stmt_new((yyvsp[(3) - (8)].n),   (yyvsp[(5) - (8)].n),   NULL, (yyvsp[(8) - (8)].n)); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 139 "prog.y"
    { (yyval.n) = for_stmt_new((yyvsp[(3) - (8)].n),   NULL, (yyvsp[(6) - (8)].n),   (yyvsp[(8) - (8)].n)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 140 "prog.y"
    { (yyval.n) = for_stmt_new((yyvsp[(3) - (7)].n),   NULL, NULL, (yyvsp[(7) - (7)].n)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 141 "prog.y"
    { (yyval.n) = for_stmt_new(NULL, (yyvsp[(4) - (8)].n),   (yyvsp[(6) - (8)].n),   (yyvsp[(8) - (8)].n)); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 142 "prog.y"
    { (yyval.n) = for_stmt_new(NULL, (yyvsp[(4) - (7)].n),   NULL, (yyvsp[(7) - (7)].n)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 143 "prog.y"
    { (yyval.n) = for_stmt_new(NULL, NULL, (yyvsp[(5) - (7)].n),   (yyvsp[(7) - (7)].n)); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 144 "prog.y"
    { (yyval.n) = for_stmt_new(NULL, NULL, NULL, (yyvsp[(6) - (6)].n)); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 152 "prog.y"
    { (yyval.n) = do_stmt_new((yyvsp[(2) - (7)].n),   (yyvsp[(5) - (7)].n)); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 156 "prog.y"
    { (yyval.n) = while_stmt_new((yyvsp[(3) - (5)].n),   (yyvsp[(5) - (5)].n)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 160 "prog.y"
    { (yyval.n) = list_new(DEFS, (yyvsp[(1) - (1)].n), NULL); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 161 "prog.y"
    { list_append((yyval.n) = (yyvsp[(1) - (2)].n), list_new(DEFS, (yyvsp[(2) - (2)].n), NULL)); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 165 "prog.y"
    { (yyval.n) = def_new(int_type(), (yyvsp[(2) - (3)].n)); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 166 "prog.y"
    { (yyval.n) = def_f_new(float_type(), (yyvsp[(2) - (3)].n)); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 167 "prog.y"
    { (yyval.n) = def_s_new(string_type(), (yyvsp[(2) - (3)].n)); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 171 "prog.y"
    { (yyval.n) = real_new((yyvsp[(1) - (1)].n), 0); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 172 "prog.y"
    { (yyval.n) = real_new((yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].f)); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 173 "prog.y"
    { (yyval.n) = real_new((yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].i)); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 177 "prog.y"
    { (yyval.n) = str_new((yyvsp[(1) - (1)].n), NULL); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 178 "prog.y"
    { (yyval.n) = str_new((yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].s)); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 183 "prog.y"
    { (yyval.n) = list_new(DECS, (yyvsp[(1) - (1)].n), NULL); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 184 "prog.y"
    { list_append((yyval.n) = (yyvsp[(1) - (3)].n), list_new(DECS, (yyvsp[(3) - (3)].n), NULL)); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 188 "prog.y"
    { (yyval.n) = dec_new((yyvsp[(1) - (1)].n), NULL); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 189 "prog.y"
    { (yyval.n) = dec_new((yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 193 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 197 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 201 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 202 "prog.y"
    { (yyval.n) = binop_new('=', (yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 203 "prog.y"
    { (yyval.n) = binop_new(ADD_ASSIGN, (yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 207 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 208 "prog.y"
    { (yyval.n) = binop_new(OR_OP, (yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 212 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 213 "prog.y"
    { (yyval.n) = binop_new(AND_OP, (yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 217 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 218 "prog.y"
    { (yyval.n) = binop_new(EQ_OP, (yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 219 "prog.y"
    { (yyval.n) = binop_new(NE_OP, (yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 223 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 224 "prog.y"
    { (yyval.n) = binop_new('>', (yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 225 "prog.y"
    { (yyval.n) = binop_new(GE_OP, (yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 226 "prog.y"
    { (yyval.n) = binop_new('<', (yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 227 "prog.y"
    { (yyval.n) = binop_new(LE_OP, (yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 231 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 235 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 236 "prog.y"
    { (yyval.n) = binop_new('+', (yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 237 "prog.y"
    { (yyval.n) = binop_new('-', (yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 241 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 242 "prog.y"
    { (yyval.n) = binop_new('*', (yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 243 "prog.y"
    { (yyval.n) = binop_new('/', (yyvsp[(1) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 247 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 248 "prog.y"
    { (yyval.n) = prefix_new('!', (yyvsp[(2) - (2)].n)); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 252 "prog.y"
    { (yyval.n) = (yyvsp[(1) - (1)].n); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 253 "prog.y"
    { (yyval.n) = func_call_new((yyvsp[(1) - (4)].n), (yyvsp[(3) - (4)].n)); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 254 "prog.y"
    { (yyval.n) = func_call_new((yyvsp[(1) - (3)].n), NULL); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 258 "prog.y"
    { (yyval.n) = id_new((yyvsp[(1) - (1)].i)); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 259 "prog.y"
    { (yyval.n) = const_new((yyvsp[(1) - (1)].i)); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 260 "prog.y"
    { (yyval.n) = const_new((yyvsp[(1) - (1)].f)); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 261 "prog.y"
    { (yyval.n) = (yyvsp[(2) - (3)].n); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 265 "prog.y"
    { (yyval.n) = list_new(ARGS, (yyvsp[(1) - (1)].n), NULL); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 266 "prog.y"
    { list_append((yyval.n) = (yyvsp[(1) - (3)].n), list_new(ARGS, (yyvsp[(3) - (3)].n), NULL)); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2436 "prog.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[0] = yylsp[1-yylen];
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
      if (yyn != YYPACT_NINF)
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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



