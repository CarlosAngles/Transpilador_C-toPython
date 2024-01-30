
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 6 "prog.y"

    int i;
    struct ast_node *n;
	char* s;
	float f;



/* Line 1676 of yacc.c  */
#line 100 "prog.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

extern YYLTYPE yylloc;

