/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "parser.y" /* yacc.c:339  */

/***********************
*
* CPSL Parser
*
***********************/

/* This section will be placed into the c++ file */
#include <iostream>
#include <map>
#include <utility>
#include <vector> 


// #include "symbol_table.hpp"

extern int yylex();
extern int line_num;
void yyerror(const char*);



#line 89 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.hpp".  */
#ifndef YY_YY_MNT_C_USERS_JOHNS_DESKTOP_CS_5300_COMPILER_BLD_PARSER_HPP_INCLUDED
# define YY_YY_MNT_C_USERS_JOHNS_DESKTOP_CS_5300_COMPILER_BLD_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 25 "parser.y" /* yacc.c:355  */

    #include "./expressions/Expression.hpp"
    #include "./expressions/ExprMakers.hpp"
    #include "./statements/Statement.hpp"
    #include "./statements/StopStatement.hpp"
    #include "./nodes/BlockNode.hpp"
    #include "./nodes/BodyNode.hpp"
    #include "./types/Type.hpp"
    #include "./decls/ConstDecls.hpp"
    #include "./decls/Decls.hpp"
    #include "./nodes/ProgramNode.hpp"
    #include "./statements/WriteStatement.hpp"
    #include "./statements/ReadStatement.hpp"
    #include "./statements/ForStatement.hpp"
    #include "./statements/AssignmentStatement.hpp"
    #include "./statements/RepeatStatement.hpp"
    #include "./statements/WhileStatement.hpp"

#line 138 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ARRAY = 258,
    BEGIN_TOKEN = 259,
    CHR = 260,
    CONST = 261,
    DO = 262,
    DOWNTO = 263,
    ELSE = 264,
    ELSEIF = 265,
    END = 266,
    FOR = 267,
    FORWARD = 268,
    FUNCTION = 269,
    IF = 270,
    OF = 271,
    ORD = 272,
    PRED = 273,
    PROCEDURE = 274,
    READ = 275,
    RECORD = 276,
    REF = 277,
    REPEAT = 278,
    RETURN = 279,
    STOP = 280,
    SUCC = 281,
    THEN = 282,
    TO = 283,
    TYPE = 284,
    UNTIL = 285,
    VAR = 286,
    WHILE = 287,
    WRITE = 288,
    IDENTIFIER = 289,
    OPER_ADD = 290,
    OPER_SUB = 291,
    OPER_MUL = 292,
    OPER_DIV = 293,
    OPER_AND = 294,
    OPER_OR = 295,
    OPER_NOT = 296,
    OPER_EQ = 297,
    OPER_NEQ = 298,
    OPER_LT = 299,
    OPER_LEQ = 300,
    OPER_GT = 301,
    OPER_GEQ = 302,
    OPER_DOT = 303,
    OPER_COMMA = 304,
    OPER_COLON = 305,
    OPER_SEMICOLON = 306,
    OPER_LPAREN = 307,
    OPER_RPAREN = 308,
    OPER_LBRACKET = 309,
    OPER_RBRACKET = 310,
    OPER_ASSIGN = 311,
    OPER_MOD = 312,
    NUMBER = 313,
    CHAR = 314,
    STR = 315,
    UNMINUS = 316
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 45 "parser.y" /* yacc.c:355  */

    int val;
    char* id;
    std::vector<char*>* IdentList;
    char* string;
    char* chr;
    Expression* expr;
    std::vector<Expression*>* expressionList;
    Statement* statement;
    std::vector<Statement*>* statementSeq;
    BlockNode* blockNode;
    Type* type;
    std::vector<std::pair<std::string, Expression*>>* identExprListPairs;
    ConstDecls* constDecls;
    Node* node;

#line 229 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MNT_C_USERS_JOHNS_DESKTOP_CS_5300_COMPILER_BLD_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 246 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:358  */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   659

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  250

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   162,   162,   168,   169,   171,   172,   174,   175,   177,
     178,   179,   182,   184,   190,   197,   198,   201,   202,   205,
     206,   207,   208,   209,   212,   214,   216,   218,   219,   222,
     223,   224,   227,   228,   229,   230,   234,   241,   242,   254,
     274,   279,   284,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   305,   306,   307,   314,   315,   316,
     318,   319,   321,   322,   323,   324,   327,   329,   330,   332,
     333,   335,   336,   339,   340,   342,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   372,   373,   374
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ARRAY", "BEGIN_TOKEN", "CHR", "CONST",
  "DO", "DOWNTO", "ELSE", "ELSEIF", "END", "FOR", "FORWARD", "FUNCTION",
  "IF", "OF", "ORD", "PRED", "PROCEDURE", "READ", "RECORD", "REF",
  "REPEAT", "RETURN", "STOP", "SUCC", "THEN", "TO", "TYPE", "UNTIL", "VAR",
  "WHILE", "WRITE", "IDENTIFIER", "OPER_ADD", "OPER_SUB", "OPER_MUL",
  "OPER_DIV", "OPER_AND", "OPER_OR", "OPER_NOT", "OPER_EQ", "OPER_NEQ",
  "OPER_LT", "OPER_LEQ", "OPER_GT", "OPER_GEQ", "OPER_DOT", "OPER_COMMA",
  "OPER_COLON", "OPER_SEMICOLON", "OPER_LPAREN", "OPER_RPAREN",
  "OPER_LBRACKET", "OPER_RBRACKET", "OPER_ASSIGN", "OPER_MOD", "NUMBER",
  "CHAR", "STR", "UNMINUS", "$accept", "Program", "OptionalConstDecl",
  "OptionalTypeDecl", "OptionalVarDecl", "ProcOrFuncList", "ConstantDecl",
  "IdentExprList", "ProcDecl", "FuncDecl", "FormalParams", "Body", "Block",
  "TypeDecl", "IdentTypeList", "Type", "SimpleType", "RecordType",
  "ArrayType", "IdentList", "IdentListTypeList", "VarDecl", "StatementSeq",
  "Statement", "ReadStatement", "WriteStatement", "AssignmentStatement",
  "IfStatement", "ElseIfStatement", "ElseStatement", "WhileStatement",
  "RepeatStatement", "ForStatement", "StopStatement", "ReturnStatement",
  "LValueList", "ProcedureCall", "ExpressionList", "NullStatement",
  "Expression", "LValue", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316
};
# endif

#define YYPACT_NINF -135

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-135)))

#define YYTABLE_NINF -76

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-76)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,   -26,    22,    37,  -135,     9,    46,  -135,    48,    53,
    -135,   167,    41,    43,    54,  -135,  -135,    35,    38,    39,
      40,    55,   167,   167,   167,  -135,  -135,  -135,   336,   -43,
     167,    26,    44,    50,     2,   167,   167,   167,   167,    45,
     559,    -8,   359,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,  -135,   167,    72,   167,   382,
      57,    54,  -135,    58,  -135,  -135,  -135,    54,    26,   595,
      74,    79,  -135,  -135,    66,   405,   428,   451,   474,  -135,
     -46,   559,  -135,   593,   593,   602,   602,    75,  -135,   612,
     612,   612,   612,   612,   612,   602,  -135,   497,  -135,   167,
      68,   105,    85,  -135,    69,    90,   167,    76,   595,   167,
    -135,   167,    77,    78,   115,    80,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,    13,    81,    82,
    -135,  -135,  -135,  -135,  -135,   167,  -135,  -135,   520,    26,
    -135,    93,  -135,    54,    71,   296,   102,   109,   559,   195,
     167,   164,  -135,   295,   167,   -12,   -12,   559,   167,    89,
      26,  -135,   167,   595,  -135,     3,   -43,   167,   595,    19,
    -135,    21,  -135,   559,    54,    54,    24,    25,   536,    54,
      91,   259,   135,   102,  -135,   559,   136,  -135,  -135,    96,
      99,    -7,   100,   103,   137,  -135,    85,   167,   167,   167,
     142,   -43,  -135,    26,    26,    54,    54,    26,    17,    26,
    -135,   211,   236,   320,   595,   144,  -135,  -135,   106,   108,
     111,   116,    37,   117,  -135,   595,   595,   595,  -135,  -135,
      26,    26,    52,  -135,    53,  -135,   148,   155,   135,  -135,
    -135,   119,   120,   169,  -135,  -135,  -135,  -135,  -135,  -135
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     5,     4,     0,    12,     1,     0,     7,
       6,     0,     0,     0,     0,     9,     8,     0,     0,     0,
       0,   102,     0,     0,     0,    99,   101,   100,     0,    98,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
      90,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,     0,     0,     0,     0,
       0,    37,    32,     0,    29,    30,    31,     0,     0,    75,
       0,     0,    10,    11,     0,     0,     0,     0,     0,    92,
       0,    74,    91,    84,    85,    86,    87,    77,    76,    78,
      79,    82,    80,    83,    81,    88,   104,     0,    14,     0,
       0,     0,    27,    35,     0,     0,     0,     0,    75,    67,
      66,     0,     0,   102,     0,    41,    50,    51,    43,    44,
      45,    46,    47,    48,    49,    52,    53,     0,     0,     0,
       2,    94,    95,    96,    97,     0,    93,   103,     0,     0,
      33,     0,    26,    37,     0,     0,     0,     0,    68,     0,
       0,     0,    25,    42,     0,    19,    19,    73,     0,     0,
       0,    39,     0,    75,   102,     0,    70,     0,    75,     0,
      71,     0,    40,    56,     0,     0,     0,     0,     0,    37,
       0,     0,    58,     0,    54,    63,     0,    55,    72,     0,
       0,     0,     0,     0,     0,    38,    27,     0,     0,     0,
      60,    69,    62,     0,     0,     0,     0,     0,     3,     0,
      28,     0,     0,     0,    75,     0,    21,    20,     0,     0,
       0,     0,     5,     0,    34,    75,    75,    75,    61,    57,
       0,     0,     3,    15,     7,    16,     0,     0,    58,    23,
      22,     0,     0,     0,    65,    64,    59,    17,    18,    24
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -135,  -135,   177,   -44,   -55,  -135,  -135,  -135,  -135,  -135,
      27,   -52,   -57,  -135,    -2,   -66,  -135,  -135,  -135,   -14,
    -134,  -135,  -104,  -135,  -135,  -135,  -135,  -135,   -42,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,   -96,  -135,   -10,
     -51
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   222,     9,    15,    34,     4,     6,    72,    73,
     176,   223,    74,    10,   142,    63,    64,    65,    66,   100,
     101,    16,   114,   115,   116,   117,   118,   119,   200,   215,
     120,   121,   122,   123,   124,   165,   125,    80,   126,    81,
      29
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    28,   104,   135,   147,    57,    69,   136,     5,   161,
     174,    58,    40,    41,    42,   205,    70,     1,   127,   175,
      59,    71,     7,     1,   206,    75,    76,    77,    78,    60,
     221,    47,    48,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,   195,    95,    61,    97,   172,
      17,    11,   183,   103,   169,   171,   184,   127,     1,   182,
      62,    57,    18,    19,   186,   241,     8,    58,   135,   154,
     135,    20,   187,   159,   188,   191,   191,   192,   193,    21,
      12,    22,    13,    30,    14,    31,    23,    35,    32,   138,
      36,    37,    38,    67,   180,   166,   145,    24,    79,   148,
      68,   149,   127,    25,    26,    27,    96,    39,   128,   102,
     228,    99,   127,   129,   130,    48,   140,   127,   139,   141,
     143,   236,   237,   238,   144,   157,   152,   162,   146,   150,
     151,   153,   201,   155,   156,   160,   164,   216,   217,   167,
     179,   220,   196,   224,   173,   199,   203,   202,   178,   204,
     207,   214,   181,   209,   208,   229,   230,   185,   231,   244,
     189,   190,   232,   127,   239,   240,   245,   233,   235,    17,
     247,   248,    17,    69,   127,   127,   127,     3,   234,   243,
     242,    18,    19,   177,    18,    19,   249,   211,   212,   213,
      20,   218,   219,    20,   210,     0,   246,     0,    21,     0,
      22,    21,   168,    22,     0,    23,     0,     0,    23,     0,
       0,     0,     0,     0,     0,     0,    24,   170,   225,    24,
       0,     0,    25,    26,    27,    25,    26,    27,     0,     0,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,   226,     0,     0,    43,    44,    45,    46,
      47,    48,    56,    49,    50,    51,    52,    53,    54,     0,
       0,     0,     0,     0,     0,     0,     0,   197,    56,     0,
       0,    43,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,    53,    54,     0,     0,     0,   198,     0,     0,
       0,     0,     0,    56,    43,    44,    45,    46,    47,    48,
       0,    49,    50,    51,    52,    53,    54,   105,     0,     0,
     106,     0,     0,     0,     0,   107,    56,     0,   108,   109,
     110,     0,     0,   163,     0,     0,     0,   111,   112,   113,
       0,    43,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,    53,    54,     0,     0,   -75,   227,     0,     0,
       0,     0,     0,    56,     0,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,     0,     0,
       0,    43,    44,    45,    46,    47,    48,    56,    49,    50,
      51,    52,    53,    54,     0,     0,     0,    55,     0,     0,
       0,     0,     0,    56,    43,    44,    45,    46,    47,    48,
       0,    49,    50,    51,    52,    53,    54,     0,     0,     0,
       0,     0,    82,     0,     0,     0,    56,    43,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,    53,    54,
       0,     0,     0,    98,     0,     0,     0,     0,     0,    56,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,     0,     0,     0,     0,     0,   131,     0,
       0,     0,    56,    43,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,    53,    54,     0,     0,     0,     0,
       0,   132,     0,     0,     0,    56,    43,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,    53,    54,     0,
       0,     0,     0,     0,   133,     0,     0,     0,    56,    43,
      44,    45,    46,    47,    48,     0,    49,    50,    51,    52,
      53,    54,     0,     0,     0,     0,     0,   134,     0,     0,
       0,    56,    43,    44,    45,    46,    47,    48,     0,    49,
      50,    51,    52,    53,    54,     0,     0,     0,     0,     0,
       0,     0,   137,     0,    56,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,     0,     0,
     158,    43,    44,    45,    46,    47,    48,    56,    49,    50,
      51,    52,    53,    54,     0,     0,     0,     0,     0,     0,
       0,   194,     0,    56,    43,    44,    45,    46,    47,    48,
       0,    49,    50,    51,    52,    53,    54,   105,     0,     0,
     106,     0,     0,     0,     0,   107,    56,     0,   108,   109,
     110,     0,     0,     0,     0,     0,     0,   111,   112,   113,
      45,    46,    47,    48,     0,    49,    50,    51,    52,    53,
      54,    47,    48,     0,    49,    50,    51,    52,    53,    54,
      56,    47,    48,     0,   -76,   -76,   -76,   -76,   -76,   -76
};

static const yytype_int16 yycheck[] =
{
      14,    11,    68,    49,   108,    48,     4,    53,    34,   143,
      22,    54,    22,    23,    24,    22,    14,     6,    69,    31,
      30,    19,     0,     6,    31,    35,    36,    37,    38,     3,
      13,    39,    40,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,   179,    56,    21,    58,   153,
       5,    42,    49,    67,   150,   151,    53,   108,     6,   163,
      34,    48,    17,    18,   168,    13,    29,    54,    49,    56,
      49,    26,    53,   139,    53,    51,    51,    53,    53,    34,
      34,    36,    34,    42,    31,    42,    41,    52,    34,    99,
      52,    52,    52,    49,   160,   146,   106,    52,    53,   109,
      50,   111,   153,    58,    59,    60,    34,    52,    34,    51,
     214,    54,   163,    34,    48,    40,    11,   168,    50,    34,
      51,   225,   226,   227,    34,   135,    11,    56,    52,    52,
      52,    51,   183,    52,    52,    42,    34,   203,   204,    30,
      51,   207,    51,   209,   154,    10,    50,    11,   158,    50,
      50,     9,   162,    16,    51,    11,    50,   167,    50,    11,
     174,   175,    51,   214,   230,   231,    11,    51,    51,     5,
      51,    51,     5,     4,   225,   226,   227,     0,   222,   234,
     232,    17,    18,   156,    17,    18,   243,   197,   198,   199,
      26,   205,   206,    26,   196,    -1,   238,    -1,    34,    -1,
      36,    34,     7,    36,    -1,    41,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,     7,    52,
      -1,    -1,    58,    59,    60,    58,    59,    60,    -1,    -1,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    46,    47,     7,    -1,    -1,    35,    36,    37,    38,
      39,    40,    57,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,    57,    -1,
      -1,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    57,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    46,    47,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    20,    57,    -1,    23,    24,
      25,    -1,    -1,    27,    -1,    -1,    -1,    32,    33,    34,
      -1,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    46,    47,    -1,    -1,    51,    27,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    57,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    57,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    57,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    46,    47,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    57,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    57,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    57,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    57,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    57,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    46,    47,    -1,    -1,
      50,    35,    36,    37,    38,    39,    40,    57,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    57,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    46,    47,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    20,    57,    -1,    23,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    46,
      47,    39,    40,    -1,    42,    43,    44,    45,    46,    47,
      57,    39,    40,    -1,    42,    43,    44,    45,    46,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    63,    64,    68,    34,    69,     0,    29,    65,
      75,    42,    34,    34,    31,    66,    83,     5,    17,    18,
      26,    34,    36,    41,    52,    58,    59,    60,   101,   102,
      42,    42,    34,    81,    67,    52,    52,    52,    52,    52,
     101,   101,   101,    35,    36,    37,    38,    39,    40,    42,
      43,    44,    45,    46,    47,    51,    57,    48,    54,   101,
       3,    21,    34,    77,    78,    79,    80,    49,    50,     4,
      14,    19,    70,    71,    74,   101,   101,   101,   101,    53,
      99,   101,    53,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,    34,   101,    51,    54,
      81,    82,    51,    81,    77,    12,    15,    20,    23,    24,
      25,    32,    33,    34,    84,    85,    86,    87,    88,    89,
      92,    93,    94,    95,    96,    98,   100,   102,    34,    34,
      48,    53,    53,    53,    53,    49,    53,    55,   101,    50,
      11,    34,    76,    51,    34,   101,    52,    84,   101,   101,
      52,    52,    11,    51,    56,    52,    52,   101,    50,    77,
      42,    82,    56,    27,    34,    97,   102,    30,     7,    99,
      53,    99,    84,   101,    22,    31,    72,    72,   101,    51,
      77,   101,    84,    49,    53,   101,    84,    53,    53,    81,
      81,    51,    53,    53,    55,    82,    51,     8,    28,    10,
      90,   102,    11,    50,    50,    22,    31,    50,    51,    16,
      76,   101,   101,   101,     9,    91,    77,    77,    81,    81,
      77,    13,    64,    73,    77,     7,     7,    27,    84,    11,
      50,    50,    51,    51,    65,    51,    84,    84,    84,    77,
      77,    13,    73,    66,    11,    11,    90,    51,    51,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    64,    65,    65,    66,    66,    67,
      67,    67,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    72,    72,    72,    73,    74,    75,    76,    76,    77,
      77,    77,    78,    79,    80,    81,    81,    82,    82,    83,
      84,    84,    84,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    86,    87,    88,    89,    90,    90,
      91,    91,    92,    93,    94,    94,    95,    96,    96,    97,
      97,    98,    98,    99,    99,   100,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   102,   102,   102
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,     1,     0,     1,     0,     1,     0,
       2,     2,     2,     4,     5,     8,     8,    10,    10,     0,
       4,     4,     6,     6,     4,     3,     6,     0,     5,     1,
       1,     1,     1,     3,     8,     3,     1,     0,     5,     6,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     3,     7,     0,     5,
       0,     2,     5,     4,     9,     9,     1,     1,     2,     3,
       1,     3,     4,     3,     1,     0,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     3,     3,     4,     4,     4,     4,     4,     1,     1,
       1,     1,     1,     4,     3
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
#line 162 "parser.y" /* yacc.c:1646  */
    { 
    auto p = new ProgramNode((yyvsp[-5].constDecls), (yyvsp[-1].blockNode)); 
    p->emit();
    delete p;
  }
#line 1584 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 168 "parser.y" /* yacc.c:1646  */
    { (yyval.constDecls) = nullptr; }
#line 1590 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 169 "parser.y" /* yacc.c:1646  */
    { (yyval.constDecls) = (yyvsp[0].constDecls); }
#line 1596 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 171 "parser.y" /* yacc.c:1646  */
    {}
#line 1602 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 172 "parser.y" /* yacc.c:1646  */
    {}
#line 1608 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 174 "parser.y" /* yacc.c:1646  */
    {}
#line 1614 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 175 "parser.y" /* yacc.c:1646  */
    {}
#line 1620 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 177 "parser.y" /* yacc.c:1646  */
    {}
#line 1626 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 178 "parser.y" /* yacc.c:1646  */
    {}
#line 1632 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 179 "parser.y" /* yacc.c:1646  */
    {}
#line 1638 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 182 "parser.y" /* yacc.c:1646  */
    { (yyval.constDecls) = new ConstDecls((yyvsp[0].identExprListPairs)); }
#line 1644 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 184 "parser.y" /* yacc.c:1646  */
    { 
                  auto p = std::make_pair(std::string((yyvsp[-3].id)), (yyvsp[-1].expr));
                  auto v = new std::vector<std::pair<std::string, Expression*>>;
                  v->push_back(p);
                  (yyval.identExprListPairs) = v;
                }
#line 1655 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 190 "parser.y" /* yacc.c:1646  */
    { 
                  auto p = std::make_pair(std::string((yyvsp[-3].id)), (yyvsp[-1].expr));
                  (yyvsp[-4].identExprListPairs)->push_back(p);
                  (yyval.identExprListPairs) = (yyvsp[-4].identExprListPairs);
                }
#line 1665 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 197 "parser.y" /* yacc.c:1646  */
    {}
#line 1671 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 198 "parser.y" /* yacc.c:1646  */
    {}
#line 1677 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 201 "parser.y" /* yacc.c:1646  */
    {}
#line 1683 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 202 "parser.y" /* yacc.c:1646  */
    {}
#line 1689 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 205 "parser.y" /* yacc.c:1646  */
    {}
#line 1695 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 206 "parser.y" /* yacc.c:1646  */
    {}
#line 1701 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 207 "parser.y" /* yacc.c:1646  */
    {}
#line 1707 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 208 "parser.y" /* yacc.c:1646  */
    {}
#line 1713 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 209 "parser.y" /* yacc.c:1646  */
    {}
#line 1719 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 212 "parser.y" /* yacc.c:1646  */
    { (yyval.node) = new BodyNode((yyvsp[-3].constDecls), (yyvsp[0].blockNode)); }
#line 1725 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 214 "parser.y" /* yacc.c:1646  */
    { (yyval.blockNode) = new BlockNode((yyvsp[-1].statementSeq)); }
#line 1731 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 216 "parser.y" /* yacc.c:1646  */
    {symbol_table.placeTypeInScope((yyvsp[-4].id),(yyvsp[-2].type));}
#line 1737 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 218 "parser.y" /* yacc.c:1646  */
    {}
#line 1743 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 219 "parser.y" /* yacc.c:1646  */
    {symbol_table.placeTypeInScope((yyvsp[-4].id),(yyvsp[-2].type));}
#line 1749 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 222 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 1755 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 223 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = nullptr; }
#line 1761 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 224 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = nullptr; }
#line 1767 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 227 "parser.y" /* yacc.c:1646  */
    { (yyval.type) = symbol_table.lookupType((yyvsp[0].id)); }
#line 1773 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 228 "parser.y" /* yacc.c:1646  */
    {}
#line 1779 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 229 "parser.y" /* yacc.c:1646  */
    {}
#line 1785 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 230 "parser.y" /* yacc.c:1646  */
    {
                (yyvsp[0].IdentList)->push_back((yyvsp[-2].id));
                (yyval.IdentList) = (yyvsp[0].IdentList);
              }
#line 1794 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 234 "parser.y" /* yacc.c:1646  */
    {
                auto i = new std::vector<char*>; 
                i->push_back((yyvsp[0].id)); 
                (yyval.IdentList) = i; 
              }
#line 1804 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 241 "parser.y" /* yacc.c:1646  */
    {}
#line 1810 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 242 "parser.y" /* yacc.c:1646  */
    {
                    while(true){
                      if((yyvsp[-4].IdentList)->empty()) break;
                        char* x = (yyvsp[-4].IdentList)->back();
                        (yyvsp[-4].IdentList)->pop_back();
                        auto e = new LValExpr(x,1);
                        e->setType((yyvsp[-2].type));
                        symbol_table.storeIdentType(x,e);
                    }
                  }
#line 1825 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 254 "parser.y" /* yacc.c:1646  */
    {
                while(true){
                  if((yyvsp[-4].IdentList)->empty()) break;
                  char* x = (yyvsp[-4].IdentList)->back();
                  (yyvsp[-4].IdentList)->pop_back();
                  auto e = new LValExpr(x,1);
                  e->setType((yyvsp[-2].type));
                  symbol_table.storeIdentType(x,e);
                }
              // char* y = $2->back();
              // char* x = $2->front();
              //  auto e = new LValExpr(x,1);
              //  auto v = new LValExpr(y,1);
              //  e->setType($4);
              //  v->setType($4);
              //  std::cout << e->reg->getRegister() << e->getIdent() << std::endl;
              //  symbol_table.storeIdentType(x,e);
              //  symbol_table.storeIdentType(y,v);
            }
#line 1849 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 274 "parser.y" /* yacc.c:1646  */
    { 
                auto it = (yyvsp[0].statementSeq)->begin();
                (yyvsp[0].statementSeq)->insert(it,(yyvsp[-2].statement));
                (yyval.statementSeq) = (yyvsp[0].statementSeq);
               }
#line 1859 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 279 "parser.y" /* yacc.c:1646  */
    {
                auto v = new std::vector<Statement*>; 
                v->push_back((yyvsp[0].statement)); 
                (yyval.statementSeq) = v; 
              }
#line 1869 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 284 "parser.y" /* yacc.c:1646  */
    {
                auto v = new std::vector<Statement*>; 
                v->push_back((yyvsp[-1].statement)); 
                (yyval.statementSeq) = v; 
              }
#line 1879 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 292 "parser.y" /* yacc.c:1646  */
    {}
#line 1885 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 293 "parser.y" /* yacc.c:1646  */
    {}
#line 1891 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 294 "parser.y" /* yacc.c:1646  */
    {}
#line 1897 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 295 "parser.y" /* yacc.c:1646  */
    {}
#line 1903 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 296 "parser.y" /* yacc.c:1646  */
    {}
#line 1909 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 297 "parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 1915 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 298 "parser.y" /* yacc.c:1646  */
    {(yyval.statement) = nullptr;}
#line 1921 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 299 "parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 1927 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 300 "parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].statement); }
#line 1933 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 301 "parser.y" /* yacc.c:1646  */
    {(yyval.statement) = nullptr;}
#line 1939 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 302 "parser.y" /* yacc.c:1646  */
    {}
#line 1945 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 305 "parser.y" /* yacc.c:1646  */
    {(yyval.statement) = new ReadStatement((yyvsp[-1].expressionList));}
#line 1951 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 306 "parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new WriteStatement((yyvsp[-1].expressionList)); }
#line 1957 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 307 "parser.y" /* yacc.c:1646  */
    {
                      (yyval.statement) = new AssignmentStatement(dynamic_cast<LValExpr*>((yyvsp[-2].expr))->getIdent(),(yyvsp[0].expr));
                      //symbol_table.storeAssign(dynamic_cast<LValExpr*>($1)->getIdent(),$3);
                      // auto a = dynamic_cast<LValExpr*>($1);
                      // symbol_table.deleteItem(a->getIdent());
                      // symbol_table.storeAssign(a->getIdent(),$3);
                      }
#line 1969 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 314 "parser.y" /* yacc.c:1646  */
    {(yyval.statement) = nullptr;}
#line 1975 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 315 "parser.y" /* yacc.c:1646  */
    {}
#line 1981 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 316 "parser.y" /* yacc.c:1646  */
    {(yyval.statement) = nullptr;}
#line 1987 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 318 "parser.y" /* yacc.c:1646  */
    {}
#line 1993 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 319 "parser.y" /* yacc.c:1646  */
    {(yyval.statement) = nullptr;}
#line 1999 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 321 "parser.y" /* yacc.c:1646  */
    {(yyval.statement) = new WhileStatement((yyvsp[-3].expr),(yyvsp[-1].statementSeq));}
#line 2005 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 322 "parser.y" /* yacc.c:1646  */
    {(yyval.statement) = new RepeatStatement((yyvsp[-2].statementSeq),(yyvsp[0].expr));}
#line 2011 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 323 "parser.y" /* yacc.c:1646  */
    {(yyval.statement) = new ForStatement((yyvsp[-7].id),(yyvsp[-5].expr),(yyvsp[-3].expr),(yyvsp[-1].statementSeq), true);}
#line 2017 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 324 "parser.y" /* yacc.c:1646  */
    {(yyval.statement) = new ForStatement((yyvsp[-7].id),(yyvsp[-5].expr),(yyvsp[-3].expr),(yyvsp[-1].statementSeq), false);}
#line 2023 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 327 "parser.y" /* yacc.c:1646  */
    { (yyval.statement) = new StopStatement(); }
#line 2029 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 329 "parser.y" /* yacc.c:1646  */
    {}
#line 2035 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 330 "parser.y" /* yacc.c:1646  */
    {}
#line 2041 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 332 "parser.y" /* yacc.c:1646  */
    {(yyvsp[-2].expressionList)->push_back((yyvsp[0].expr)); (yyval.expressionList) = (yyvsp[-2].expressionList);}
#line 2047 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 333 "parser.y" /* yacc.c:1646  */
    {auto v = new std::vector<Expression*>; v->push_back((yyvsp[0].expr)); (yyval.expressionList) = v;}
#line 2053 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 335 "parser.y" /* yacc.c:1646  */
    {}
#line 2059 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 336 "parser.y" /* yacc.c:1646  */
    {}
#line 2065 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 339 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].expressionList)->push_back((yyvsp[0].expr)); (yyval.expressionList) = (yyvsp[-2].expressionList); }
#line 2071 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 340 "parser.y" /* yacc.c:1646  */
    { auto v = new std::vector<Expression*>; v->push_back((yyvsp[0].expr)); (yyval.expressionList) = v; }
#line 2077 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 342 "parser.y" /* yacc.c:1646  */
    {}
#line 2083 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 344 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = getOrExpr((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2089 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 345 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = getAndExpr((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2095 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 346 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = getEqExpr((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2101 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 347 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = getNeqExpr((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2107 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 348 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = getLeqExpr((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2113 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 349 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = getGeqExpr((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2119 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 350 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = getLtExpr((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2125 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 351 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = getGtExpr((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2131 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 352 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = getAddExpr((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2137 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 353 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = getSubExpr((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2143 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 354 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = getMulExpr((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2149 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 355 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = getDivExpr((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2155 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 356 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = getModExpr((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2161 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 357 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = getNotExpr((yyvsp[0].expr)); }
#line 2167 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 358 "parser.y" /* yacc.c:1646  */
    {(yyval.expr) = getUnminusExpr((yyvsp[0].expr)); }
#line 2173 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 359 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 2179 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 360 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 2185 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 361 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 2191 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 362 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = makeCharacterType((yyvsp[-1].expr)); }
#line 2197 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 363 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = makeIntegerType((yyvsp[-1].expr)); }
#line 2203 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 364 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = predValue((yyvsp[-1].expr)); }
#line 2209 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 365 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = succValue((yyvsp[-1].expr)); }
#line 2215 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 366 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2221 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 367 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new LiteralExpression((yyvsp[0].val), IntegerType::getInstance()); }
#line 2227 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 368 "parser.y" /* yacc.c:1646  */
    {(yyval.expr) = getStringLiteral((yyvsp[0].string)); }
#line 2233 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 369 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = getCharLiteral((yyvsp[0].chr)); }
#line 2239 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 372 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new LValExpr((yyvsp[0].id)); }
#line 2245 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 373 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) == nullptr; }
#line 2251 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 374 "parser.y" /* yacc.c:1646  */
    {(yyval.expr) = nullptr; }
#line 2257 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
    break;


#line 2261 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.cpp" /* yacc.c:1646  */
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
                  yystos[*yyssp], yyvsp);
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
#line 377 "parser.y" /* yacc.c:1906  */


void yyerror(const char* msg) 
{
    std::cerr << "ERROR on line " << line_num << " " << msg << std::endl;
}

const char* token_name(int t) {
  return yytname[YYTRANSLATE(t)];
}
