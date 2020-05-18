/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 25 "parser.y" /* yacc.c:1909  */

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

#line 63 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.hpp" /* yacc.c:1909  */

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
#line 45 "parser.y" /* yacc.c:1909  */

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

#line 154 "/mnt/c/Users/johns/Desktop/CS-5300/compiler/bld/parser.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MNT_C_USERS_JOHNS_DESKTOP_CS_5300_COMPILER_BLD_PARSER_HPP_INCLUDED  */
