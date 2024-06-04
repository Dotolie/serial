/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 21 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"


#include "ac_cfg.h"

#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <errno.h>

#include "avrdude.h"
#include "libavrdude.h"
#include "config.h"
#include "developer_opts.h"

#if defined(WIN32)
#define strtok_r( _s, _sep, _lasts ) \
    ( *(_lasts) = strtok( (_s), (_sep) ) )
#endif

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

int yylex(void);
int yyerror(char * errmsg, ...);
int yywarning(char * errmsg, ...);

static int clear_pin(int pinfunc);
static int assign_pin(int pinfunc, TOKEN *v, int invert);
static int assign_pin_list(int invert);
static int which_opcode(TOKEN * opcode);
static int parse_cmdbits(OPCODE * op, int opnum);

static int pin_name;

#line 105 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_HOME_YWKIM_AVR_SRC_AVRDUDE_7_3_BUILD_LINUX_CONFIG_GRAM_H_INCLUDED
# define YY_YY_HOME_YWKIM_AVR_SRC_AVRDUDE_7_3_BUILD_LINUX_CONFIG_GRAM_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    K_NULL = 258,
    K_READ = 259,
    K_WRITE = 260,
    K_READ_LO = 261,
    K_READ_HI = 262,
    K_WRITE_LO = 263,
    K_WRITE_HI = 264,
    K_LOADPAGE_LO = 265,
    K_LOADPAGE_HI = 266,
    K_LOAD_EXT_ADDR = 267,
    K_WRITEPAGE = 268,
    K_CHIP_ERASE = 269,
    K_PGM_ENABLE = 270,
    K_MEMORY = 271,
    K_PAGE_SIZE = 272,
    K_ALIAS = 273,
    K_ALLOW_SUBSHELLS = 274,
    K_AVRDUDE_CONF_VERSION = 275,
    K_BUFF = 276,
    K_CONNTYPE = 277,
    K_DEDICATED = 278,
    K_DEFAULT_BAUDRATE = 279,
    K_DEFAULT_BITCLOCK = 280,
    K_DEFAULT_PARALLEL = 281,
    K_DEFAULT_PROGRAMMER = 282,
    K_DEFAULT_SERIAL = 283,
    K_DEFAULT_SPI = 284,
    K_DEFAULT_LINUXGPIO = 285,
    K_HVUPDI_SUPPORT = 286,
    K_DEVICECODE = 287,
    K_EEPROM = 288,
    K_ERRLED = 289,
    K_FLASH = 290,
    K_ID = 291,
    K_IO = 292,
    K_LINUXGPIO = 293,
    K_LOADPAGE = 294,
    K_SDI = 295,
    K_SDO = 296,
    K_PARALLEL = 297,
    K_PARENT = 298,
    K_PART = 299,
    K_PGMLED = 300,
    K_PROGRAMMER = 301,
    K_RDYLED = 302,
    K_READBACK = 303,
    K_READMEM = 304,
    K_RESET = 305,
    K_RETRY_PULSE = 306,
    K_SERIAL = 307,
    K_SPI = 308,
    K_SCK = 309,
    K_SIGNATURE = 310,
    K_SIZE = 311,
    K_TCK = 312,
    K_TDI = 313,
    K_TDO = 314,
    K_TMS = 315,
    K_USB = 316,
    K_USBPID = 317,
    K_TYPE = 318,
    K_VARIANTS = 319,
    K_VCC = 320,
    K_VFYLED = 321,
    K_PP_CONTROLSTACK = 322,
    K_HVSP_CONTROLSTACK = 323,
    K_ALLOWFULLPAGEBITSTREAM = 324,
    K_ENABLEPAGEPROGRAMMING = 325,
    K_HAS_JTAG = 326,
    K_HAS_DW = 327,
    K_HAS_PDI = 328,
    K_HAS_UPDI = 329,
    K_HAS_TPI = 330,
    K_IS_AT90S1200 = 331,
    K_IS_AVR32 = 332,
    K_FLASH_INSTR = 333,
    K_EEPROM_INSTR = 334,
    TKN_COMMA = 335,
    TKN_EQUAL = 336,
    TKN_SEMI = 337,
    TKN_LEFT_PAREN = 338,
    TKN_RIGHT_PAREN = 339,
    TKN_NUMBER = 340,
    TKN_NUMBER_REAL = 341,
    TKN_STRING = 342,
    TKN_COMPONENT = 343,
    OP_OR = 344,
    OP_XOR = 345,
    OP_AND = 346,
    OP_PLUS = 347,
    OP_MINUS = 348,
    OP_TIMES = 349,
    OP_DIVIDE = 350,
    OP_MODULO = 351,
    OP_TILDE = 352,
    UNARY = 353
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_YWKIM_AVR_SRC_AVRDUDE_7_3_BUILD_LINUX_CONFIG_GRAM_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  30
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   381

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  164
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  328

#define YYUNDEFTOK  2
#define YYMAXUTOK   353


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   172,   172,   178,   184,   184,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   203,
     204,   208,   209,   214,   216,   218,   223,   228,   233,   238,
     243,   248,   253,   258,   266,   300,   306,   325,   389,   395,
     415,   416,   421,   422,   426,   427,   431,   435,   444,   446,
     448,   450,   452,   456,   460,   470,   478,   482,   483,   484,
     485,   486,   490,   504,   515,   519,   533,   544,   546,   550,
     552,   556,   558,   562,   564,   569,   571,   575,   575,   576,
     576,   577,   577,   578,   578,   579,   579,   580,   580,   581,
     581,   582,   582,   583,   583,   584,   584,   585,   585,   586,
     586,   587,   587,   588,   588,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   608,   609,   614,
     614,   618,   618,   622,   626,   632,   639,   657,   664,   675,
     682,   713,   720,   751,   758,   788,   794,   824,   830,   840,
     850,   860,   870,   880,   890,   905,   915,   930,   945,   960,
     984,  1000,   999,  1033,  1045,  1065,  1081,  1082,  1083,  1088,
    1093,  1103,  1111,  1131,  1146
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "K_NULL", "K_READ", "K_WRITE",
  "K_READ_LO", "K_READ_HI", "K_WRITE_LO", "K_WRITE_HI", "K_LOADPAGE_LO",
  "K_LOADPAGE_HI", "K_LOAD_EXT_ADDR", "K_WRITEPAGE", "K_CHIP_ERASE",
  "K_PGM_ENABLE", "K_MEMORY", "K_PAGE_SIZE", "K_ALIAS",
  "K_ALLOW_SUBSHELLS", "K_AVRDUDE_CONF_VERSION", "K_BUFF", "K_CONNTYPE",
  "K_DEDICATED", "K_DEFAULT_BAUDRATE", "K_DEFAULT_BITCLOCK",
  "K_DEFAULT_PARALLEL", "K_DEFAULT_PROGRAMMER", "K_DEFAULT_SERIAL",
  "K_DEFAULT_SPI", "K_DEFAULT_LINUXGPIO", "K_HVUPDI_SUPPORT",
  "K_DEVICECODE", "K_EEPROM", "K_ERRLED", "K_FLASH", "K_ID", "K_IO",
  "K_LINUXGPIO", "K_LOADPAGE", "K_SDI", "K_SDO", "K_PARALLEL", "K_PARENT",
  "K_PART", "K_PGMLED", "K_PROGRAMMER", "K_RDYLED", "K_READBACK",
  "K_READMEM", "K_RESET", "K_RETRY_PULSE", "K_SERIAL", "K_SPI", "K_SCK",
  "K_SIGNATURE", "K_SIZE", "K_TCK", "K_TDI", "K_TDO", "K_TMS", "K_USB",
  "K_USBPID", "K_TYPE", "K_VARIANTS", "K_VCC", "K_VFYLED",
  "K_PP_CONTROLSTACK", "K_HVSP_CONTROLSTACK", "K_ALLOWFULLPAGEBITSTREAM",
  "K_ENABLEPAGEPROGRAMMING", "K_HAS_JTAG", "K_HAS_DW", "K_HAS_PDI",
  "K_HAS_UPDI", "K_HAS_TPI", "K_IS_AT90S1200", "K_IS_AVR32",
  "K_FLASH_INSTR", "K_EEPROM_INSTR", "TKN_COMMA", "TKN_EQUAL", "TKN_SEMI",
  "TKN_LEFT_PAREN", "TKN_RIGHT_PAREN", "TKN_NUMBER", "TKN_NUMBER_REAL",
  "TKN_STRING", "TKN_COMPONENT", "OP_OR", "OP_XOR", "OP_AND", "OP_PLUS",
  "OP_MINUS", "OP_TIMES", "OP_DIVIDE", "OP_MODULO", "OP_TILDE", "UNARY",
  "$accept", "number_real", "expr", "numexpr", "configuration", "config",
  "def", "prog_def", "prog_decl", "part_def", "part_decl", "string_list",
  "num_list", "prog_parms", "prog_parm", "prog_parm_type",
  "prog_parm_type_id", "prog_parm_conntype", "prog_parm_conntype_id",
  "usb_pid_list", "prog_parm_updi", "hvupdi_support_list",
  "pin_number_non_empty", "pin_number", "pin_list_element",
  "pin_list_non_empty", "pin_list", "prog_parm_pins", "$@1", "$@2", "$@3",
  "$@4", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11", "$@12", "$@13",
  "$@14", "opcode", "part_parms", "reset_disposition", "retry_lines",
  "part_parm", "$@15", "mem_specs", "mem_spec", "mem_alias", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353
};
# endif

#define YYPACT_NINF (-213)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     171,   -59,   -56,   -48,   -32,   -31,   -22,    -7,     5,    24,
      32,    45,    91,   171,  -213,    37,   236,    42,   172,   252,
      25,    29,   133,    38,    43,    58,    59,    60,    61,    62,
    -213,  -213,  -213,    48,    81,    83,    85,    86,    87,    88,
      92,    93,   108,   111,   112,   113,   121,   122,   124,   125,
     126,   128,   129,   236,    90,  -213,  -213,  -213,  -213,  -213,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,
    -213,  -213,   134,   130,   131,   132,   139,   147,   148,   150,
     151,   152,   154,   156,   157,   174,   175,   178,   180,   182,
     184,   190,   194,   198,   199,   203,   204,   172,   170,   252,
    -213,   252,   252,   252,   238,   205,   206,  -213,   209,   261,
     215,   218,   239,   240,   241,  -213,  -213,  -213,    89,   252,
    -213,   166,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,
    -213,  -213,   252,     3,  -213,  -213,   181,   243,  -213,   245,
     252,   249,   252,   -17,   -33,   252,   177,   252,     7,     4,
      10,   252,   252,   252,   252,   252,   252,   252,   252,   252,
      23,    78,   181,    11,   256,  -213,   -38,  -213,  -213,  -213,
    -213,   252,   252,   252,   252,   252,   252,   252,   252,  -213,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,   -74,  -213,  -213,
    -213,  -213,  -213,  -213,   261,   259,   -73,  -213,   260,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   261,
     262,  -213,  -213,  -213,   -74,   -73,  -213,  -213,   261,  -213,
     338,    30,   261,  -213,   261,  -213,  -213,  -213,  -213,  -213,
    -213,   261,   258,   261,  -213,   260,  -213,   261,   266,  -213,
     266,   261,   261,   261,   261,   261,   261,   261,   261,   261,
    -213,   266,  -213,   266,  -213,  -213,   260,  -213,  -213,   268,
     222,   -65,    15,    15,  -213,  -213,  -213,  -213,    -6,  -213,
    -213,   267,  -213,   252,   263,  -213,  -213,   278,  -213,  -213,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,   252,  -213,
    -213,  -213,   285,   280,   287,   288,   289,    56,   290,   291,
     286,   252,   252,  -213,   -74,   261,  -213,   261,   252,  -213,
     292,   181,    12,   293,  -213,  -213,  -213,   261,    -8,  -213,
     261,   294,  -213,  -213,   260,  -213,  -213,  -213
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,    35,     0,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,    22,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,    48,    51,    52,    49,    24,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     3,     0,     2,
       0,     0,     0,     0,     0,    39,    36,    79,     0,     0,
      97,     0,    87,    85,   101,    99,    81,    83,    89,    91,
      93,    95,     0,     0,    77,   103,     0,     0,    44,   151,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,     0,    15,    16,    17,
      32,     0,     0,     0,     0,     0,     0,     0,     0,    25,
      30,    31,    27,    26,    28,    29,    33,    76,    57,    58,
      59,    61,    60,    56,    65,    64,    70,    40,    47,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    62,
      50,    55,    54,    53,    76,    70,     5,    46,     4,    45,
       0,     0,   127,   124,   149,   119,   120,   138,   121,   122,
     150,   148,     0,   129,   125,   126,   131,    42,   130,   133,
     132,   146,   147,   139,   140,   141,   142,   143,   144,   145,
     135,   134,   137,   136,   123,   155,   154,   118,    18,     7,
       8,     9,    10,    11,    12,    13,    14,    67,     0,    71,
      73,    75,    80,     0,     0,    69,    98,     0,    88,    86,
     102,   100,    82,    84,    90,    92,    94,    96,     0,    78,
     104,   153,     0,     0,     0,     0,     0,   152,     0,     0,
       0,     0,     0,    68,     0,    66,    41,    63,     0,   164,
       0,     0,     0,     0,   156,   157,   128,    43,     0,    74,
     160,     0,   159,   163,   162,   158,    72,   161
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -213,  -213,  -160,   -19,  -213,  -213,    79,  -213,  -213,  -213,
    -213,  -147,  -142,  -213,   321,  -213,  -213,  -213,  -213,  -213,
    -213,  -213,  -182,   104,    72,  -213,   164,  -213,  -213,  -213,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,
    -213,  -213,  -212,  -213,  -213,  -213,   283,  -213,  -213,    84,
    -213
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   108,   217,   237,    12,    13,    14,    15,    16,    17,
      18,   198,   238,    53,    54,    55,   213,    56,   193,   210,
      57,   195,   275,   276,   270,   271,   272,    58,   214,   187,
     203,   204,   200,   199,   205,   206,   207,   208,   196,   202,
     201,   215,    96,    97,   227,   230,    98,   221,   297,   298,
     299
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     104,   235,   254,   109,   211,   269,   225,   236,   240,   296,
     234,   267,   267,   239,   255,   323,   256,   228,   251,   253,
     226,   229,    19,   268,   274,    20,   250,   174,   175,   176,
     177,   178,   269,    21,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,   258,   292,   293,    22,
      23,   171,   172,   173,   174,   175,   176,   177,   178,    24,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,   301,   292,    25,    28,   326,   302,   294,   303,
     166,   252,   167,   168,   169,   296,    26,    99,    29,   100,
     212,    30,    31,    99,   197,   100,   101,   102,   197,   197,
     194,   103,   101,   102,   294,    27,    99,   103,   100,   176,
     177,   178,   105,   209,   106,   101,   102,   218,   295,    32,
     103,   222,   269,   224,    59,   110,   231,   188,   233,   117,
     111,   189,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   190,   191,   218,   295,   112,   113,   114,   115,   116,
     192,   322,   259,   260,   261,   262,   263,   264,   265,   266,
     318,    99,   118,   100,   119,   324,   120,   121,   122,   123,
     101,   102,   138,   124,   125,   103,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,   126,
       1,     2,   127,   128,   129,     3,     4,     5,     6,     7,
       8,     9,   130,   131,    73,   132,   133,   134,    74,   135,
     136,   140,   141,   142,    75,    10,    99,    11,   100,   107,
     143,   139,    76,    77,    78,   101,   102,    79,   144,   145,
     103,   146,   147,   148,    80,   149,    81,   150,   151,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,   165,   197,   305,   152,   153,    33,    34,   154,
      95,   155,   232,   156,    99,   157,   100,    35,   216,   307,
      36,   158,    37,   101,   102,   159,    38,    39,   103,   160,
     161,    40,   317,    41,   162,   163,    42,   179,   180,   320,
      43,   181,   218,    44,    45,    46,    47,   182,    48,    49,
     183,    50,    51,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   173,   174,   175,   176,   177,   178,   290,
     170,   184,   185,   186,    52,   219,   220,   171,   172,   173,
     174,   175,   176,   177,   178,    99,   223,   100,   257,   273,
     277,   291,   288,   300,   101,   102,   301,   304,   303,   103,
     171,   172,   173,   174,   175,   176,   177,   178,   172,   173,
     174,   175,   176,   177,   178,   306,   308,   309,   310,   311,
     312,   316,   314,   315,   137,   325,   319,   321,   289,   327,
     164,   313
};

static const yytype_int16 yycheck[] =
{
      19,   148,   162,    22,     1,   187,    23,     3,   150,   221,
       3,    85,    85,     3,     3,     3,   163,    50,   160,   161,
      37,    54,    81,    97,    97,    81,     3,    92,    93,    94,
      95,    96,   214,    81,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    84,    17,    18,    81,
      81,    89,    90,    91,    92,    93,    94,    95,    96,    81,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    80,    17,    81,    43,    84,    83,    48,    85,
      99,     3,   101,   102,   103,   297,    81,    83,    43,    85,
      87,     0,    13,    83,    87,    85,    92,    93,    87,    87,
     119,    97,    92,    93,    48,    81,    83,    97,    85,    94,
      95,    96,    87,   132,    85,    92,    93,   136,    88,    82,
      97,   140,   304,   142,    82,    87,   145,    38,   147,    81,
      87,    42,   151,   152,   153,   154,   155,   156,   157,   158,
     159,    52,    53,   162,    88,    87,    87,    87,    87,    87,
      61,   311,   171,   172,   173,   174,   175,   176,   177,   178,
     302,    83,    81,    85,    81,   312,    81,    81,    81,    81,
      92,    93,    82,    81,    81,    97,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    81,
      19,    20,    81,    81,    81,    24,    25,    26,    27,    28,
      29,    30,    81,    81,    32,    81,    81,    81,    36,    81,
      81,    81,    81,    81,    42,    44,    83,    46,    85,    86,
      81,    87,    50,    51,    52,    92,    93,    55,    81,    81,
      97,    81,    81,    81,    62,    81,    64,    81,    81,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    82,    87,   273,    81,    81,    21,    22,    81,
      88,    81,    85,    81,    83,    81,    85,    31,    87,   288,
      34,    81,    36,    92,    93,    81,    40,    41,    97,    81,
      81,    45,   301,    47,    81,    81,    50,    82,    82,   308,
      54,    82,   311,    57,    58,    59,    60,    82,    62,    63,
      82,    65,    66,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,    91,    92,    93,    94,    95,    96,   215,
      82,    82,    82,    82,    88,    82,    81,    89,    90,    91,
      92,    93,    94,    95,    96,    83,    87,    85,    82,    80,
      80,     3,    80,    85,    92,    93,    80,    80,    85,    97,
      89,    90,    91,    92,    93,    94,    95,    96,    90,    91,
      92,    93,    94,    95,    96,    87,    81,    87,    81,    81,
      81,    85,    82,    82,    53,    82,   304,    85,   214,    85,
      97,   297
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    19,    20,    24,    25,    26,    27,    28,    29,    30,
      44,    46,   103,   104,   105,   106,   107,   108,   109,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    43,    43,
       0,   105,    82,    21,    22,    31,    34,    36,    40,    41,
      45,    47,    50,    54,    57,    58,    59,    60,    62,    63,
      65,    66,    88,   112,   113,   114,   116,   119,   126,    82,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    32,    36,    42,    50,    51,    52,    55,
      62,    64,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    88,   141,   142,   145,    83,
      85,    92,    93,    97,   102,    87,    85,    86,   100,   102,
      87,    87,    87,    87,    87,    87,    87,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,   113,    82,    87,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,   145,    82,   102,   102,   102,   102,
      82,    89,    90,    91,    92,    93,    94,    95,    96,    82,
      82,    82,    82,    82,    82,    82,    82,   128,    38,    42,
      52,    53,    61,   117,   102,   120,   137,    87,   110,   132,
     131,   139,   138,   129,   130,   133,   134,   135,   136,   102,
     118,     1,    87,   115,   127,   140,    87,   101,   102,    82,
      81,   146,   102,    87,   102,    23,    37,   143,    50,    54,
     144,   102,    85,   102,     3,   110,     3,   102,   111,     3,
     111,   102,   102,   102,   102,   102,   102,   102,   102,   102,
       3,   111,     3,   111,   101,     3,   110,    82,    84,   102,
     102,   102,   102,   102,   102,   102,   102,    85,    97,   121,
     123,   124,   125,    80,    97,   121,   122,    80,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,    80,   125,
     122,     3,    17,    18,    48,    88,   141,   147,   148,   149,
      85,    80,    83,    85,    80,   102,    87,   102,    81,    87,
      81,    81,    81,   148,    82,    82,    85,   102,   111,   123,
     102,    85,   101,     3,   110,    82,    84,    85
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    99,   100,   100,   101,   101,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   103,
     103,   104,   104,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   106,   107,   107,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   113,   113,   113,   113,
     113,   113,   113,   114,   115,   115,   116,   117,   117,   117,
     117,   117,   118,   118,   119,   120,   120,   121,   121,   122,
     122,   123,   123,   124,   124,   125,   125,   127,   126,   128,
     126,   129,   126,   130,   126,   131,   126,   132,   126,   133,
     126,   134,   126,   135,   126,   136,   126,   137,   126,   138,
     126,   139,   126,   140,   126,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   142,   142,   143,
     143,   144,   144,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   146,   145,   145,   145,   145,   147,   147,   147,   148,
     148,   148,   148,   148,   149
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     3,     0,
       1,     1,     2,     2,     2,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     2,     1,     3,     2,     1,     3,
       1,     3,     1,     3,     2,     3,     3,     3,     1,     1,
       3,     1,     1,     3,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     3,     3,     1,     3,     1,     2,     1,
       0,     1,     4,     1,     3,     1,     0,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     5,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     0,     4,     4,     3,     3,     2,     2,     3,     3,
       3,     4,     3,     3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (YY_("syntax error: cannot back up")); \
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
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
      yychar = yylex ();
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 172 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
         {
    yyval = yyvsp[0];
    /* convert value to real */
    yyval->value.number_real = yyval->value.number;
    yyval->value.type = V_NUM_REAL;
  }
#line 1696 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 3:
#line 178 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                  {
    yyval = yyvsp[0];
  }
#line 1704 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 7:
#line 188 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                            { yyval = yyvsp[-2]; yyval->value.number |= yyvsp[0]->value.number; }
#line 1710 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 8:
#line 189 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                            { yyval = yyvsp[-2]; yyval->value.number ^= yyvsp[0]->value.number; }
#line 1716 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 9:
#line 190 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                            { yyval = yyvsp[-2]; yyval->value.number &= yyvsp[0]->value.number; }
#line 1722 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 10:
#line 191 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                            { yyval = yyvsp[-2]; yyval->value.number += yyvsp[0]->value.number; }
#line 1728 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 11:
#line 192 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                            { yyval = yyvsp[-2]; yyval->value.number -= yyvsp[0]->value.number; }
#line 1734 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 12:
#line 193 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                            { yyval = yyvsp[-2]; yyval->value.number *= yyvsp[0]->value.number; }
#line 1740 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 13:
#line 194 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                            { yyval = yyvsp[-2]; yyval->value.number /= yyvsp[0]->value.number; }
#line 1746 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 14:
#line 195 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                            { yyval = yyvsp[-2]; yyval->value.number %= yyvsp[0]->value.number; }
#line 1752 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 15:
#line 196 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                               { yyval = yyvsp[0]; }
#line 1758 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 16:
#line 197 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                               { yyval = yyvsp[0]; yyval->value.number = -yyval->value.number; }
#line 1764 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 17:
#line 198 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                               { yyval = yyvsp[0]; yyval->value.number = ~yyval->value.number; }
#line 1770 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 18:
#line 199 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                         { yyval = yyvsp[-1]; }
#line 1776 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 25:
#line 218 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                                       {
    avrdude_conf_version = cache_string(yyvsp[-1]->value.string);
    free_token(yyvsp[-1]);
  }
#line 1785 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 26:
#line 223 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                                     {
    default_programmer = cache_string(yyvsp[-1]->value.string);
    free_token(yyvsp[-1]);
  }
#line 1794 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 27:
#line 228 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                                   {
    default_parallel = cache_string(yyvsp[-1]->value.string);
    free_token(yyvsp[-1]);
  }
#line 1803 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 28:
#line 233 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                                 {
    default_serial = cache_string(yyvsp[-1]->value.string);
    free_token(yyvsp[-1]);
  }
#line 1812 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 29:
#line 238 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                              {
    default_spi = cache_string(yyvsp[-1]->value.string);
    free_token(yyvsp[-1]);
  }
#line 1821 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 30:
#line 243 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                                   {
    default_baudrate = yyvsp[-1]->value.number;
    free_token(yyvsp[-1]);
  }
#line 1830 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 31:
#line 248 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                                    {
    default_bitclock = yyvsp[-1]->value.number_real;
    free_token(yyvsp[-1]);
  }
#line 1839 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 32:
#line 253 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                               {
    allow_subshells = yyvsp[-1]->value.number;
    free_token(yyvsp[-1]);
  }
#line 1848 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 33:
#line 258 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                                    {
    default_linuxgpio = cache_string(yyvsp[-1]->value.string);
    free_token(yyvsp[-1]);
  }
#line 1857 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 34:
#line 267 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    {
      PROGRAMMER * existing_prog;
      if (lsize(current_prog->id) == 0) {
        yyerror("required parameter id not specified");
        YYABORT;
      }
      if (current_prog->initpgm == NULL && current_prog->prog_modes) {
        yyerror("programmer type not specified");
        YYABORT;
      }
      for(LNODEID ln = lfirst(current_prog->id); ln; ln = lnext(ln)) {
        char *id = ldata(ln);
        if((existing_prog = locate_programmer(programmers, id))) {
          // Temporarily set lineno to lineno of programmer start
          int temp = cfg_lineno; cfg_lineno = current_prog->lineno;
          yywarning("programmer %s overwrites previous definition %s:%d.",
            id, existing_prog->config_file, existing_prog->lineno);
          cfg_lineno = temp;
          lrmv_d(programmers, existing_prog);
          pgm_free(existing_prog);
        }
      }
      current_prog->comments = cfg_move_comments();
      LISTADD(programmers, current_prog);
//      pgm_fill_old_pins(current_prog); // TODO to be removed if old pin data no longer needed
//      pgm_display_generic(current_prog, id);
      current_prog = NULL;
      current_strct = COMP_CONFIG_MAIN;
    }
#line 1891 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 35:
#line 301 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    { current_prog = pgm_new();
      current_prog->config_file = cache_string(cfg_infile);
      current_prog->lineno = cfg_lineno;
    }
#line 1900 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 36:
#line 307 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    {
      PROGRAMMER * pgm = locate_programmer(programmers, yyvsp[0]->value.string);
      if (pgm == NULL) {
        yyerror("parent programmer %s not found", yyvsp[0]->value.string);
        free_token(yyvsp[0]);
        YYABORT;
      }
      current_prog = pgm_dup(pgm);
      current_prog->parent_id = cache_string(yyvsp[0]->value.string);
      current_prog->comments = NULL;
      current_prog->config_file = cache_string(cfg_infile);
      current_prog->lineno = cfg_lineno;
      free_token(yyvsp[0]);
    }
#line 1919 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 37:
#line 326 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    { 
      LNODEID ln;
      AVRMEM * m;
      AVRPART * existing_part;

      if (current_part->id[0] == 0) {
        yyerror("required parameter id not specified");
        YYABORT;
      }

      cfg_update_mcuid(current_part);

      // Sanity checks for memory sizes and compute/override num_pages entry
      for (ln=lfirst(current_part->mem); ln; ln=lnext(ln)) {
        m = ldata(ln);
        if (m->paged) {
          if (m->size <= 0) {
            yyerror("must specify a positive size for paged memory %s", m->desc);
            YYABORT;
          }
          if (m->page_size <= 0) {
            yyerror("must specify a positive page size for paged memory %s", m->desc);
            YYABORT;
          }
          // Code base relies on page_size being a power of 2 in some places
          if (m->page_size & (m->page_size - 1)) {
            yyerror("page size must be a power of 2 for paged memory %s", m->desc);
            YYABORT;
          }
          // Code base relies on size being a multiple of page_size
          if (m->size % m->page_size) {
            yyerror("size must be a multiple of page size for paged memory %s", m->desc);
            YYABORT;
          }
          // Warn if num_pages was specified but is inconsistent with size and page size
          if (m->num_pages && m->num_pages != m->size / m->page_size)
            yywarning("overriding num_page to be %d for memory %s", m->size/m->page_size, m->desc);

          m->num_pages = m->size / m->page_size;
        }
      }

      existing_part = locate_part(part_list, current_part->id);
      if (existing_part) {
        { /* temporarily set lineno to lineno of part start */
          int temp = cfg_lineno; cfg_lineno = current_part->lineno;
          yywarning("part %s overwrites previous definition %s:%d.",
                current_part->id,
                existing_part->config_file, existing_part->lineno);
          cfg_lineno = temp;
        }
        lrmv_d(part_list, existing_part);
        avr_free_part(existing_part);
      }

      current_part->comments = cfg_move_comments();
      LISTADD(part_list, current_part); 
      current_part = NULL; 
      current_strct = COMP_CONFIG_MAIN;
    }
#line 1984 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 38:
#line 390 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    {
      current_part = avr_new_part();
      current_part->config_file = cache_string(cfg_infile);
      current_part->lineno = cfg_lineno;
    }
#line 1994 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 39:
#line 396 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    {
      AVRPART * parent_part = locate_part(part_list, yyvsp[0]->value.string);
      if (parent_part == NULL) {
        yyerror("can't find parent part");
        free_token(yyvsp[0]);
        YYABORT;
      }

      current_part = avr_dup_part(parent_part);
      current_part->parent_id = cache_string(yyvsp[0]->value.string);
      current_part->comments = NULL;
      current_part->config_file = cache_string(cfg_infile);
      current_part->lineno = cfg_lineno;

      free_token(yyvsp[0]);
    }
#line 2015 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 40:
#line 415 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
             { ladd(string_list, yyvsp[0]); }
#line 2021 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 41:
#line 416 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                   { ladd(string_list, yyvsp[0]); }
#line 2027 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 42:
#line 421 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
          { ladd(number_list, yyvsp[0]); }
#line 2033 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 43:
#line 422 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                             { ladd(number_list, yyvsp[0]); }
#line 2039 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 46:
#line 431 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                               {
    cfg_assign((char *) current_prog, COMP_PROGRAMMER, yyvsp[-2]->value.comp, &yyvsp[0]->value);
    free_token(yyvsp[-2]);
  }
#line 2048 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 47:
#line 435 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                             {
    {
      while (lsize(string_list)) {
        TOKEN *t = lrmv_n(string_list, 1);
        ladd(current_prog->id, cfg_strdup("config_gram.y", t->value.string));
        free_token(t);
      }
    }
  }
#line 2062 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 54:
#line 460 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                    {
  const struct programmer_type_t * pgm_type = locate_programmer_type(yyvsp[0]->value.string);
    if (pgm_type == NULL) {
        yyerror("programmer type %s not found", yyvsp[0]->value.string);
        free_token(yyvsp[0]); 
        YYABORT;
    }
    current_prog->initpgm = pgm_type->initpgm;
    free_token(yyvsp[0]); 
}
#line 2077 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 55:
#line 471 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
{
        yyerror("programmer type must be written as \"id_type\"");
        YYABORT;
}
#line 2086 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 57:
#line 482 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                    { current_prog->conntype = CONNTYPE_LINUXGPIO; }
#line 2092 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 58:
#line 483 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                    { current_prog->conntype = CONNTYPE_PARALLEL; }
#line 2098 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 59:
#line 484 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                    { current_prog->conntype = CONNTYPE_SERIAL; }
#line 2104 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 60:
#line 485 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                    { current_prog->conntype = CONNTYPE_USB; }
#line 2110 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 61:
#line 486 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                    { current_prog->conntype = CONNTYPE_SPI; }
#line 2116 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 62:
#line 490 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
          {
    {
      /* overwrite pids, so clear the existing entries */
      if(current_prog->usbpid)
        ldestroy_cb(current_prog->usbpid, free);
      current_prog->usbpid = lcreat(NULL, 0);
    }
    {
      int *ip = cfg_malloc("usb_pid_list", sizeof(int));
      *ip = yyvsp[0]->value.number;
      ladd(current_prog->usbpid, ip);
      free_token(yyvsp[0]);
    }
  }
#line 2135 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 63:
#line 504 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                 {
    {
      int *ip = cfg_malloc("usb_pid_list", sizeof(int));
      *ip = yyvsp[0]->value.number;
      ladd(current_prog->usbpid, ip);
      free_token(yyvsp[0]);
    }
  }
#line 2148 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 65:
#line 519 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
          {
    {
      /* overwrite list entries, so clear the existing entries */
      if(current_prog->hvupdi_support)
        ldestroy_cb(current_prog->hvupdi_support, free);
      current_prog->hvupdi_support = lcreat(NULL, 0);
    }
    {
      int *ip = cfg_malloc("hvupdi_support_list", sizeof(int));
      *ip = yyvsp[0]->value.number;
      ladd(current_prog->hvupdi_support, ip);
      free_token(yyvsp[0]);
    }
  }
#line 2167 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 66:
#line 533 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                        {
    {
      int *ip = cfg_malloc("hvupdi_support_list", sizeof(int));
      *ip = yyvsp[0]->value.number;
      ladd(current_prog->hvupdi_support, ip);
      free_token(yyvsp[0]);
    }
  }
#line 2180 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 67:
#line 544 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
             { if(0 != assign_pin(pin_name, yyvsp[0], 0)) YYABORT;  }
#line 2186 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 68:
#line 546 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                      { if(0 != assign_pin(pin_name, yyvsp[0], 1)) YYABORT; }
#line 2192 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 70:
#line 552 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
              { pin_clear_all(&(current_prog->pin[pin_name])); }
#line 2198 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 72:
#line 558 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                                   { if(0 != assign_pin_list(1)) YYABORT; }
#line 2204 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 76:
#line 571 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
              { pin_clear_all(&(current_prog->pin[pin_name])); }
#line 2210 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 77:
#line 575 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                     {pin_name = PPI_AVR_VCC; clear_pin(pin_name);  }
#line 2216 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 79:
#line 576 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                     {pin_name = PPI_AVR_BUFF; clear_pin(pin_name); }
#line 2222 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 81:
#line 577 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                     {pin_name = PIN_AVR_RESET; clear_pin(pin_name);}
#line 2228 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 82:
#line 577 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                                                                 { free_token(yyvsp[-3]); }
#line 2234 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 83:
#line 578 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                     {pin_name = PIN_AVR_SCK; clear_pin(pin_name);  }
#line 2240 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 84:
#line 578 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                                                                 { free_token(yyvsp[-3]); }
#line 2246 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 85:
#line 579 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                     {pin_name = PIN_AVR_SDO; clear_pin(pin_name);  }
#line 2252 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 87:
#line 580 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                     {pin_name = PIN_AVR_SDI; clear_pin(pin_name);  }
#line 2258 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 89:
#line 581 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                     {pin_name = PIN_JTAG_TCK; clear_pin(pin_name); }
#line 2264 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 91:
#line 582 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                     {pin_name = PIN_JTAG_TDI; clear_pin(pin_name); }
#line 2270 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 93:
#line 583 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                     {pin_name = PIN_JTAG_TDO; clear_pin(pin_name); }
#line 2276 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 95:
#line 584 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                     {pin_name = PIN_JTAG_TMS; clear_pin(pin_name); }
#line 2282 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 97:
#line 585 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                     {pin_name = PIN_LED_ERR; clear_pin(pin_name);  }
#line 2288 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 99:
#line 586 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                     {pin_name = PIN_LED_RDY; clear_pin(pin_name);  }
#line 2294 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 101:
#line 587 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                     {pin_name = PIN_LED_PGM; clear_pin(pin_name);  }
#line 2300 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 103:
#line 588 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                     {pin_name = PIN_LED_VFY; clear_pin(pin_name);  }
#line 2306 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 123:
#line 622 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                               {
    cfg_assign((char *) current_part, COMP_AVRPART, yyvsp[-2]->value.comp, &yyvsp[0]->value);
    free_token(yyvsp[-2]);
  }
#line 2315 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 124:
#line 627 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    {
      current_part->id = cache_string(yyvsp[0]->value.string);
      free_token(yyvsp[0]);
    }
#line 2324 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 125:
#line 632 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                              {
    {
      ldestroy_cb(current_part->variants, free);
      current_part->variants = lcreat(NULL, 0);
    }
  }
#line 2335 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 126:
#line 639 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                   {
    {
      while (lsize(string_list)) {
        TOKEN *t = lrmv_n(string_list, 1);
        int found = 0;
        for(LNODEID ln = lfirst(current_part->variants); ln; ln = lnext(ln)) {
          if(str_eq((char *) ldata(ln), t->value.string)) {
            found = 1;
            break;
          }
        }
        if(!found)
          ladd(current_part->variants, cfg_strdup("config_gram.y", t->value.string));
        free_token(t);
      }
    }
  }
#line 2357 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 127:
#line 657 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                 {
    {
      yyerror("devicecode is deprecated, will be removed in v8.0, use stk500_devcode instead");
      YYABORT;
    }
  }
#line 2368 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 128:
#line 664 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                                         {
    {
      current_part->signature[0] = yyvsp[-2]->value.number;
      current_part->signature[1] = yyvsp[-1]->value.number;
      current_part->signature[2] = yyvsp[0]->value.number;
      free_token(yyvsp[-2]);
      free_token(yyvsp[-1]);
      free_token(yyvsp[0]);
    }
  }
#line 2383 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 129:
#line 675 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                            {
    {
      current_part->usbpid = yyvsp[0]->value.number;
      free_token(yyvsp[0]);
    }
  }
#line 2394 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 130:
#line 682 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                       {
    {
      TOKEN * t;
      unsigned nbytes;
      int ok;

      current_part->ctl_stack_type = CTL_STACK_PP;
      nbytes = 0;
      ok = 1;

      memset(current_part->controlstack, 0, CTL_STACK_SIZE);
      while (lsize(number_list)) {
        t = lrmv_n(number_list, 1);
	if (nbytes < CTL_STACK_SIZE)
	  {
	    current_part->controlstack[nbytes] = t->value.number;
	    nbytes++;
	  }
	else
	  {
	    ok = 0;
	  }
        free_token(t);
      }
      if (!ok)
	{
	  yywarning("too many bytes in control stack");
        }
    }
  }
#line 2429 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 131:
#line 713 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                     {
    {
      current_part->ctl_stack_type = CTL_STACK_NONE;
      memset(current_part->controlstack, 0, CTL_STACK_SIZE);
    }
  }
#line 2440 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 132:
#line 720 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                         {
    {
      TOKEN * t;
      unsigned nbytes;
      int ok;

      current_part->ctl_stack_type = CTL_STACK_HVSP;
      nbytes = 0;
      ok = 1;

      memset(current_part->controlstack, 0, CTL_STACK_SIZE);
      while (lsize(number_list)) {
        t = lrmv_n(number_list, 1);
	if (nbytes < CTL_STACK_SIZE)
	  {
	    current_part->controlstack[nbytes] = t->value.number;
	    nbytes++;
	  }
	else
	  {
	    ok = 0;
	  }
        free_token(t);
      }
      if (!ok)
	{
	  yywarning("too many bytes in control stack");
        }
    }
  }
#line 2475 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 133:
#line 751 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                       {
    {
      current_part->ctl_stack_type = CTL_STACK_NONE;
      memset(current_part->controlstack, 0, CTL_STACK_SIZE);
    }
  }
#line 2486 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 134:
#line 758 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                   {
    {
      TOKEN * t;
      unsigned nbytes;
      int ok;

      nbytes = 0;
      ok = 1;

      memset(current_part->flash_instr, 0, FLASH_INSTR_SIZE);
      while (lsize(number_list)) {
        t = lrmv_n(number_list, 1);
	if (nbytes < FLASH_INSTR_SIZE)
	  {
	    current_part->flash_instr[nbytes] = t->value.number;
	    nbytes++;
	  }
	else
	  {
	    ok = 0;
	  }
        free_token(t);
      }
      if (!ok)
	{
	  yywarning("too many bytes in flash instructions");
        }
    }
  }
#line 2520 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 135:
#line 788 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                 {
    {
      memset(current_part->flash_instr, 0, FLASH_INSTR_SIZE);
    }
  }
#line 2530 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 136:
#line 794 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                    {
    {
      TOKEN * t;
      unsigned nbytes;
      int ok;

      nbytes = 0;
      ok = 1;

      memset(current_part->eeprom_instr, 0, EEPROM_INSTR_SIZE);
      while (lsize(number_list)) {
        t = lrmv_n(number_list, 1);
	if (nbytes < EEPROM_INSTR_SIZE)
	  {
	    current_part->eeprom_instr[nbytes] = t->value.number;
	    nbytes++;
	  }
	else
	  {
	    ok = 0;
	  }
        free_token(t);
      }
      if (!ok)
	{
	  yywarning("too many bytes in EEPROM instructions");
        }
    }
  }
#line 2564 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 137:
#line 824 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                                  {
    {
      memset(current_part->eeprom_instr, 0, EEPROM_INSTR_SIZE);
    }
  }
#line 2574 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 138:
#line 831 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    {
      if (yyvsp[0]->primary == K_DEDICATED)
        current_part->reset_disposition = RESET_DEDICATED;
      else if (yyvsp[0]->primary == K_IO)
        current_part->reset_disposition = RESET_IO;

      free_tokens(2, yyvsp[-2], yyvsp[0]);
    }
#line 2587 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 139:
#line 841 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    {
      yywarning("has_jtag is deprecated, will be removed in v8.0, use prog_modes");
      if (yyvsp[0]->value.number == 1)
        current_part->prog_modes |= PM_JTAG;
      else if (yyvsp[0]->value.number == 0)
        current_part->prog_modes &= ~(PM_JTAG | PM_JTAGmkI | PM_XMEGAJTAG | PM_AVR32JTAG);
      free_token(yyvsp[0]);
    }
#line 2600 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 140:
#line 851 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    {
      yywarning("has_debugwire is deprecated, will be removed in v8.0, use prog_modes");
      if (yyvsp[0]->value.number == 1)
        current_part->prog_modes |= PM_debugWIRE;
      else if (yyvsp[0]->value.number == 0)
        current_part->prog_modes &= ~PM_debugWIRE;
      free_token(yyvsp[0]);
    }
#line 2613 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 141:
#line 861 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    {
      yywarning("has_pdi is deprecated, will be removed in v8.0, use prog_modes");
      if (yyvsp[0]->value.number == 1)
        current_part->prog_modes |= PM_PDI;
      else if (yyvsp[0]->value.number == 0)
        current_part->prog_modes &= ~PM_PDI;
      free_token(yyvsp[0]);
    }
#line 2626 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 142:
#line 871 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    {
      yywarning("has_updi is deprecated, will be removed in v8.0, use prog_modes");
      if (yyvsp[0]->value.number == 1)
        current_part->prog_modes |= PM_UPDI;
      else if (yyvsp[0]->value.number == 0)
        current_part->prog_modes &= ~PM_UPDI;
      free_token(yyvsp[0]);
    }
#line 2639 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 143:
#line 881 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    {
      yywarning("has_tpi is deprecated, will be removed in v8.0, use prog_modes");
      if (yyvsp[0]->value.number == 1)
        current_part->prog_modes |= PM_TPI;
      else if (yyvsp[0]->value.number == 0)
        current_part->prog_modes &= ~PM_TPI;
      free_token(yyvsp[0]);
    }
#line 2652 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 144:
#line 891 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    {
      if (yyvsp[0]->value.number == 1)
        current_part->flags |= AVRPART_IS_AT90S1200;
      else if (yyvsp[0]->value.number == 0)
        current_part->flags &= ~AVRPART_IS_AT90S1200;
      else {
        yyerror("is_at90s1200 not a Boolean value");
        free_token(yyvsp[0]);
        YYABORT;
      }

      free_token(yyvsp[0]);
    }
#line 2670 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 145:
#line 906 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    {
      yywarning("is_avr32 is deprecated, will be removed in v8.0, use prog_modes");
      if (yyvsp[0]->value.number == 1)
        current_part->prog_modes |= PM_aWire;
      else if (yyvsp[0]->value.number == 0)
        current_part->prog_modes &= ~PM_aWire;
      free_token(yyvsp[0]);
    }
#line 2683 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 146:
#line 916 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    {
      if (yyvsp[0]->value.number == 1)
        current_part->flags |= AVRPART_ALLOWFULLPAGEBITSTREAM;
      else if (yyvsp[0]->value.number == 0)
        current_part->flags &= ~AVRPART_ALLOWFULLPAGEBITSTREAM;
      else {
        yyerror("allowfullpagebitstream not a Boolean value");
        free_token(yyvsp[0]);
        YYABORT;
      }

      free_token(yyvsp[0]);
    }
#line 2701 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 147:
#line 931 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    {
      if (yyvsp[0]->value.number == 1)
        current_part->flags |= AVRPART_ENABLEPAGEPROGRAMMING;
      else if (yyvsp[0]->value.number == 0)
        current_part->flags &= ~AVRPART_ENABLEPAGEPROGRAMMING;
      else {
        yyerror("enablepageprogramming not a Boolean value");
        free_token(yyvsp[0]);
        YYABORT;
      }

      free_token(yyvsp[0]);
    }
#line 2719 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 148:
#line 946 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    {
      if (yyvsp[0]->value.number == 1)
        current_part->flags |= AVRPART_SERIALOK;
      else if (yyvsp[0]->value.number == 0)
        current_part->flags &= ~AVRPART_SERIALOK;
      else {
        yyerror("serial not a Boolean value");
        free_token(yyvsp[0]);
        YYABORT;
      }

      free_token(yyvsp[0]);
    }
#line 2737 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 149:
#line 961 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    {
      if (yyvsp[0]->value.number == 1) {
        current_part->flags |= AVRPART_PARALLELOK;
        current_part->flags &= ~AVRPART_PSEUDOPARALLEL;
      }
      else if (yyvsp[0]->value.number == 0) {
        current_part->flags &= ~AVRPART_PARALLELOK;
        current_part->flags &= ~AVRPART_PSEUDOPARALLEL;
      }
      else if (yyvsp[0]->value.number == 2) {
        current_part->flags |= AVRPART_PARALLELOK;
        current_part->flags |= AVRPART_PSEUDOPARALLEL;
      }
      else {
        yyerror("parallel outside [0, 2] (yes/no/pseudo)");
        free_token(yyvsp[0]);
        YYABORT;
      }


      free_token(yyvsp[0]);
    }
#line 2764 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 150:
#line 985 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    {
      switch (yyvsp[0]->primary) {
        case K_RESET :
          current_part->retry_pulse = PIN_AVR_RESET;
          break;
        case K_SCK :
          current_part->retry_pulse = PIN_AVR_SCK;
          break;
      }

      free_token(yyvsp[-2]);
    }
#line 2781 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 151:
#line 1000 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    { /* select memory for extension or create if not there */
      AVRMEM *mem = avr_locate_mem_noalias(current_part, yyvsp[0]->value.string);
      if(!mem) {
        mem = avr_new_mem();
        mem->desc = cache_string(yyvsp[0]->value.string);
        ladd(current_part->mem, mem);
        mem->type = avr_get_mem_type(yyvsp[0]->value.string);
      }
      current_mem = mem;
      free_token(yyvsp[0]);
    }
#line 2797 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 152:
#line 1012 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    {
      if (is_alias) {           // alias mem has been already entered
        lrmv_d(current_part->mem, current_mem);
        avr_free_mem(current_mem);
        is_alias = false;
      } else {                  // check all opcodes re necessary address bits
        unsigned char cmd[4] = { 0, 0, 0, 0, };
        int bn;

        for(int i=0; i<AVR_OP_MAX; i++)
          if(current_mem && current_mem->op[i]) {
            if((bn = avr_set_addr_mem(current_mem, i, cmd, 0UL)) > 0)
              yywarning("%s's %s %s misses a necessary address bit a%d",
                 current_part->desc, current_mem->desc, opcodename(i), bn-1);
            }
        current_mem->comments = cfg_move_comments();
      }
      cfg_pop_comms();
      current_mem = NULL; 
      current_strct = COMP_AVRPART;
    }
#line 2823 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 153:
#line 1034 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
   {
      AVRMEM *existing_mem = avr_locate_mem_noalias(current_part, yyvsp[-2]->value.string);
      if (existing_mem != NULL) {
        lrmv_d(current_part->mem, existing_mem);
        avr_free_mem(existing_mem);
      }
      free_token(yyvsp[-2]);
      cfg_pop_comms();
      current_mem = NULL;
      current_strct = COMP_AVRPART;
    }
#line 2839 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 154:
#line 1045 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                               {
    { 
      int opnum;
      OPCODE * op;

      opnum = which_opcode(yyvsp[-2]);
      if (opnum < 0) YYABORT;
      op = avr_new_opcode();
      if(0 != parse_cmdbits(op, opnum))
        YYABORT;
      if (current_part->op[opnum] != NULL) {
        /*yywarning("operation redefined");*/
        avr_free_opcode(current_part->op[opnum]);
      }
      current_part->op[opnum] = op;

      free_token(yyvsp[-2]);
    }
  }
#line 2863 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 155:
#line 1065 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                          {
    {
      int opnum = which_opcode(yyvsp[-2]);
      if(opnum < 0)
         YYABORT;
      if(current_part->op[opnum] != NULL)
        avr_free_opcode(current_part->op[opnum]);
      current_part->op[opnum] = NULL;

      free_token(yyvsp[-2]);
    }
  }
#line 2880 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 159:
#line 1088 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                               {
    cfg_assign((char *) current_mem, COMP_AVRMEM, yyvsp[-2]->value.comp, &yyvsp[0]->value);
    free_token(yyvsp[-2]);
  }
#line 2889 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 160:
#line 1094 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    {
      int ps = yyvsp[0]->value.number;
      if (ps <= 0)
        pmsg_warning("invalid page size %d, ignored [%s:%d]\n", ps, cfg_infile, cfg_lineno);
      else
        current_mem->page_size = ps;
      free_token(yyvsp[0]);
    }
#line 2902 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 161:
#line 1104 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
    {
      current_mem->readback[0] = yyvsp[-1]->value.number;
      current_mem->readback[1] = yyvsp[0]->value.number;
      free_token(yyvsp[-1]);
      free_token(yyvsp[0]);
    }
#line 2913 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 162:
#line 1111 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                               {
    { 
      int opnum;
      OPCODE * op;

      opnum = which_opcode(yyvsp[-2]);
      if (opnum < 0) YYABORT;
      op = avr_new_opcode();
      if(0 != parse_cmdbits(op, opnum))
        YYABORT;
      if (current_mem->op[opnum] != NULL) {
        /*yywarning("operation redefined");*/
        avr_free_opcode(current_mem->op[opnum]);
      }
      current_mem->op[opnum] = op;

      free_token(yyvsp[-2]);
    }
  }
#line 2937 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 163:
#line 1131 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
                          {
    {
      int opnum = which_opcode(yyvsp[-2]);
      if(opnum < 0)
         YYABORT;
      if(current_mem->op[opnum] != NULL)
        avr_free_opcode(current_mem->op[opnum]);
      current_mem->op[opnum] = NULL;

      free_token(yyvsp[-2]);
    }
  }
#line 2954 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;

  case 164:
#line 1147 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"
  {
      AVRMEM * existing_mem;

      existing_mem = avr_locate_mem(current_part, yyvsp[0]->value.string);
      if (existing_mem == NULL) {
        yyerror("%s alias to non-existent memory %s",
                current_mem->desc, yyvsp[0]->value.string);
        free_token(yyvsp[0]);
        YYABORT;
      }

      // if this alias does already exist, drop the old one
      AVRMEM_ALIAS * alias = avr_locate_memalias(current_part, current_mem->desc);
      if (alias) {
        lrmv_d(current_part->mem_alias, alias);
        avr_free_memalias(alias);
      }

      is_alias = true;
      alias = avr_new_memalias();
      alias->desc = current_mem->desc;
      alias->aliased_mem = existing_mem;
      ladd(current_part->mem_alias, alias);

      free_token(yyvsp[0]);
  }
#line 2985 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"
    break;


#line 2989 "/home/ywkim/avr/src/avrdude-7.3/build_linux/config_gram.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
      yyerror (YY_("syntax error"));
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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
        yyerror (yymsgp);
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
                      yytoken, &yylval);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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
                  yystos[yystate], yyvsp);
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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
#line 1175 "/home/ywkim/avr/src/avrdude-7.3/src/config_gram.y"


#if 0
static char * vtypestr(int type)
{
  switch (type) {
    case V_NUM : return "INTEGER";
    case V_NUM_REAL: return "REAL";
    case V_STR : return "STRING";
    default:
      return "<UNKNOWN>";
  }
}
#endif


static int clear_pin(int pinfunc) {
  if(pinfunc < 0 || pinfunc >= N_PINS) {
    yyerror("pin function must be in the range [0, %d]", N_PINS-1);
    return -1;
  }

  pin_clear_all(&(current_prog->pin[pinfunc]));

  return 0;
}

static int assign_pin(int pinfunc, TOKEN *v, int invert) {
  if(pinfunc < 0 || pinfunc >= N_PINS) {
    yyerror("pin function must be in the range [0, %d]", N_PINS-1);
    return -1;
  }

  int value = v->value.number;
  free_token(v);

  if ((value < PIN_MIN) || (value > PIN_MAX)) {
    yyerror("pin must be in the range " TOSTRING(PIN_MIN) "-"  TOSTRING(PIN_MAX));
    return -1;
  }

  pin_set_value(&(current_prog->pin[pinfunc]), value, invert);

  return 0;
}

static int assign_pin_list(int invert)
{
  TOKEN * t;
  int pin;
  int rv = 0;

  if(pin_name < 0 || pin_name >= N_PINS) {
    yyerror("pin_name should be in the range [0, %d]", N_PINS-1);
    return -1;
  }

  current_prog->pinno[pin_name] = NO_PIN;
  while (lsize(number_list)) {
    t = lrmv_n(number_list, 1);
    if (rv == 0) {
      pin = t->value.number;
      if ((pin < PIN_MIN) || (pin > PIN_MAX)) {
        yyerror("pin must be in the range " TOSTRING(PIN_MIN) "-"  TOSTRING(PIN_MAX));
        rv = -1;
      /* loop clears list and frees tokens */
      }
      pin_set_value(&(current_prog->pin[pin_name]), pin, invert);
    }
    free_token(t);
  }
  return rv;
}

static int which_opcode(TOKEN * opcode)
{
  switch (opcode->primary) {
    case K_READ        : return AVR_OP_READ; break;
    case K_WRITE       : return AVR_OP_WRITE; break;
    case K_READ_LO     : return AVR_OP_READ_LO; break;
    case K_READ_HI     : return AVR_OP_READ_HI; break;
    case K_WRITE_LO    : return AVR_OP_WRITE_LO; break;
    case K_WRITE_HI    : return AVR_OP_WRITE_HI; break;
    case K_LOADPAGE_LO : return AVR_OP_LOADPAGE_LO; break;
    case K_LOADPAGE_HI : return AVR_OP_LOADPAGE_HI; break;
    case K_LOAD_EXT_ADDR : return AVR_OP_LOAD_EXT_ADDR; break;
    case K_WRITEPAGE   : return AVR_OP_WRITEPAGE; break;
    case K_CHIP_ERASE  : return AVR_OP_CHIP_ERASE; break;
    case K_PGM_ENABLE  : return AVR_OP_PGM_ENABLE; break;
    default :
      yyerror("invalid opcode");
      return -1;
      break;
  }
}


static int parse_cmdbits(OPCODE * op, int opnum)
{
  TOKEN *t;
  int bitno;
  int len;
  char *s, *brkt = NULL;
  int rv = 0;

  bitno = 32;
  while (lsize(string_list)) {

    t = lrmv_n(string_list, 1);

    char *str = t->value.string;
    // Compact alternative specification? (eg, "0100.0000--000x.xxxx--xxaa.aaaa--iiii.iiii")
    char bit[2] = {0, 0}, *cc = str;
    int compact = !strchr(str, ' ') && strlen(str) > 7;

    bit[0] = *cc++;
    s = !compact? strtok_r(str, " ", &brkt): *bit? bit: NULL;
    while (rv == 0 && s != NULL) {

      // Ignore visual grouping characters in compact mode
      if(*s != '.' && *s != '-' && *s != '_' && *s !='/')
        bitno--;
      if (bitno < 0) {
        yyerror("too many opcode bits for instruction");
        rv = -1;
        break;
      }

      len = strlen(s);

      if (len == 0) {
        yyerror("invalid bit specifier \"\"");
        rv = -1;
        break;
      }

      if (len == 1) {
        switch (*s) {
          case '1':
            op->bit[bitno].type  = AVR_CMDBIT_VALUE;
            op->bit[bitno].value = 1;
            op->bit[bitno].bitno = bitno % 8;
            break;
          case '0':
            op->bit[bitno].type  = AVR_CMDBIT_VALUE;
            op->bit[bitno].value = 0;
            op->bit[bitno].bitno = bitno % 8;
            break;
          case 'x':
            op->bit[bitno].type  = AVR_CMDBIT_IGNORE;
            op->bit[bitno].value = 0;
            op->bit[bitno].bitno = bitno % 8;
            break;
          case 'a':
            op->bit[bitno].type  = AVR_CMDBIT_ADDRESS;
            op->bit[bitno].value = 0;
            op->bit[bitno].bitno = bitno < 8 || bitno > 23? 0:
              opnum == AVR_OP_LOAD_EXT_ADDR? bitno+8: bitno-8; /* correct bit number for lone 'a' */
            if(bitno < 8 || bitno > 23)
              yywarning("address bits don't normally appear in Bytes 0 or 3 of SPI commands");
            break;
          case 'i':
            op->bit[bitno].type  = AVR_CMDBIT_INPUT;
            op->bit[bitno].value = 0;
            op->bit[bitno].bitno = bitno % 8;
            break;
          case 'o':
            op->bit[bitno].type  = AVR_CMDBIT_OUTPUT;
            op->bit[bitno].value = 0;
            op->bit[bitno].bitno = bitno % 8;
            break;
          case '.':
          case '-':
          case '_':
          case '/':
            break;
          default :
            yyerror("invalid bit specifier '%c'", *s);
            rv = -1;
            break;
        }
      } else {
        const char *errstr;
        int sb, bn = str_int(s+1, STR_INT32, &errstr); // Bit number
        if(errstr) {
          yywarning("bit number from %s: %s", s, errstr);
          bn = 0;
        } else if(strchr("io", *s) && (bn < 0 || bn > 7)) {
          bn &= 7;
          yywarning("out-of-range bit number %s mapped to %d", s, bn);
        }

        switch(*s) {
        case 'a':
          sb = opnum == AVR_OP_LOAD_EXT_ADDR? bitno+8: bitno-8; // should be this number
          if(bitno < 8 || bitno > 23) {
            if(!current_mem || !mem_is_sigrow(current_mem)) // Known exemption
              yywarning("address bits don't normally appear in Bytes 0 or 3 of SPI commands");
          } else if((bn & 31) != sb) {
            if(!current_part || !str_casestarts(current_part->desc, "AT89S5")) // Exempt AT89S5x
              if(!current_mem || !mem_is_sigrow(current_mem)) // and prodsig
                yywarning("a%d would normally be expected to be a%d", bn, sb);
          } else if(bn < 0 || bn > 31)
            yywarning("invalid address bit a%d, using a%d", bn, bn & 31);

          op->bit[bitno].bitno = bn & 31;
          op->bit[bitno].type = AVR_CMDBIT_ADDRESS;
          op->bit[bitno].value = 0;
          break;
        case 'o':
          op->bit[bitno].type  = AVR_CMDBIT_OUTPUT;
          op->bit[bitno].value = 0;
          op->bit[bitno].bitno = bn;
          break;
        case 'i':
          op->bit[bitno].type  = AVR_CMDBIT_INPUT;
          op->bit[bitno].value = 0;
          op->bit[bitno].bitno = bn;
          break;
        default:
          yyerror("invalid bit specifier %s", s);
          rv = -1;
          break;
        }
      }

      bit[0] = *cc++;
      s = !compact? strtok_r(NULL, " ", &brkt): *bit? bit: NULL;
    } /* while */

    free_token(t);

  }  /* while */

  if(bitno > 0)
    yywarning("too few opcode bits in instruction");

  return rv;
}
