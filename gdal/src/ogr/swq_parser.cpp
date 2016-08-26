/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         swqparse
#define yylex           swqlex
#define yyerror         swqerror
#define yydebug         swqdebug
#define yynerrs         swqnerrs


/* Copy the first part of user declarations.  */
#line 1 "swq_parser.y" /* yacc.c:339  */

/******************************************************************************
 *
 * Component: OGR SQL Engine
 * Purpose: expression and select parser grammar.
 *          Requires Bison 2.4.0 or newer to process.  Use "make parser" target.
 * Author: Frank Warmerdam <warmerdam@pobox.com>
 * 
 ******************************************************************************
 * Copyright (C) 2010 Frank Warmerdam <warmerdam@pobox.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 ****************************************************************************/


#include "cpl_conv.h"
#include "cpl_string.h"
#include "swq.h"

#define YYSTYPE  swq_expr_node*

/* Defining YYSTYPE_IS_TRIVIAL is needed because the parser is generated as a C++ file. */ 
/* See http://www.gnu.org/s/bison/manual/html_node/Memory-Management.html that suggests */ 
/* increase YYINITDEPTH instead, but this will consume memory. */ 
/* Setting YYSTYPE_IS_TRIVIAL overcomes this limitation, but might be fragile because */ 
/* it appears to be a non documented feature of Bison */ 
#define YYSTYPE_IS_TRIVIAL 1

static void swqerror( swq_parse_context *context, const char *msg )
{
    CPLError( CE_Failure, CPLE_AppDefined, 
              "SQL Expression Parsing Error: %s", msg );
}


#line 124 "swq_parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "swq_parser.hpp".  */
#ifndef YY_SWQ_SWQ_PARSER_HPP_INCLUDED
# define YY_SWQ_SWQ_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int swqdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SWQT_NUMBER = 258,
    SWQT_STRING = 259,
    SWQT_IDENTIFIER = 260,
    SWQT_IN = 261,
    SWQT_LIKE = 262,
    SWQT_ESCAPE = 263,
    SWQT_BETWEEN = 264,
    SWQT_NULL = 265,
    SWQT_IS = 266,
    SWQT_SELECT = 267,
    SWQT_LEFT = 268,
    SWQT_JOIN = 269,
    SWQT_WHERE = 270,
    SWQT_ON = 271,
    SWQT_ORDER = 272,
    SWQT_BY = 273,
    SWQT_FROM = 274,
    SWQT_AS = 275,
    SWQT_ASC = 276,
    SWQT_DESC = 277,
    SWQT_DISTINCT = 278,
    SWQT_CAST = 279,
    SWQT_UNION = 280,
    SWQT_ALL = 281,
    SWQT_LOGICAL_START = 282,
    SWQT_VALUE_START = 283,
    SWQT_SELECT_START = 284,
    SWQT_NOT = 285,
    SWQT_OR = 286,
    SWQT_AND = 287,
    SWQT_UMINUS = 288
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int swqparse (swq_parse_context *context);

#endif /* !YY_SWQ_SWQ_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 208 "swq_parser.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   294

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  186

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,     2,     2,    37,     2,     2,
      39,    40,    35,    33,    45,    34,    46,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,    41,    43,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   104,   104,   109,   114,   120,   128,   136,   143,   148,
     156,   164,   172,   180,   188,   196,   204,   212,   220,   228,
     241,   250,   264,   273,   288,   297,   311,   318,   332,   338,
     345,   352,   368,   373,   377,   382,   387,   392,   408,   415,
     422,   429,   436,   443,   467,   475,   481,   488,   497,   498,
     501,   506,   507,   509,   517,   518,   521,   530,   539,   548,
     560,   571,   585,   607,   637,   671,   695,   723,   724,   729,
     730,   739,   749,   750,   753,   754,   757,   763,   769,   777,
     781,   787,   797,   808,   819
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SWQT_NUMBER", "SWQT_STRING",
  "SWQT_IDENTIFIER", "SWQT_IN", "SWQT_LIKE", "SWQT_ESCAPE", "SWQT_BETWEEN",
  "SWQT_NULL", "SWQT_IS", "SWQT_SELECT", "SWQT_LEFT", "SWQT_JOIN",
  "SWQT_WHERE", "SWQT_ON", "SWQT_ORDER", "SWQT_BY", "SWQT_FROM", "SWQT_AS",
  "SWQT_ASC", "SWQT_DESC", "SWQT_DISTINCT", "SWQT_CAST", "SWQT_UNION",
  "SWQT_ALL", "SWQT_LOGICAL_START", "SWQT_VALUE_START",
  "SWQT_SELECT_START", "SWQT_NOT", "SWQT_OR", "SWQT_AND", "'+'", "'-'",
  "'*'", "'/'", "'%'", "SWQT_UMINUS", "'('", "')'", "'='", "'<'", "'>'",
  "'!'", "','", "'.'", "$accept", "input", "logical_expr",
  "value_expr_list", "field_value", "value_expr", "type_def",
  "select_statement", "select_core", "opt_union_all", "union_all",
  "select_field_list", "column_spec", "opt_where", "opt_joins",
  "opt_order_by", "sort_spec_list", "sort_spec", "string_or_identifier",
  "table_def", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,    43,    45,    42,    47,    37,   288,    40,
      41,    61,    60,    62,    33,    44,    46
};
# endif

#define YYPACT_NINF -156

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-156)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     100,   214,   218,    -1,    10,  -156,  -156,   -30,  -156,   -26,
     214,   218,   214,    44,  -156,   151,   218,   257,   173,     3,
    -156,    12,  -156,   218,    23,   218,    44,  -156,    26,   112,
     214,   214,    13,   218,   218,    -4,    54,   218,   218,   218,
     218,   218,    31,    92,   165,     1,   237,   -14,    94,  -156,
     200,    37,    19,    28,    60,  -156,    -1,    32,   231,  -156,
     226,  -156,  -156,    57,  -156,   218,    46,   246,  -156,    81,
      55,   218,   218,   136,   136,  -156,  -156,  -156,   218,   218,
     257,   218,   218,   257,   218,   257,   218,   206,    -2,  -156,
      64,    97,    99,   102,   173,    12,  -156,  -156,  -156,   218,
      96,    72,   218,   218,  -156,   218,   130,   252,   257,   257,
     257,   257,   257,   257,   119,   104,  -156,    99,  -156,  -156,
    -156,    86,   145,   101,  -156,  -156,  -156,   120,   111,  -156,
     257,   257,   121,   218,   218,   134,   159,  -156,    99,  -156,
     127,   102,   167,   177,  -156,  -156,   257,   257,   170,    99,
     186,   102,   182,   214,   183,   -33,    99,  -156,  -156,   185,
     119,    44,   184,  -156,  -156,   202,  -156,   119,   162,   119,
     174,   172,   119,   115,  -156,   180,  -156,   119,   101,  -156,
    -156,   119,   101,  -156,  -156,  -156
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,    32,    33,    30,    36,     0,
       0,     0,     0,     2,    34,     0,     0,     3,     0,     0,
       4,    51,     1,     0,     0,     0,     7,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,     0,    61,
      58,     0,    54,     0,     0,    48,     0,     0,    29,    31,
       0,     8,    35,     6,     5,     0,    18,     0,    26,     0,
       0,     0,     0,    38,    39,    40,    41,    42,     0,     0,
       9,     0,     0,    12,     0,    13,     0,     0,     0,    57,
      30,    56,     0,     0,     0,    51,    53,    52,    43,     0,
       0,     0,     0,     0,    27,     0,    19,     0,    15,    16,
      14,    10,    17,    11,     0,     0,    62,     0,    80,    79,
      60,    80,    81,    69,    55,    49,    28,    45,     0,    22,
      20,    24,     0,     0,     0,     0,    63,    59,     0,    82,
       0,     0,    67,     0,    44,    23,    21,    25,    65,     0,
      83,     0,     0,     0,    72,     0,     0,    64,    84,     0,
       0,    68,     0,    50,    46,     0,    66,     0,     0,     0,
       0,     0,     0,    76,    73,    75,    47,     0,    69,    77,
      78,     0,    69,    70,    74,    71
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -156,  -156,   -10,   -46,   -47,     6,  -156,   171,   196,   131,
    -156,   137,  -156,  -156,  -155,  -156,    51,  -156,   -87,  -137
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,    13,    57,    14,    15,   128,    20,    21,    55,
      56,    51,    52,   154,   142,   163,   174,   175,   122,   123
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      26,    91,    28,    59,   152,   120,    68,   164,    17,    23,
      22,    18,   165,    25,   159,    18,    24,    27,    29,   101,
      63,    64,    46,   183,    50,    87,    69,   185,    59,    58,
     137,    60,    88,   116,     5,     6,     7,    54,    19,    66,
      67,     8,    86,    73,    74,    75,    76,    77,    80,    83,
      85,   150,    65,   126,   102,     9,    93,    30,    31,   132,
      70,    71,   157,    72,    94,    11,    61,   135,    95,   166,
      16,    58,    98,    78,    79,    30,    31,   106,   107,    37,
      38,    39,    40,    41,   108,   109,    96,   110,   111,    31,
     112,   104,   113,    58,   105,     5,     6,     7,    89,    90,
      50,   127,     8,   118,   119,    58,   121,   119,   130,   131,
      24,    58,   129,   168,   140,   141,     9,   117,    32,    33,
     171,    34,   173,    35,    90,   178,    11,     1,     2,     3,
     182,    16,   138,    81,   173,    82,   179,   180,   133,   146,
     147,   151,    36,   161,   136,    37,    38,    39,    40,    41,
     139,   144,    62,    42,    43,    44,    45,    32,    33,   143,
      34,   145,    35,    37,    38,    39,    40,    41,     5,     6,
       7,    39,    40,    41,   148,     8,     5,     6,    47,   149,
     155,    36,   153,     8,    37,    38,    39,    40,    41,     9,
     156,   158,    42,    43,    44,    45,    48,     9,   160,    11,
     162,   167,   169,   172,    16,   170,    84,    11,    49,     5,
       6,     7,    16,   177,   176,    53,     8,     5,     6,     7,
      92,     5,     6,     7,     8,   181,   125,    97,     8,   114,
       9,   124,   184,    37,    38,    39,    40,    41,     9,     0,
      11,   115,     9,     0,    10,    16,   100,     0,    11,     0,
       0,     0,    11,    12,     0,     0,     0,    16,     0,    37,
      38,    39,    40,    41,    37,    38,    39,    40,    41,     0,
      37,    38,    39,    40,    41,     0,    99,    62,   103,    37,
      38,    39,    40,    41,   134,    37,    38,    39,    40,    41,
      37,    38,    39,    40,    41
};

static const yytype_int16 yycheck[] =
{
      10,    48,    12,     5,   141,    92,    10,    40,     2,    39,
       0,    12,    45,    39,   151,    12,    46,    11,    12,    65,
      30,    31,    16,   178,    18,    39,    30,   182,     5,    23,
     117,    25,    46,    35,     3,     4,     5,    25,    39,    33,
      34,    10,    41,    37,    38,    39,    40,    41,    42,    43,
      44,   138,    39,    99,     8,    24,    19,    31,    32,   105,
       6,     7,   149,     9,    45,    34,    40,   114,    40,   156,
      39,    65,    40,    42,    43,    31,    32,    71,    72,    33,
      34,    35,    36,    37,    78,    79,    26,    81,    82,    32,
      84,    10,    86,    87,    39,     3,     4,     5,     4,     5,
      94,     5,    10,     4,     5,    99,     4,     5,   102,   103,
      46,   105,    40,   160,    13,    14,    24,    20,     6,     7,
     167,     9,   169,    11,     5,   172,    34,    27,    28,    29,
     177,    39,    46,    41,   181,    43,    21,    22,     8,   133,
     134,    14,    30,   153,    40,    33,    34,    35,    36,    37,
       5,    40,    40,    41,    42,    43,    44,     6,     7,    39,
       9,    40,    11,    33,    34,    35,    36,    37,     3,     4,
       5,    35,    36,    37,    40,    10,     3,     4,     5,    20,
       3,    30,    15,    10,    33,    34,    35,    36,    37,    24,
      20,     5,    41,    42,    43,    44,    23,    24,    16,    34,
      17,    16,    18,    41,    39,     3,    41,    34,    35,     3,
       4,     5,    39,    41,    40,    19,    10,     3,     4,     5,
      20,     3,     4,     5,    10,    45,    95,    56,    10,    23,
      24,    94,   181,    33,    34,    35,    36,    37,    24,    -1,
      34,    35,    24,    -1,    30,    39,    20,    -1,    34,    -1,
      -1,    -1,    34,    39,    -1,    -1,    -1,    39,    -1,    33,
      34,    35,    36,    37,    33,    34,    35,    36,    37,    -1,
      33,    34,    35,    36,    37,    -1,    45,    40,    32,    33,
      34,    35,    36,    37,    32,    33,    34,    35,    36,    37,
      33,    34,    35,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    27,    28,    29,    48,     3,     4,     5,    10,    24,
      30,    34,    39,    49,    51,    52,    39,    52,    12,    39,
      54,    55,     0,    39,    46,    39,    49,    52,    49,    52,
      31,    32,     6,     7,     9,    11,    30,    33,    34,    35,
      36,    37,    41,    42,    43,    44,    52,     5,    23,    35,
      52,    58,    59,    55,    25,    56,    57,    50,    52,     5,
      52,    40,    40,    49,    49,    39,    52,    52,    10,    30,
       6,     7,     9,    52,    52,    52,    52,    52,    42,    43,
      52,    41,    43,    52,    41,    52,    41,    39,    46,     4,
       5,    51,    20,    19,    45,    40,    26,    54,    40,    45,
      20,    50,     8,    32,    10,    39,    52,    52,    52,    52,
      52,    52,    52,    52,    23,    35,    35,    20,     4,     5,
      65,     4,    65,    66,    58,    56,    50,     5,    53,    40,
      52,    52,    50,     8,    32,    51,    40,    65,    46,     5,
      13,    14,    61,    39,    40,    40,    52,    52,    40,    20,
      65,    14,    66,    15,    60,     3,    20,    65,     5,    66,
      16,    49,    17,    62,    40,    45,    65,    16,    51,    18,
       3,    51,    41,    51,    63,    64,    40,    41,    51,    21,
      22,    45,    51,    61,    63,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    48,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    50,    50,
      51,    51,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    53,    53,    53,    54,    54,
      55,    56,    56,    57,    58,    58,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    60,    60,    61,
      61,    61,    62,    62,    63,    63,    64,    64,    64,    65,
      65,    66,    66,    66,    66
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     3,     3,     2,     3,     3,
       4,     4,     3,     3,     4,     4,     4,     4,     3,     4,
       5,     6,     5,     6,     5,     6,     3,     4,     3,     1,
       1,     3,     1,     1,     1,     3,     1,     2,     3,     3,
       3,     3,     3,     4,     6,     1,     4,     6,     2,     4,
       7,     0,     2,     2,     1,     3,     2,     2,     1,     4,
       3,     1,     3,     4,     6,     5,     7,     0,     2,     0,
       7,     8,     0,     3,     3,     1,     1,     2,     2,     1,
       1,     1,     2,     3,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (context, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, context); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, swq_parse_context *context)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (context);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, swq_parse_context *context)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, context);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, swq_parse_context *context)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , context);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, context); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, swq_parse_context *context)
{
  YYUSE (yyvaluep);
  YYUSE (context);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* SWQT_NUMBER  */
#line 98 "swq_parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep)); }
#line 1179 "swq_parser.cpp" /* yacc.c:1257  */
        break;

    case 4: /* SWQT_STRING  */
#line 98 "swq_parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep)); }
#line 1185 "swq_parser.cpp" /* yacc.c:1257  */
        break;

    case 5: /* SWQT_IDENTIFIER  */
#line 98 "swq_parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep)); }
#line 1191 "swq_parser.cpp" /* yacc.c:1257  */
        break;

    case 49: /* logical_expr  */
#line 99 "swq_parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep)); }
#line 1197 "swq_parser.cpp" /* yacc.c:1257  */
        break;

    case 50: /* value_expr_list  */
#line 99 "swq_parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep)); }
#line 1203 "swq_parser.cpp" /* yacc.c:1257  */
        break;

    case 51: /* field_value  */
#line 99 "swq_parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep)); }
#line 1209 "swq_parser.cpp" /* yacc.c:1257  */
        break;

    case 52: /* value_expr  */
#line 99 "swq_parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep)); }
#line 1215 "swq_parser.cpp" /* yacc.c:1257  */
        break;

    case 53: /* type_def  */
#line 99 "swq_parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep)); }
#line 1221 "swq_parser.cpp" /* yacc.c:1257  */
        break;

    case 65: /* string_or_identifier  */
#line 99 "swq_parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep)); }
#line 1227 "swq_parser.cpp" /* yacc.c:1257  */
        break;

    case 66: /* table_def  */
#line 99 "swq_parser.y" /* yacc.c:1257  */
      { delete ((*yyvaluep)); }
#line 1233 "swq_parser.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (swq_parse_context *context)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH]; /* workaround bug with gcc 4.1 -O2 */ memset(yyssa, 0, sizeof(yyssa));
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
      yychar = yylex (&yylval, context);
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 105 "swq_parser.y" /* yacc.c:1646  */
    {
			context->poRoot = (yyvsp[0]);
		}
#line 1503 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 110 "swq_parser.y" /* yacc.c:1646  */
    {
			context->poRoot = (yyvsp[0]);
		}
#line 1511 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 115 "swq_parser.y" /* yacc.c:1646  */
    {
			context->poRoot = (yyvsp[0]);
		}
#line 1519 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 121 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = new swq_expr_node( SWQ_AND );
			(yyval)->field_type = SWQ_BOOLEAN;
			(yyval)->PushSubExpression( (yyvsp[-2]) );
			(yyval)->PushSubExpression( (yyvsp[0]) );
		     }
#line 1530 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 129 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = new swq_expr_node( SWQ_OR );
			(yyval)->field_type = SWQ_BOOLEAN;
			(yyval)->PushSubExpression( (yyvsp[-2]) );
			(yyval)->PushSubExpression( (yyvsp[0]) );
		     }
#line 1541 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 137 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = new swq_expr_node( SWQ_NOT );
			(yyval)->field_type = SWQ_BOOLEAN;
			(yyval)->PushSubExpression( (yyvsp[0]) );
		     }
#line 1551 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 144 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[-1]);
		     }
#line 1559 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 149 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = new swq_expr_node( SWQ_EQ );
			(yyval)->field_type = SWQ_BOOLEAN;
			(yyval)->PushSubExpression( (yyvsp[-2]) );
			(yyval)->PushSubExpression( (yyvsp[0]) );
		     }
#line 1570 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 157 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = new swq_expr_node( SWQ_NE );
			(yyval)->field_type = SWQ_BOOLEAN;
			(yyval)->PushSubExpression( (yyvsp[-3]) );
			(yyval)->PushSubExpression( (yyvsp[0]) );
		     }
#line 1581 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 165 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = new swq_expr_node( SWQ_NE );
			(yyval)->field_type = SWQ_BOOLEAN;
			(yyval)->PushSubExpression( (yyvsp[-3]) );
			(yyval)->PushSubExpression( (yyvsp[0]) );
		     }
#line 1592 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 173 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = new swq_expr_node( SWQ_LT );
			(yyval)->field_type = SWQ_BOOLEAN;
			(yyval)->PushSubExpression( (yyvsp[-2]) );
			(yyval)->PushSubExpression( (yyvsp[0]) );
		     }
#line 1603 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 181 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = new swq_expr_node( SWQ_GT );
			(yyval)->field_type = SWQ_BOOLEAN;
			(yyval)->PushSubExpression( (yyvsp[-2]) );
			(yyval)->PushSubExpression( (yyvsp[0]) );
		     }
#line 1614 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 189 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = new swq_expr_node( SWQ_LE );
			(yyval)->field_type = SWQ_BOOLEAN;
			(yyval)->PushSubExpression( (yyvsp[-3]) );
			(yyval)->PushSubExpression( (yyvsp[0]) );
		     }
#line 1625 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 197 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = new swq_expr_node( SWQ_LE );
			(yyval)->field_type = SWQ_BOOLEAN;
			(yyval)->PushSubExpression( (yyvsp[-3]) );
			(yyval)->PushSubExpression( (yyvsp[0]) );
		     }
#line 1636 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 205 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = new swq_expr_node( SWQ_LE );
			(yyval)->field_type = SWQ_BOOLEAN;
			(yyval)->PushSubExpression( (yyvsp[-3]) );
			(yyval)->PushSubExpression( (yyvsp[0]) );
		     }
#line 1647 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 213 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = new swq_expr_node( SWQ_GE );
			(yyval)->field_type = SWQ_BOOLEAN;
			(yyval)->PushSubExpression( (yyvsp[-3]) );
			(yyval)->PushSubExpression( (yyvsp[0]) );
		     }
#line 1658 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 221 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = new swq_expr_node( SWQ_LIKE );
			(yyval)->field_type = SWQ_BOOLEAN;
			(yyval)->PushSubExpression( (yyvsp[-2]) );
			(yyval)->PushSubExpression( (yyvsp[0]) );
		     }
#line 1669 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 229 "swq_parser.y" /* yacc.c:1646  */
    {
		        swq_expr_node *like;
			like = new swq_expr_node( SWQ_LIKE );
			like->field_type = SWQ_BOOLEAN;
			like->PushSubExpression( (yyvsp[-3]) );
			like->PushSubExpression( (yyvsp[0]) );

			(yyval) = new swq_expr_node( SWQ_NOT );
			(yyval)->field_type = SWQ_BOOLEAN;
			(yyval)->PushSubExpression( like );
		     }
#line 1685 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 242 "swq_parser.y" /* yacc.c:1646  */
    {
            (yyval) = new swq_expr_node( SWQ_LIKE );
            (yyval)->field_type = SWQ_BOOLEAN;
            (yyval)->PushSubExpression( (yyvsp[-4]) );
            (yyval)->PushSubExpression( (yyvsp[-2]) );
            (yyval)->PushSubExpression( (yyvsp[0]) );
       }
#line 1697 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 251 "swq_parser.y" /* yacc.c:1646  */
    {
                swq_expr_node *like;
            like = new swq_expr_node( SWQ_LIKE );
            like->field_type = SWQ_BOOLEAN;
            like->PushSubExpression( (yyvsp[-5]) );
            like->PushSubExpression( (yyvsp[-2]) );
            like->PushSubExpression( (yyvsp[0]) );

            (yyval) = new swq_expr_node( SWQ_NOT );
            (yyval)->field_type = SWQ_BOOLEAN;
            (yyval)->PushSubExpression( like );
      }
#line 1714 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 265 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[-1]);
			(yyval)->field_type = SWQ_BOOLEAN;
			(yyval)->nOperation = SWQ_IN;
			(yyval)->PushSubExpression( (yyvsp[-4]) );
			(yyval)->ReverseSubExpressions();
		     }
#line 1726 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 274 "swq_parser.y" /* yacc.c:1646  */
    {
		        swq_expr_node *in;

			in = (yyvsp[-1]);
			in->field_type = SWQ_BOOLEAN;
			in->nOperation = SWQ_IN;
			in->PushSubExpression( (yyvsp[-5]) );
			in->ReverseSubExpressions();
			
			(yyval) = new swq_expr_node( SWQ_NOT );
			(yyval)->field_type = SWQ_BOOLEAN;
			(yyval)->PushSubExpression( in );
		     }
#line 1744 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 289 "swq_parser.y" /* yacc.c:1646  */
    {
            (yyval) = new swq_expr_node( SWQ_BETWEEN );
            (yyval)->field_type = SWQ_BOOLEAN;
            (yyval)->PushSubExpression( (yyvsp[-4]) );
            (yyval)->PushSubExpression( (yyvsp[-2]) );
            (yyval)->PushSubExpression( (yyvsp[0]) );
             }
#line 1756 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 298 "swq_parser.y" /* yacc.c:1646  */
    {
            swq_expr_node *between;
            between = new swq_expr_node( SWQ_BETWEEN );
            between->field_type = SWQ_BOOLEAN;
            between->PushSubExpression( (yyvsp[-5]) );
            between->PushSubExpression( (yyvsp[-2]) );
            between->PushSubExpression( (yyvsp[0]) );

            (yyval) = new swq_expr_node( SWQ_NOT );
            (yyval)->field_type = SWQ_BOOLEAN;
            (yyval)->PushSubExpression( between );
             }
#line 1773 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 312 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = new swq_expr_node( SWQ_ISNULL );
			(yyval)->field_type = SWQ_BOOLEAN;
			(yyval)->PushSubExpression( (yyvsp[-2]) );
		     }
#line 1783 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 319 "swq_parser.y" /* yacc.c:1646  */
    {
		        swq_expr_node *isnull;

			isnull = new swq_expr_node( SWQ_ISNULL );
			isnull->field_type = SWQ_BOOLEAN;
			isnull->PushSubExpression( (yyvsp[-3]) );

			(yyval) = new swq_expr_node( SWQ_NOT );
			(yyval)->field_type = SWQ_BOOLEAN;
			(yyval)->PushSubExpression( isnull );
		     }
#line 1799 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 333 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[0]);
			(yyvsp[0])->PushSubExpression( (yyvsp[-2]) );
		}
#line 1808 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 339 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = new swq_expr_node( SWQ_UNKNOWN ); /* list */
			(yyval)->PushSubExpression( (yyvsp[0]) );
		}
#line 1817 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 346 "swq_parser.y" /* yacc.c:1646  */
    {
		        (yyval) = (yyvsp[0]);  // validation deferred.
			(yyval)->eNodeType = SNT_COLUMN;
			(yyval)->field_index = (yyval)->table_index = -1;
		}
#line 1827 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 353 "swq_parser.y" /* yacc.c:1646  */
    {
		        (yyval) = (yyvsp[-2]);  // validation deferred.
			(yyval)->eNodeType = SNT_COLUMN;
			(yyval)->field_index = (yyval)->table_index = -1;
			(yyval)->string_value = (char *) 
                            CPLRealloc( (yyval)->string_value, 
                                        strlen((yyval)->string_value) 
                                        + strlen((yyvsp[0])->string_value) + 2 );
			strcat( (yyval)->string_value, "." );
			strcat( (yyval)->string_value, (yyvsp[0])->string_value );
			delete (yyvsp[0]);
			(yyvsp[0]) = NULL;
		}
#line 1845 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 369 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[0]);
		}
#line 1853 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 374 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[0]);
		}
#line 1861 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 378 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[0]);
		}
#line 1869 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 383 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = (yyvsp[-1]);
		}
#line 1877 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 388 "swq_parser.y" /* yacc.c:1646  */
    {
            (yyval) = new swq_expr_node((const char*)NULL);
        }
#line 1885 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 393 "swq_parser.y" /* yacc.c:1646  */
    {
            if ((yyvsp[0])->eNodeType == SNT_CONSTANT)
            {
                (yyval) = (yyvsp[0]);
                (yyval)->int_value *= -1;
                (yyval)->float_value *= -1;
            }
            else
            {
                (yyval) = new swq_expr_node( SWQ_MULTIPLY );
                (yyval)->PushSubExpression( new swq_expr_node(-1) );
                (yyval)->PushSubExpression( (yyvsp[0]) );
            }
        }
#line 1904 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 409 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = new swq_expr_node( SWQ_ADD );
			(yyval)->PushSubExpression( (yyvsp[-2]) );
			(yyval)->PushSubExpression( (yyvsp[0]) );
		}
#line 1914 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 416 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = new swq_expr_node( SWQ_SUBTRACT );
			(yyval)->PushSubExpression( (yyvsp[-2]) );
			(yyval)->PushSubExpression( (yyvsp[0]) );
		}
#line 1924 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 423 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = new swq_expr_node( SWQ_MULTIPLY );
			(yyval)->PushSubExpression( (yyvsp[-2]) );
			(yyval)->PushSubExpression( (yyvsp[0]) );
		}
#line 1934 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 430 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = new swq_expr_node( SWQ_DIVIDE );
			(yyval)->PushSubExpression( (yyvsp[-2]) );
			(yyval)->PushSubExpression( (yyvsp[0]) );
		}
#line 1944 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 437 "swq_parser.y" /* yacc.c:1646  */
    {
			(yyval) = new swq_expr_node( SWQ_MODULUS );
			(yyval)->PushSubExpression( (yyvsp[-2]) );
			(yyval)->PushSubExpression( (yyvsp[0]) );
		}
#line 1954 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 444 "swq_parser.y" /* yacc.c:1646  */
    {
		    const swq_operation *poOp = 
                      swq_op_registrar::GetOperator( (yyvsp[-3])->string_value );

		    if( poOp == NULL )
		    {
		        CPLError( CE_Failure, CPLE_AppDefined, 
                                  "Undefined function '%s' used.",
                                  (yyvsp[-3])->string_value );
                delete (yyvsp[-3]);
                delete (yyvsp[-1]);
		        YYERROR;
		    }
		    else
		    {
			(yyval) = (yyvsp[-1]);
                        (yyval)->eNodeType = SNT_OPERATION;
                        (yyval)->nOperation = poOp->eOperation;
			(yyval)->ReverseSubExpressions();
			delete (yyvsp[-3]);
		    }
		}
#line 1981 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 468 "swq_parser.y" /* yacc.c:1646  */
    {
		    (yyval) = (yyvsp[-1]);
		    (yyval)->PushSubExpression( (yyvsp[-3]) );
		    (yyval)->ReverseSubExpressions();
		}
#line 1991 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 476 "swq_parser.y" /* yacc.c:1646  */
    {
	    (yyval) = new swq_expr_node( SWQ_CAST );
	    (yyval)->PushSubExpression( (yyvsp[0]) );
	}
#line 2000 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 482 "swq_parser.y" /* yacc.c:1646  */
    {
	    (yyval) = new swq_expr_node( SWQ_CAST );
	    (yyval)->PushSubExpression( (yyvsp[-1]) );
	    (yyval)->PushSubExpression( (yyvsp[-3]) );
	}
#line 2010 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 489 "swq_parser.y" /* yacc.c:1646  */
    {
	    (yyval) = new swq_expr_node( SWQ_CAST );
	    (yyval)->PushSubExpression( (yyvsp[-1]) );
	    (yyval)->PushSubExpression( (yyvsp[-3]) );
	    (yyval)->PushSubExpression( (yyvsp[-5]) );
	}
#line 2021 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 502 "swq_parser.y" /* yacc.c:1646  */
    {
        delete (yyvsp[-3]);
    }
#line 2029 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 510 "swq_parser.y" /* yacc.c:1646  */
    {
        swq_select* poNewSelect = new swq_select();
        context->poCurSelect->PushUnionAll(poNewSelect);
        context->poCurSelect = poNewSelect;
    }
#line 2039 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 522 "swq_parser.y" /* yacc.c:1646  */
    {
		if( !context->poCurSelect->PushField( (yyvsp[0]), NULL, TRUE ) )
        {
            delete (yyvsp[0]);
		    YYERROR;
        }
	    }
#line 2051 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 531 "swq_parser.y" /* yacc.c:1646  */
    {
        if( !context->poCurSelect->PushField( (yyvsp[0]), NULL, TRUE ) )
        {
            delete (yyvsp[0]);
            YYERROR;
        }
        }
#line 2063 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 540 "swq_parser.y" /* yacc.c:1646  */
    {
		if( !context->poCurSelect->PushField( (yyvsp[0]) ) )
        {
            delete (yyvsp[0]);
		    YYERROR;
        }
	    }
#line 2075 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 549 "swq_parser.y" /* yacc.c:1646  */
    {
		if( !context->poCurSelect->PushField( (yyvsp[-2]), (yyvsp[0])->string_value, TRUE ))
        {
            delete (yyvsp[-2]);
            delete (yyvsp[0]);
		    YYERROR;
        }

		delete (yyvsp[0]);
	    }
#line 2090 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 561 "swq_parser.y" /* yacc.c:1646  */
    {
		if( !context->poCurSelect->PushField( (yyvsp[-2]), (yyvsp[0])->string_value ) )
        {
            delete (yyvsp[-2]);
            delete (yyvsp[0]);
		    YYERROR;
        }
		delete (yyvsp[0]);
	    }
#line 2104 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 572 "swq_parser.y" /* yacc.c:1646  */
    {
	        swq_expr_node *poNode = new swq_expr_node();
		poNode->eNodeType = SNT_COLUMN;
		poNode->string_value = CPLStrdup( "*" );
		poNode->table_index = poNode->field_index = -1;

		if( !context->poCurSelect->PushField( poNode ) )
        {
            delete poNode;
		    YYERROR;
        }
	    }
#line 2121 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 586 "swq_parser.y" /* yacc.c:1646  */
    {
                CPLString osQualifiedField;

                osQualifiedField = (yyvsp[-2])->string_value;
                osQualifiedField += ".*";

                delete (yyvsp[-2]);
                (yyvsp[-2]) = NULL;

	        swq_expr_node *poNode = new swq_expr_node();
		poNode->eNodeType = SNT_COLUMN;
		poNode->string_value = CPLStrdup( osQualifiedField );
		poNode->table_index = poNode->field_index = -1;

		if( !context->poCurSelect->PushField( poNode ) )
        {
            delete poNode;
		    YYERROR;
        }
	    }
#line 2146 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 608 "swq_parser.y" /* yacc.c:1646  */
    {
	        // special case for COUNT(*), confirm it.
		if( !EQUAL((yyvsp[-3])->string_value,"COUNT") )
		{
		    CPLError( CE_Failure, CPLE_AppDefined,
		    	      "Syntax Error with %s(*).", 
			      (yyvsp[-3])->string_value );
            delete (yyvsp[-3]);
	            YYERROR;
		}

        delete (yyvsp[-3]);
        (yyvsp[-3]) = NULL;
                
		swq_expr_node *poNode = new swq_expr_node();
		poNode->eNodeType = SNT_COLUMN;
		poNode->string_value = CPLStrdup( "*" );
		poNode->table_index = poNode->field_index = -1;

		swq_expr_node *count = new swq_expr_node( (swq_op)SWQ_COUNT );
		count->PushSubExpression( poNode );

		if( !context->poCurSelect->PushField( count ) )
        {
            delete count;
		    YYERROR;
        }
	    }
#line 2179 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 638 "swq_parser.y" /* yacc.c:1646  */
    {
	        // special case for COUNT(*), confirm it.
		if( !EQUAL((yyvsp[-5])->string_value,"COUNT") )
		{
		    CPLError( CE_Failure, CPLE_AppDefined,
		    	      "Syntax Error with %s(*).", 
			      (yyvsp[-5])->string_value );
            delete (yyvsp[-5]);
            delete (yyvsp[0]);
	            YYERROR;
		}

        delete (yyvsp[-5]);
        (yyvsp[-5]) = NULL;

		swq_expr_node *poNode = new swq_expr_node();
		poNode->eNodeType = SNT_COLUMN;
		poNode->string_value = CPLStrdup( "*" );
		poNode->table_index = poNode->field_index = -1;

		swq_expr_node *count = new swq_expr_node( (swq_op)SWQ_COUNT );
		count->PushSubExpression( poNode );

		if( !context->poCurSelect->PushField( count, (yyvsp[0])->string_value ) )
        {
            delete count;
            delete (yyvsp[0]);
		    YYERROR;
        }

                delete (yyvsp[0]);
	    }
#line 2216 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 672 "swq_parser.y" /* yacc.c:1646  */
    {
	        // special case for COUNT(DISTINCT x), confirm it.
		if( !EQUAL((yyvsp[-4])->string_value,"COUNT") )
		{
		    CPLError( CE_Failure, CPLE_AppDefined,
		    	      "DISTINCT keyword can only be used in COUNT() operator." );
            delete (yyvsp[-4]);
            delete (yyvsp[-1]);
	            YYERROR;
		}

                delete (yyvsp[-4]);
                
                swq_expr_node *count = new swq_expr_node( SWQ_COUNT );
                count->PushSubExpression( (yyvsp[-1]) );
                
		if( !context->poCurSelect->PushField( count, NULL, TRUE ) )
        {
            delete count;
		    YYERROR;
        }
	    }
#line 2243 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 696 "swq_parser.y" /* yacc.c:1646  */
    {
	        // special case for COUNT(DISTINCT x), confirm it.
		if( !EQUAL((yyvsp[-6])->string_value,"COUNT") )
		{
		    CPLError( CE_Failure, CPLE_AppDefined,
		    	      "DISTINCT keyword can only be used in COUNT() operator." );
            delete (yyvsp[-6]);
            delete (yyvsp[-3]);
            delete (yyvsp[0]);
	            YYERROR;
		}

                swq_expr_node *count = new swq_expr_node( SWQ_COUNT );
                count->PushSubExpression( (yyvsp[-3]) );
                
		if( !context->poCurSelect->PushField( count, (yyvsp[0])->string_value, TRUE ) )
        {
            delete (yyvsp[-6]);
            delete count;
            delete (yyvsp[0]);
		    YYERROR;
        }

                delete (yyvsp[-6]);
                delete (yyvsp[0]);
	    }
#line 2274 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 725 "swq_parser.y" /* yacc.c:1646  */
    {	     
	    	 context->poCurSelect->where_expr = (yyvsp[0]);
	    }
#line 2282 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 731 "swq_parser.y" /* yacc.c:1646  */
    {
	        context->poCurSelect->PushJoin( (yyvsp[-5])->int_value,
					     (yyvsp[-3])->string_value, 
					     (yyvsp[-1])->string_value );
                delete (yyvsp[-5]);
	        delete (yyvsp[-3]);
	        delete (yyvsp[-1]);
	    }
#line 2295 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 740 "swq_parser.y" /* yacc.c:1646  */
    {
	        context->poCurSelect->PushJoin( (yyvsp[-5])->int_value,
					     (yyvsp[-3])->string_value, 
					     (yyvsp[-1])->string_value );
                delete (yyvsp[-5]);
	        delete (yyvsp[-3]);
	        delete (yyvsp[-1]);
	    }
#line 2308 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 758 "swq_parser.y" /* yacc.c:1646  */
    {
                context->poCurSelect->PushOrderBy( (yyvsp[0])->string_value, TRUE );
                delete (yyvsp[0]);
                (yyvsp[0]) = NULL;
            }
#line 2318 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 764 "swq_parser.y" /* yacc.c:1646  */
    {
                context->poCurSelect->PushOrderBy( (yyvsp[-1])->string_value, TRUE );
                delete (yyvsp[-1]);
                (yyvsp[-1]) = NULL;
            }
#line 2328 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 770 "swq_parser.y" /* yacc.c:1646  */
    {
                context->poCurSelect->PushOrderBy( (yyvsp[-1])->string_value, FALSE );
                delete (yyvsp[-1]);
                (yyvsp[-1]) = NULL;
            }
#line 2338 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 778 "swq_parser.y" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2346 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 782 "swq_parser.y" /* yacc.c:1646  */
    {
            (yyval) = (yyvsp[0]);
        }
#line 2354 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 788 "swq_parser.y" /* yacc.c:1646  */
    {
	    int iTable;
	    iTable =context->poCurSelect->PushTableDef( NULL, (yyvsp[0])->string_value,
	    	   				     	   NULL );
	    delete (yyvsp[0]);

	    (yyval) = new swq_expr_node( iTable );
	}
#line 2367 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 798 "swq_parser.y" /* yacc.c:1646  */
    {
	    int iTable;
	    iTable = context->poCurSelect->PushTableDef( NULL, (yyvsp[-1])->string_value,
	    					      (yyvsp[0])->string_value );
	    delete (yyvsp[-1]);
	    delete (yyvsp[0]);

	    (yyval) = new swq_expr_node( iTable );
	}
#line 2381 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 809 "swq_parser.y" /* yacc.c:1646  */
    {
	    int iTable;
	    iTable = context->poCurSelect->PushTableDef( (yyvsp[-2])->string_value,
	    					      (yyvsp[0])->string_value, NULL );
	    delete (yyvsp[-2]);
	    delete (yyvsp[0]);

	    (yyval) = new swq_expr_node( iTable );
	}
#line 2395 "swq_parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 820 "swq_parser.y" /* yacc.c:1646  */
    {
	    int iTable;
	    iTable = context->poCurSelect->PushTableDef( (yyvsp[-3])->string_value,
	    				     	      (yyvsp[-1])->string_value, 
					     	      (yyvsp[0])->string_value );
	    delete (yyvsp[-3]);
	    delete (yyvsp[-1]);
	    delete (yyvsp[0]);

	    (yyval) = new swq_expr_node( iTable );
	}
#line 2411 "swq_parser.cpp" /* yacc.c:1646  */
    break;


#line 2415 "swq_parser.cpp" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (context, YY_("syntax error"));
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
        yyerror (context, yymsgp);
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
                      yytoken, &yylval, context);
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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
                  yystos[yystate], yyvsp, context);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (context, YY_("memory exhausted"));
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
                  yytoken, &yylval, context);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, context);
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
  return yyresult;
}
