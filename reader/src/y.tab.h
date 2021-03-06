/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    GRAPH = 259,
    NODE = 260,
    EDGE = 261,
    SUBGRAPH = 262,
    OBRACE = 263,
    EBRACE = 264,
    EDGEOP = 265,
    COMMA = 266,
    COLON = 267,
    SEMICOLON = 268,
    EQUALS = 269,
    LSBRACKET = 270,
    RSBRACKET = 271,
    PREPROCESSORLINE = 272,
    UNMATCHED = 273
  };
#endif
/* Tokens.  */
#define ID 258
#define GRAPH 259
#define NODE 260
#define EDGE 261
#define SUBGRAPH 262
#define OBRACE 263
#define EBRACE 264
#define EDGEOP 265
#define COMMA 266
#define COLON 267
#define SEMICOLON 268
#define EQUALS 269
#define LSBRACKET 270
#define RSBRACKET 271
#define PREPROCESSORLINE 272
#define UNMATCHED 273

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (void * scanner, GraphDataInterface *gdi);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
