/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IF = 258,                      /* IF  */
    INT = 259,                     /* INT  */
    RETURN = 260,                  /* RETURN  */
    MAIN = 261,                    /* MAIN  */
    VOID = 262,                    /* VOID  */
    WHILE = 263,                   /* WHILE  */
    FOR = 264,                     /* FOR  */
    DO = 265,                      /* DO  */
    BREAK = 266,                   /* BREAK  */
    ENDIF = 267,                   /* ENDIF  */
    id = 268,                      /* id  */
    array_id = 269,                /* array_id  */
    func_id = 270,                 /* func_id  */
    integer_constant = 271,        /* integer_constant  */
    string_constant = 272,         /* string_constant  */
    float_constant = 273,          /* float_constant  */
    character_constant = 274,      /* character_constant  */
    ELSE = 275,                    /* ELSE  */
    leftshift_asgn_op = 276,       /* leftshift_asgn_op  */
    rightshift_asgn_op = 277,      /* rightshift_asgn_op  */
    XOR_asgn_op = 278,             /* XOR_asgn_op  */
    OR_asgn_op = 279,              /* OR_asgn_op  */
    AND_asgn_op = 280,             /* AND_asgn_op  */
    modulo_asgn_op = 281,          /* modulo_asgn_op  */
    multiplication_asgn_op = 282,  /* multiplication_asgn_op  */
    division_asgn_op = 283,        /* division_asgn_op  */
    addition_asgn_op = 284,        /* addition_asgn_op  */
    subtraction_asgn_op = 285,     /* subtraction_asgn_op  */
    asgn_op = 286,                 /* asgn_op  */
    OR_op = 287,                   /* OR_op  */
    AND_op = 288,                  /* AND_op  */
    pipe_op = 289,                 /* pipe_op  */
    caret_op = 290,                /* caret_op  */
    amp_op = 291,                  /* amp_op  */
    equality_op = 292,             /* equality_op  */
    inequality_op = 293,           /* inequality_op  */
    lessthan_asgn_op = 294,        /* lessthan_asgn_op  */
    lessthan_op = 295,             /* lessthan_op  */
    greaterthan_asgn_op = 296,     /* greaterthan_asgn_op  */
    greaterthan_op = 297,          /* greaterthan_op  */
    leftshift_op = 298,            /* leftshift_op  */
    rightshift_op = 299,           /* rightshift_op  */
    add_op = 300,                  /* add_op  */
    subtract_op = 301,             /* subtract_op  */
    multiplication_op = 302,       /* multiplication_op  */
    division_op = 303,             /* division_op  */
    modulo_op = 304,               /* modulo_op  */
    tilde_op = 305,                /* tilde_op  */
    exclamation_op = 306,          /* exclamation_op  */
    increment_op = 307,            /* increment_op  */
    decrement_op = 308             /* decrement_op  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF 258
#define INT 259
#define RETURN 260
#define MAIN 261
#define VOID 262
#define WHILE 263
#define FOR 264
#define DO 265
#define BREAK 266
#define ENDIF 267
#define id 268
#define array_id 269
#define func_id 270
#define integer_constant 271
#define string_constant 272
#define float_constant 273
#define character_constant 274
#define ELSE 275
#define leftshift_asgn_op 276
#define rightshift_asgn_op 277
#define XOR_asgn_op 278
#define OR_asgn_op 279
#define AND_asgn_op 280
#define modulo_asgn_op 281
#define multiplication_asgn_op 282
#define division_asgn_op 283
#define addition_asgn_op 284
#define subtraction_asgn_op 285
#define asgn_op 286
#define OR_op 287
#define AND_op 288
#define pipe_op 289
#define caret_op 290
#define amp_op 291
#define equality_op 292
#define inequality_op 293
#define lessthan_asgn_op 294
#define lessthan_op 295
#define greaterthan_asgn_op 296
#define greaterthan_op 297
#define leftshift_op 298
#define rightshift_op 299
#define add_op 300
#define subtract_op 301
#define multiplication_op 302
#define division_op 303
#define modulo_op 304
#define tilde_op 305
#define exclamation_op 306
#define increment_op 307
#define decrement_op 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
