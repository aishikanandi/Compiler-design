/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "d.y"

	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>

	void yyerror(char* s);
	int params_count=0;
	int call_params_count=0;
	int top = 0,count=0,ltop=0,lno=0;
	char temp[3] = "t";
	int yylex();
	void ins();
	int check_decl(char*, char *);
	int check_params(char*);
	int duplicate(char *s);
	int checkarray(char*);
	void insV();
	int flag=0;
	#define ANSI_COLOR_RED		"\x1b[31m"
	#define ANSI_COLOR_GREEN	"\x1b[32m"
	#define ANSI_COLOR_CYAN		"\x1b[36m"
	void label3();
	void label4();
	void label5();
	void label6();
	#define ANSI_COLOR_RESET	"\x1b[0m"
	extern char curid[20];
	extern char curtype[20];
	extern char curval[20];
	extern int currnest;
	void deletedata (int );
	int checkscope(char*);
	char currfunc[100];
	char currfunccall[100];
	void insertSTF(char*);
	char gettype(char*,int);
	int check_id_is_func(char *);
	void insertST(char*, char*);
	void insertSTnest(char*, int);
	void insertSTparamscount(char*, int);
	int getSTparamscount(char*);
	int check_duplicate(char*);
	int check_decl(char*, char *);
	int check_params(char*);
	int duplicate(char *s);
	int checkarray(char*);
	char currfunctype[100];
	char currfunc[100];
	char currfunccall[100];
	void insertSTF(char*);
	char gettype(char*,int);
	char getfirst(char*);
	void push(char *s);
	void codegen();
	void codeassign();
	char* itoa(int num, char* str, int base);
	void reverse(char str[], int length);
	void swap(char*,char*);
	void label1();
	void label2();
	void genunary();
	void codegencon();
	void arggen();
	void callgen();

#line 137 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_RETURN = 5,                     /* RETURN  */
  YYSYMBOL_MAIN = 6,                       /* MAIN  */
  YYSYMBOL_VOID = 7,                       /* VOID  */
  YYSYMBOL_WHILE = 8,                      /* WHILE  */
  YYSYMBOL_FOR = 9,                        /* FOR  */
  YYSYMBOL_DO = 10,                        /* DO  */
  YYSYMBOL_BREAK = 11,                     /* BREAK  */
  YYSYMBOL_ENDIF = 12,                     /* ENDIF  */
  YYSYMBOL_id = 13,                        /* id  */
  YYSYMBOL_array_id = 14,                  /* array_id  */
  YYSYMBOL_func_id = 15,                   /* func_id  */
  YYSYMBOL_integer_constant = 16,          /* integer_constant  */
  YYSYMBOL_string_constant = 17,           /* string_constant  */
  YYSYMBOL_float_constant = 18,            /* float_constant  */
  YYSYMBOL_character_constant = 19,        /* character_constant  */
  YYSYMBOL_ELSE = 20,                      /* ELSE  */
  YYSYMBOL_leftshift_asgn_op = 21,         /* leftshift_asgn_op  */
  YYSYMBOL_rightshift_asgn_op = 22,        /* rightshift_asgn_op  */
  YYSYMBOL_XOR_asgn_op = 23,               /* XOR_asgn_op  */
  YYSYMBOL_OR_asgn_op = 24,                /* OR_asgn_op  */
  YYSYMBOL_AND_asgn_op = 25,               /* AND_asgn_op  */
  YYSYMBOL_modulo_asgn_op = 26,            /* modulo_asgn_op  */
  YYSYMBOL_multiplication_asgn_op = 27,    /* multiplication_asgn_op  */
  YYSYMBOL_division_asgn_op = 28,          /* division_asgn_op  */
  YYSYMBOL_addition_asgn_op = 29,          /* addition_asgn_op  */
  YYSYMBOL_subtraction_asgn_op = 30,       /* subtraction_asgn_op  */
  YYSYMBOL_asgn_op = 31,                   /* asgn_op  */
  YYSYMBOL_OR_op = 32,                     /* OR_op  */
  YYSYMBOL_AND_op = 33,                    /* AND_op  */
  YYSYMBOL_pipe_op = 34,                   /* pipe_op  */
  YYSYMBOL_caret_op = 35,                  /* caret_op  */
  YYSYMBOL_amp_op = 36,                    /* amp_op  */
  YYSYMBOL_equality_op = 37,               /* equality_op  */
  YYSYMBOL_inequality_op = 38,             /* inequality_op  */
  YYSYMBOL_lessthan_asgn_op = 39,          /* lessthan_asgn_op  */
  YYSYMBOL_lessthan_op = 40,               /* lessthan_op  */
  YYSYMBOL_greaterthan_asgn_op = 41,       /* greaterthan_asgn_op  */
  YYSYMBOL_greaterthan_op = 42,            /* greaterthan_op  */
  YYSYMBOL_leftshift_op = 43,              /* leftshift_op  */
  YYSYMBOL_rightshift_op = 44,             /* rightshift_op  */
  YYSYMBOL_add_op = 45,                    /* add_op  */
  YYSYMBOL_subtract_op = 46,               /* subtract_op  */
  YYSYMBOL_multiplication_op = 47,         /* multiplication_op  */
  YYSYMBOL_division_op = 48,               /* division_op  */
  YYSYMBOL_modulo_op = 49,                 /* modulo_op  */
  YYSYMBOL_tilde_op = 50,                  /* tilde_op  */
  YYSYMBOL_exclamation_op = 51,            /* exclamation_op  */
  YYSYMBOL_increment_op = 52,              /* increment_op  */
  YYSYMBOL_decrement_op = 53,              /* decrement_op  */
  YYSYMBOL_54_ = 54,                       /* ';'  */
  YYSYMBOL_55_ = 55,                       /* ','  */
  YYSYMBOL_56_ = 56,                       /* '['  */
  YYSYMBOL_57_ = 57,                       /* ']'  */
  YYSYMBOL_58_ = 58,                       /* '{'  */
  YYSYMBOL_59_ = 59,                       /* '}'  */
  YYSYMBOL_60_ = 60,                       /* '('  */
  YYSYMBOL_61_ = 61,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 62,                  /* $accept  */
  YYSYMBOL_program = 63,                   /* program  */
  YYSYMBOL_decl_list = 64,                 /* decl_list  */
  YYSYMBOL_65_1 = 65,                      /* $@1  */
  YYSYMBOL_decl = 66,                      /* decl  */
  YYSYMBOL_variable_decl = 67,             /* variable_decl  */
  YYSYMBOL_variable_decl_list = 68,        /* variable_decl_list  */
  YYSYMBOL_variable_decl_id = 69,          /* variable_decl_id  */
  YYSYMBOL_70_2 = 70,                      /* $@2  */
  YYSYMBOL_71_3 = 71,                      /* $@3  */
  YYSYMBOL_vdi = 72,                       /* vdi  */
  YYSYMBOL_id_array_type = 73,             /* id_array_type  */
  YYSYMBOL_initilization_params = 74,      /* initilization_params  */
  YYSYMBOL_initilization = 75,             /* initilization  */
  YYSYMBOL_type_specifier = 76,            /* type_specifier  */
  YYSYMBOL_statment_list = 77,             /* statment_list  */
  YYSYMBOL_stat = 78,                      /* stat  */
  YYSYMBOL_stat_middle = 79,               /* stat_middle  */
  YYSYMBOL_compound_stat = 80,             /* compound_stat  */
  YYSYMBOL_81_4 = 81,                      /* $@4  */
  YYSYMBOL_expression_statment = 82,       /* expression_statment  */
  YYSYMBOL_conditional_stats = 83,         /* conditional_stats  */
  YYSYMBOL_84_5 = 84,                      /* $@5  */
  YYSYMBOL_85_6 = 85,                      /* $@6  */
  YYSYMBOL_conditional_stats_breakup = 86, /* conditional_stats_breakup  */
  YYSYMBOL_iterative_stats = 87,           /* iterative_stats  */
  YYSYMBOL_88_7 = 88,                      /* $@7  */
  YYSYMBOL_89_8 = 89,                      /* $@8  */
  YYSYMBOL_90_9 = 90,                      /* $@9  */
  YYSYMBOL_91_10 = 91,                     /* $@10  */
  YYSYMBOL_92_11 = 92,                     /* $@11  */
  YYSYMBOL_93_12 = 93,                     /* $@12  */
  YYSYMBOL_break_stat = 94,                /* break_stat  */
  YYSYMBOL_string_initilization = 95,      /* string_initilization  */
  YYSYMBOL_array_initialization = 96,      /* array_initialization  */
  YYSYMBOL_array_int_decls = 97,           /* array_int_decls  */
  YYSYMBOL_array_int_decls_breakup = 98,   /* array_int_decls_breakup  */
  YYSYMBOL_expression = 99,                /* expression  */
  YYSYMBOL_100_13 = 100,                   /* $@13  */
  YYSYMBOL_101_14 = 101,                   /* $@14  */
  YYSYMBOL_102_15 = 102,                   /* $@15  */
  YYSYMBOL_103_16 = 103,                   /* $@16  */
  YYSYMBOL_104_17 = 104,                   /* $@17  */
  YYSYMBOL_105_18 = 105,                   /* $@18  */
  YYSYMBOL_simple_expression = 106,        /* simple_expression  */
  YYSYMBOL_107_19 = 107,                   /* @19  */
  YYSYMBOL_and_expression = 108,           /* and_expression  */
  YYSYMBOL_109_20 = 109,                   /* @20  */
  YYSYMBOL_unary_relation_expression = 110, /* unary_relation_expression  */
  YYSYMBOL_111_21 = 111,                   /* @21  */
  YYSYMBOL_regular_expression = 112,       /* regular_expression  */
  YYSYMBOL_relational_ops = 113,           /* relational_ops  */
  YYSYMBOL_sum_expression = 114,           /* sum_expression  */
  YYSYMBOL_sum_ops = 115,                  /* sum_ops  */
  YYSYMBOL_term = 116,                     /* term  */
  YYSYMBOL_MULOP = 117,                    /* MULOP  */
  YYSYMBOL_factor = 118,                   /* factor  */
  YYSYMBOL_mutable = 119,                  /* mutable  */
  YYSYMBOL_120_22 = 120,                   /* $@22  */
  YYSYMBOL_immutable = 121,                /* immutable  */
  YYSYMBOL_call = 122,                     /* call  */
  YYSYMBOL_123_23 = 123,                   /* $@23  */
  YYSYMBOL_arguments = 124,                /* arguments  */
  YYSYMBOL_arguments_list = 125,           /* arguments_list  */
  YYSYMBOL_exp = 126,                      /* exp  */
  YYSYMBOL_constant = 127                  /* constant  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_uint8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   185

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  182

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      60,    61,     2,     2,    55,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    54,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,    59,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   106,   106,   120,   120,   153,   157,   160,   172,   181,
     184,   184,   186,   186,   190,   190,   193,   203,   206,   207,
     210,   221,   222,   225,   228,   229,   232,   232,   233,   233,
     234,   235,   235,   238,   238,   243,   246,   246,   246,   249,
     250,   253,   253,   253,   254,   254,   254,   255,   255,   255,
     256,   259,   262,   265,   268,   269,   272,   272,   273,   273,
     274,   274,   275,   275,   276,   276,   277,   277,   278,   279,
     280,   284,   284,   285,   288,   288,   289,   293,   293,   294,
     297,   298,   301,   301,   301,   301,   301,   301,   304,   305,
     308,   309,   312,   313,   316,   316,   316,   319,   320,   323,
     334,   334,   342,   343,   344,   347,   347,   369,   369,   372,
     373,   375,   375,   375,   375,   375,   378,   379,   380,   381
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IF", "INT", "RETURN",
  "MAIN", "VOID", "WHILE", "FOR", "DO", "BREAK", "ENDIF", "id", "array_id",
  "func_id", "integer_constant", "string_constant", "float_constant",
  "character_constant", "ELSE", "leftshift_asgn_op", "rightshift_asgn_op",
  "XOR_asgn_op", "OR_asgn_op", "AND_asgn_op", "modulo_asgn_op",
  "multiplication_asgn_op", "division_asgn_op", "addition_asgn_op",
  "subtraction_asgn_op", "asgn_op", "OR_op", "AND_op", "pipe_op",
  "caret_op", "amp_op", "equality_op", "inequality_op", "lessthan_asgn_op",
  "lessthan_op", "greaterthan_asgn_op", "greaterthan_op", "leftshift_op",
  "rightshift_op", "add_op", "subtract_op", "multiplication_op",
  "division_op", "modulo_op", "tilde_op", "exclamation_op", "increment_op",
  "decrement_op", "';'", "','", "'['", "']'", "'{'", "'}'", "'('", "')'",
  "$accept", "program", "decl_list", "$@1", "decl", "variable_decl",
  "variable_decl_list", "variable_decl_id", "$@2", "$@3", "vdi",
  "id_array_type", "initilization_params", "initilization",
  "type_specifier", "statment_list", "stat", "stat_middle",
  "compound_stat", "$@4", "expression_statment", "conditional_stats",
  "$@5", "$@6", "conditional_stats_breakup", "iterative_stats", "$@7",
  "$@8", "$@9", "$@10", "$@11", "$@12", "break_stat",
  "string_initilization", "array_initialization", "array_int_decls",
  "array_int_decls_breakup", "expression", "$@13", "$@14", "$@15", "$@16",
  "$@17", "$@18", "simple_expression", "@19", "and_expression", "@20",
  "unary_relation_expression", "@21", "regular_expression",
  "relational_ops", "sum_expression", "sum_ops", "term", "MULOP", "factor",
  "mutable", "$@22", "immutable", "call", "$@23", "arguments",
  "arguments_list", "exp", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-55)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-48)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,   -54,   -55,   -28,   -10,   -37,     2,   -55,   -55,   -55,
     -55,   -55,   -55,    20,    52,   -55,   -55,   -55,    13,   -55,
      51,   -55,    11,   -55,   -55,   -55,    58,   -55,    16,    40,
      48,   -55,   123,    21,    -4,   -55,    77,   -55,   -55,   -55,
      20,   -55,    20,   -55,   -55,    26,    20,    25,   -55,     5,
     -55,   -55,     4,   -55,   -55,   108,     5,   125,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,    60,   -55,   -55,
      60,   -55,   -55,   -55,    60,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -21,   -55,    20,    33,   132,    20,   -55,
     -55,   -55,   -26,   -26,   -55,    13,   -55,    29,    81,    20,
      20,    21,    -4,   -55,    20,    20,    20,    20,    20,    20,
     -55,   -12,   -55,   -55,   -55,   -55,   -55,   -55,    37,    35,
     -55,    42,    20,    -6,   -55,   -55,   -55,   -55,   -55,    54,
      48,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   125,   -55,
      20,   -55,   132,   -55,    40,    43,    84,   -55,    20,   -55,
     125,    10,   -55,   100,    95,   -55,    -7,   112,   -55,   -55,
      -5,   -55,   -55,   -55,   -55,   -55,   125,   -55,    20,   121,
      86,   -55,    85,    92,    93,   -55,   125,   121,   -55,   -55,
     -55,   -55
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      25,     0,    23,     0,     0,     0,    99,   100,   116,   117,
     118,   119,    77,     0,     0,     2,     3,     6,     0,     5,
      32,    27,     0,    26,    28,    29,     0,    30,     0,    70,
      73,    76,    79,    81,    89,    93,    98,    97,   103,   104,
       0,    41,     0,    50,   105,     0,     0,     0,     1,    25,
      10,    12,     0,     9,    31,    25,    25,    33,    35,    71,
      74,    86,    87,    83,    85,    82,    84,     0,    90,    91,
       0,    94,    95,    96,     0,    66,    62,    64,    58,    60,
      56,    68,    69,     0,    98,     0,     0,   108,     0,    78,
     102,     4,    17,    17,     7,     0,    24,     0,     0,     0,
       0,    80,    88,    92,     0,     0,     0,     0,     0,     0,
      36,     0,    44,   111,   112,   113,   114,   115,     0,   107,
     110,     0,     0,     0,    11,    14,    13,     8,    34,     0,
      72,    75,    67,    63,    65,    59,    61,    57,    33,    42,
       0,   106,     0,   101,    15,     0,     0,    16,     0,    37,
      33,     0,   109,    22,     0,    19,     0,    40,    43,    45,
       0,    18,    20,    21,    51,    48,    33,    38,     0,     0,
       0,    39,     0,    55,     0,    49,    33,     0,    53,    52,
      46,    54
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -55,   -55,    -8,   -55,   -55,   133,   -55,    59,   -55,   -55,
      63,   -55,   -55,   -55,   -55,   102,   -53,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,    14,   -55,   -19,   -55,   -13,   -55,   -55,
     -55,   -55,   -55,   -55,   -38,   -55,    70,   -55,   -43,   -55,
     -55,   -55,   103,   -55,   101,   -55,    98,   -39,   -55,   -55,
     -55,   -55,   -55,   -55,    31,   -55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    14,    15,    49,    16,    17,    52,    53,    92,    93,
     124,   125,   147,   161,    18,    19,    20,    55,    21,    22,
      23,    24,   138,   157,   167,    25,    85,   150,   140,   168,
      26,   170,    27,   155,   163,   174,   178,    28,   109,   107,
     108,   105,   106,   104,    29,    99,    30,   100,    31,    46,
      32,    67,    33,    70,    34,    74,    35,    36,    45,    37,
      38,    87,   118,   119,   120,    39
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,    84,    83,    89,    98,   122,    40,    84,     1,     2,
     145,    59,   164,     3,     4,   -47,     5,    43,     6,     7,
      59,     8,     9,    10,    11,    59,    50,    51,    84,    86,
     123,    84,    41,     6,     7,    84,     8,     9,    10,    11,
     110,    91,    59,    71,    72,    73,    84,   111,    97,   139,
      42,   146,    48,   169,   165,     2,    12,   131,    94,    95,
      84,    84,    44,   -33,   159,    13,    68,    69,    57,    56,
      58,    12,    59,     6,     7,   121,     8,     9,    10,    11,
      13,    60,    88,    84,   144,   149,    90,   112,   128,   129,
     142,   132,   133,   134,   135,   136,   137,   158,   141,   143,
     153,    84,   151,    75,    76,    77,    78,    79,    80,    84,
     156,     1,   164,   171,   148,   154,     3,     4,   -47,     5,
      13,     6,     7,   180,     8,     9,    10,    11,     1,    81,
      82,   160,   166,     3,     4,   -47,     5,   173,     6,     7,
     175,     8,     9,    10,    11,   113,   176,   177,   114,   115,
     116,   117,   179,    54,   127,   172,   126,    96,   181,    12,
      61,    62,    63,    64,    65,    66,   -33,   162,    13,   130,
     101,   102,   103,   152,     0,     0,    12,     0,     0,     0,
       0,     0,     0,     0,     0,    13
};

static const yytype_int16 yycheck[] =
{
      13,    40,    40,    46,    57,    31,    60,    46,     3,     4,
      16,    32,    17,     8,     9,    10,    11,    54,    13,    14,
      32,    16,    17,    18,    19,    32,    13,    14,    67,    42,
      56,    70,    60,    13,    14,    74,    16,    17,    18,    19,
      61,    49,    32,    47,    48,    49,    85,    85,    56,    61,
      60,    57,     0,    58,    61,     4,    51,   100,    54,    55,
      99,   100,    60,    58,    54,    60,    45,    46,    10,    58,
      54,    51,    32,    13,    14,    88,    16,    17,    18,    19,
      60,    33,    56,   122,   122,   138,    61,    54,    59,     8,
      55,   104,   105,   106,   107,   108,   109,   150,    61,    57,
      57,   140,   140,    26,    27,    28,    29,    30,    31,   148,
     148,     3,    17,   166,    60,    31,     8,     9,    10,    11,
      60,    13,    14,   176,    16,    17,    18,    19,     3,    52,
      53,    31,    20,     8,     9,    10,    11,    16,    13,    14,
      54,    16,    17,    18,    19,    13,    61,    55,    16,    17,
      18,    19,    59,    20,    95,   168,    93,    55,   177,    51,
      37,    38,    39,    40,    41,    42,    58,   153,    60,    99,
      67,    70,    74,   142,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     8,     9,    11,    13,    14,    16,    17,
      18,    19,    51,    60,    63,    64,    66,    67,    76,    77,
      78,    80,    81,    82,    83,    87,    92,    94,    99,   106,
     108,   110,   112,   114,   116,   118,   119,   121,   122,   127,
      60,    60,    60,    54,    60,   120,   111,    99,     0,    65,
      13,    14,    68,    69,    67,    79,    58,    10,    54,    32,
      33,    37,    38,    39,    40,    41,    42,   113,    45,    46,
     115,    47,    48,    49,   117,    26,    27,    28,    29,    30,
      31,    52,    53,   106,   119,    88,    99,   123,    56,   110,
      61,    64,    70,    71,    54,    55,    77,    64,    78,   107,
     109,   114,   116,   118,   105,   103,   104,   101,   102,   100,
      61,   106,    54,    13,    16,    17,    18,    19,   124,   125,
     126,    99,    31,    56,    72,    73,    72,    69,    59,     8,
     108,   110,    99,    99,    99,    99,    99,    99,    84,    61,
      90,    61,    55,    57,   106,    16,    57,    74,    60,    78,
      89,   106,   126,    57,    31,    95,   106,    85,    78,    54,
      31,    75,    95,    96,    17,    61,    20,    86,    91,    58,
      93,    78,    99,    16,    97,    54,    61,    55,    98,    59,
      78,    97
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    65,    64,    64,    66,    67,    68,    68,
      70,    69,    71,    69,    72,    72,    73,    73,    74,    74,
      75,    75,    75,    76,    77,    77,    78,    78,    78,    78,
      78,    79,    79,    81,    80,    82,    84,    85,    83,    86,
      86,    88,    89,    87,    90,    91,    87,    92,    93,    87,
      94,    95,    96,    97,    98,    98,   100,    99,   101,    99,
     102,    99,   103,    99,   104,    99,   105,    99,    99,    99,
      99,   107,   106,   106,   109,   108,   108,   111,   110,   110,
     112,   112,   113,   113,   113,   113,   113,   113,   114,   114,
     115,   115,   116,   116,   117,   117,   117,   118,   118,   119,
     120,   119,   121,   121,   121,   123,   122,   124,   124,   125,
     125,   126,   126,   126,   126,   126,   127,   127,   127,   127
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     3,     1,     1,     3,     3,     1,
       0,     3,     0,     3,     1,     2,     2,     0,     3,     2,
       1,     1,     0,     1,     3,     0,     1,     1,     1,     1,
       1,     1,     0,     0,     4,     2,     0,     0,     8,     2,
       0,     0,     0,     7,     0,     0,    11,     0,     0,     9,
       2,     2,     4,     2,     2,     0,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     2,     2,
       1,     0,     4,     1,     0,     4,     1,     0,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       0,     5,     3,     1,     1,     0,     5,     1,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* program: decl_list  */
#line 106 "d.y"
                                   {

				int j;
				int x=10;
				for (j=0;j<10000;j++){
					x+=j;
				}
				for (j=100001;j>=0;j--){
					x-=j;
				}

			}
#line 1558 "y.tab.c"
    break;

  case 3: /* $@1: %empty  */
#line 120 "d.y"
                              {
			int j;
			int x=10;
			for (j=0;j<10000;j++){
				x+=j;
			}
			for (j=100001;j>=0;j--){
				x-=j;
			}
			for (j=0;j<10000;j++){
				x+=j;
			}
			for (j=100001;j>=0;j--){
				x-=j;
			}
			for (j=0;j<10000;j++){
				x+=j;
			}
			for (j=100001;j>=0;j--){
				x-=j;
			}
			for (j=0;j<10000;j++){
				x+=j;
			}
			for (j=100001;j>=0;j--){
				x-=j;
			}
			for (j=0;j<10000;j++){
				x+=j;
			}
			for (j=100001;j>=0;j--){
				x-=j;
			}
			}
#line 1597 "y.tab.c"
    break;

  case 7: /* variable_decl: type_specifier variable_decl_list ';'  */
#line 160 "d.y"
                                                               {
			int j;
			int x=10;
			for (j=0;j<10000;j++){
				x+=j;
			}
			for (j=100001;j>=0;j--){
				x-=j;
			}
			}
#line 1612 "y.tab.c"
    break;

  case 8: /* variable_decl_list: variable_decl_list ',' variable_decl_id  */
#line 172 "d.y"
                                                                 {
			int j;
			int x=10;
			for (j=0;j<10000;j++){
				x+=j;
			}
			for (j=100001;j>=0;j--){
				x-=j;
			}
			}
#line 1627 "y.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 184 "d.y"
                             {if(duplicate(curid)){printf("Error! Redecl of varaiable\n");exit(0);}insertSTnest(curid,currnest); ins();
			}
#line 1634 "y.tab.c"
    break;

  case 12: /* $@3: %empty  */
#line 186 "d.y"
                                     {if(duplicate(curid)){printf("Error! Redeclared a variable.\n");exit(0);}insertSTnest(curid,currnest); ins();  }
#line 1640 "y.tab.c"
    break;

  case 16: /* id_array_type: '[' initilization_params  */
#line 193 "d.y"
                                                  {
			int j;
			int x=10;
			for (j=0;j<10000;j++){
				x+=j;
			}
			for (j=100001;j>=0;j--){
				x-=j;
			}
			}
#line 1655 "y.tab.c"
    break;

  case 18: /* initilization_params: integer_constant ']' initilization  */
#line 206 "d.y"
                                                             {if(yyval < 1) {printf("Error! in Array Size.\n"); exit(0);} }
#line 1661 "y.tab.c"
    break;

  case 20: /* initilization: string_initilization  */
#line 211 "d.y"
                        {
			int j;
			int x=10;
			for (j=0;j<10000;j++){
				x+=j;
			}
			for (j=100001;j>=0;j--){
				x-=j;
			}
			}
#line 1676 "y.tab.c"
    break;

  case 33: /* $@4: %empty  */
#line 238 "d.y"
                          {currnest++;}
#line 1682 "y.tab.c"
    break;

  case 34: /* compound_stat: $@4 '{' decl_list '}'  */
#line 238 "d.y"
                                                            {deletedata(currnest);currnest--;}
#line 1688 "y.tab.c"
    break;

  case 36: /* $@5: %empty  */
#line 246 "d.y"
                                                       {label1();}
#line 1694 "y.tab.c"
    break;

  case 37: /* $@6: %empty  */
#line 246 "d.y"
                                                                        {label2();}
#line 1700 "y.tab.c"
    break;

  case 39: /* conditional_stats_breakup: ELSE stat  */
#line 249 "d.y"
                                    {label3();}
#line 1706 "y.tab.c"
    break;

  case 40: /* conditional_stats_breakup: %empty  */
#line 250 "d.y"
                          {label3();}
#line 1712 "y.tab.c"
    break;

  case 41: /* $@7: %empty  */
#line 253 "d.y"
                                    {label4();}
#line 1718 "y.tab.c"
    break;

  case 42: /* $@8: %empty  */
#line 253 "d.y"
                                                                      {label1();}
#line 1724 "y.tab.c"
    break;

  case 43: /* iterative_stats: WHILE '(' $@7 simple_expression ')' $@8 stat  */
#line 253 "d.y"
                                                                                       {label5();}
#line 1730 "y.tab.c"
    break;

  case 44: /* $@9: %empty  */
#line 254 "d.y"
                                                 {label4();}
#line 1736 "y.tab.c"
    break;

  case 45: /* $@10: %empty  */
#line 254 "d.y"
                                                                                   {label1();}
#line 1742 "y.tab.c"
    break;

  case 46: /* iterative_stats: FOR '(' expression ';' $@9 simple_expression ';' $@10 expression ')' stat  */
#line 254 "d.y"
                                                                                                                  {label5();}
#line 1748 "y.tab.c"
    break;

  case 47: /* $@11: %empty  */
#line 255 "d.y"
                          {label4();}
#line 1754 "y.tab.c"
    break;

  case 48: /* $@12: %empty  */
#line 255 "d.y"
                                                                            {label1();label5();}
#line 1760 "y.tab.c"
    break;

  case 51: /* string_initilization: asgn_op string_constant  */
#line 259 "d.y"
                                                  {insV();}
#line 1766 "y.tab.c"
    break;

  case 56: /* $@13: %empty  */
#line 272 "d.y"
                                          {push("=");}
#line 1772 "y.tab.c"
    break;

  case 57: /* expression: mutable asgn_op $@13 expression  */
#line 272 "d.y"
                                                                 {yyval=1;codeassign();}
#line 1778 "y.tab.c"
    break;

  case 58: /* $@14: %empty  */
#line 273 "d.y"
                                                   {push("+=");}
#line 1784 "y.tab.c"
    break;

  case 59: /* expression: mutable addition_asgn_op $@14 expression  */
#line 273 "d.y"
                                                                          {yyval=1;codeassign();}
#line 1790 "y.tab.c"
    break;

  case 60: /* $@15: %empty  */
#line 274 "d.y"
                                                      {push("-=");}
#line 1796 "y.tab.c"
    break;

  case 61: /* expression: mutable subtraction_asgn_op $@15 expression  */
#line 274 "d.y"
                                                                              {yyval=1;codeassign();}
#line 1802 "y.tab.c"
    break;

  case 62: /* $@16: %empty  */
#line 275 "d.y"
                                                         {push("*=");}
#line 1808 "y.tab.c"
    break;

  case 63: /* expression: mutable multiplication_asgn_op $@16 expression  */
#line 275 "d.y"
                                                                                 {yyval=1;codeassign();}
#line 1814 "y.tab.c"
    break;

  case 64: /* $@17: %empty  */
#line 276 "d.y"
                                                   {push("/=");}
#line 1820 "y.tab.c"
    break;

  case 65: /* expression: mutable division_asgn_op $@17 expression  */
#line 276 "d.y"
                                                                          {yyval=1;codeassign();}
#line 1826 "y.tab.c"
    break;

  case 66: /* $@18: %empty  */
#line 277 "d.y"
                                                 {push("%=");}
#line 1832 "y.tab.c"
    break;

  case 67: /* expression: mutable modulo_asgn_op $@18 expression  */
#line 277 "d.y"
                                                                        {yyval=1;codeassign();}
#line 1838 "y.tab.c"
    break;

  case 68: /* expression: mutable increment_op  */
#line 278 "d.y"
                                                                                                { push("++");yyval=1;  genunary();}
#line 1844 "y.tab.c"
    break;

  case 69: /* expression: mutable decrement_op  */
#line 279 "d.y"
                                                                                                        {push("--");yyval=1;}
#line 1850 "y.tab.c"
    break;

  case 70: /* expression: simple_expression  */
#line 280 "d.y"
                                            { yyval=1;}
#line 1856 "y.tab.c"
    break;

  case 71: /* @19: %empty  */
#line 284 "d.y"
                                                  {push("||");}
#line 1862 "y.tab.c"
    break;

  case 72: /* simple_expression: simple_expression OR_op @19 and_expression  */
#line 284 "d.y"
                                                                                {if(yyvsp[-3] == 1 && yyvsp[-1]==1) yyval=1; else yyval=-1; codegen();}
#line 1868 "y.tab.c"
    break;

  case 73: /* simple_expression: and_expression  */
#line 285 "d.y"
                                         {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1874 "y.tab.c"
    break;

  case 74: /* @20: %empty  */
#line 288 "d.y"
                                                {push("&&");}
#line 1880 "y.tab.c"
    break;

  case 75: /* and_expression: and_expression AND_op @20 unary_relation_expression  */
#line 288 "d.y"
                                                                                         {if(yyvsp[-3] == 1 && yyvsp[-1]==1) yyval=1; else yyval=-1; codegen();}
#line 1886 "y.tab.c"
    break;

  case 76: /* and_expression: unary_relation_expression  */
#line 289 "d.y"
                                                     {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1892 "y.tab.c"
    break;

  case 77: /* @21: %empty  */
#line 293 "d.y"
                                         {push("!");}
#line 1898 "y.tab.c"
    break;

  case 78: /* unary_relation_expression: exclamation_op @21 unary_relation_expression  */
#line 293 "d.y"
                                                                                {if(yyvsp[-1]==1) yyval=1; else yyval=-1; codegen();}
#line 1904 "y.tab.c"
    break;

  case 79: /* unary_relation_expression: regular_expression  */
#line 294 "d.y"
                                             {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1910 "y.tab.c"
    break;

  case 80: /* regular_expression: regular_expression relational_ops sum_expression  */
#line 297 "d.y"
                                                                           {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1; codegen();}
#line 1916 "y.tab.c"
    break;

  case 81: /* regular_expression: sum_expression  */
#line 298 "d.y"
                                           {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1922 "y.tab.c"
    break;

  case 82: /* relational_ops: greaterthan_asgn_op  */
#line 301 "d.y"
                                              {push(">=");}
#line 1928 "y.tab.c"
    break;

  case 83: /* relational_ops: lessthan_asgn_op  */
#line 301 "d.y"
                                                                               {push("<=");}
#line 1934 "y.tab.c"
    break;

  case 84: /* relational_ops: greaterthan_op  */
#line 301 "d.y"
                                                                                                              {push(">");}
#line 1940 "y.tab.c"
    break;

  case 85: /* relational_ops: lessthan_op  */
#line 301 "d.y"
                                                                                                                                        {push("<");}
#line 1946 "y.tab.c"
    break;

  case 86: /* relational_ops: equality_op  */
#line 301 "d.y"
                                                                                                                                                                  {push("==");}
#line 1952 "y.tab.c"
    break;

  case 87: /* relational_ops: inequality_op  */
#line 301 "d.y"
                                                                                                                                                                                               {push("!=");}
#line 1958 "y.tab.c"
    break;

  case 88: /* sum_expression: sum_expression sum_ops term  */
#line 304 "d.y"
                                                       {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1; codegen();}
#line 1964 "y.tab.c"
    break;

  case 89: /* sum_expression: term  */
#line 305 "d.y"
                               {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1970 "y.tab.c"
    break;

  case 90: /* sum_ops: add_op  */
#line 308 "d.y"
                                 {push("+");}
#line 1976 "y.tab.c"
    break;

  case 91: /* sum_ops: subtract_op  */
#line 309 "d.y"
                                      {push("-");}
#line 1982 "y.tab.c"
    break;

  case 92: /* term: term MULOP factor  */
#line 312 "d.y"
                                            {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1; codegen();}
#line 1988 "y.tab.c"
    break;

  case 93: /* term: factor  */
#line 313 "d.y"
                                 {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1994 "y.tab.c"
    break;

  case 94: /* MULOP: multiplication_op  */
#line 316 "d.y"
                                            {push("*");}
#line 2000 "y.tab.c"
    break;

  case 95: /* MULOP: division_op  */
#line 316 "d.y"
                                                                      {push("/");}
#line 2006 "y.tab.c"
    break;

  case 96: /* MULOP: modulo_op  */
#line 316 "d.y"
                                                                                               {push("%");}
#line 2012 "y.tab.c"
    break;

  case 97: /* factor: immutable  */
#line 319 "d.y"
                                    {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2018 "y.tab.c"
    break;

  case 98: /* factor: mutable  */
#line 320 "d.y"
                                  {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2024 "y.tab.c"
    break;

  case 99: /* mutable: id  */
#line 323 "d.y"
                             {
						  push(curid);
						 
			              if(!checkscope(curid))
			              {printf("%s\n",curid);printf("Error! use of undeclared value.\n");exit(0);}
			              if(!checkarray(curid))
			              {printf("%s\n",curid);printf("Array ID has no subscript\n");exit(0);}
						
			          
						
			              }
#line 2040 "y.tab.c"
    break;

  case 100: /* $@22: %empty  */
#line 334 "d.y"
                                   {if(!checkscope(curid)){printf("%s\n",curid);printf("Error! use of undeclared value.\n");exit(0);}}
#line 2046 "y.tab.c"
    break;

  case 101: /* mutable: array_id $@22 '[' expression ']'  */
#line 335 "d.y"
                                           {if(gettype(curid,0)=="int" || gettype(curid,1)== "double")
			              		yyval = 1;
			              		else
			              		yyval = -1;
			              		}
#line 2056 "y.tab.c"
    break;

  case 102: /* immutable: '(' expression ')'  */
#line 342 "d.y"
                                             {if(yyvsp[-1]==1) yyval=1; else yyval=-1;}
#line 2062 "y.tab.c"
    break;

  case 103: /* immutable: call  */
#line 343 "d.y"
                               {if(yyvsp[0]==-1) yyval=-1; else yyval=1;}
#line 2068 "y.tab.c"
    break;

  case 104: /* immutable: constant  */
#line 344 "d.y"
                                   {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 2074 "y.tab.c"
    break;

  case 105: /* $@23: %empty  */
#line 347 "d.y"
                                {

			             if(!check_decl(curid, "Function"))
			             { printf("Error! use of undeclared value."); exit(0);}
			             insertSTF(curid);
						 strcpy(currfunccall,curid);
					
                         call_params_count=0;
			             }
#line 2088 "y.tab.c"
    break;

  case 106: /* call: id '(' $@23 arguments ')'  */
#line 357 "d.y"
                                                 { if(strcmp(currfunccall,"printf"))
							{
								if(getSTparamscount(currfunccall)!=call_params_count)
								{
									yyerror("Number of arguments in function call doesn't match number of parameters");
									exit(8);
								}
							}
							callgen();
						 }
#line 2103 "y.tab.c"
    break;

  case 109: /* arguments_list: arguments_list ',' exp  */
#line 372 "d.y"
                                                 { call_params_count++; }
#line 2109 "y.tab.c"
    break;

  case 110: /* arguments_list: exp  */
#line 373 "d.y"
                              { call_params_count++; }
#line 2115 "y.tab.c"
    break;

  case 111: /* exp: id  */
#line 375 "d.y"
         {arggen(1);}
#line 2121 "y.tab.c"
    break;

  case 112: /* exp: integer_constant  */
#line 375 "d.y"
                                         {arggen(2);}
#line 2127 "y.tab.c"
    break;

  case 113: /* exp: string_constant  */
#line 375 "d.y"
                                                                        {arggen(3);}
#line 2133 "y.tab.c"
    break;

  case 114: /* exp: float_constant  */
#line 375 "d.y"
                                                                                                      {arggen(4);}
#line 2139 "y.tab.c"
    break;

  case 115: /* exp: character_constant  */
#line 375 "d.y"
                                                                                                                                        {arggen(5);}
#line 2145 "y.tab.c"
    break;

  case 116: /* constant: integer_constant  */
#line 378 "d.y"
                                                {  insV(); codegencon(); yyval=1; }
#line 2151 "y.tab.c"
    break;

  case 117: /* constant: string_constant  */
#line 379 "d.y"
                                                {  insV(); codegencon();yyval=-1;}
#line 2157 "y.tab.c"
    break;

  case 118: /* constant: float_constant  */
#line 380 "d.y"
                                                {  insV(); codegencon();}
#line 2163 "y.tab.c"
    break;

  case 119: /* constant: character_constant  */
#line 381 "d.y"
                                            {  insV(); codegencon();yyval=1; }
#line 2169 "y.tab.c"
    break;


#line 2173 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 383 "d.y"


extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insertSTtype(char *,char *);
void insertSTvalue(char *, char *);
void incertCT(char *, char *);
void printST();
void printCT();

struct stack
{
	char value[100];
	int labelvalue;
}s[100],label[100];


void push(char *x)
{
	strcpy(s[++top].value,x);
}

void swap(char *x, char *y)
{
	char temp = *x;
	*x = *y;
	*y = temp;
}

void reverse(char str[], int length)
{
    int start = 0;
    int end = length -1;
    while (start < end)
    {
        swap((str+start), (str+end));
        start++;
        end--;
    }
}

char* itoa(int num, char* str, int base)
{
    int i = 0;
    int isNegative = 0;


    if (num == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }

    if (num < 0 && base == 10)
    {
        isNegative = 1;
        num = -num;
    }


    while (num != 0)
    {
        int rem = num % base;
        str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
        num = num/base;
    }

    if (isNegative)
        str[i++] = '-';

    str[i] = '\0';


    reverse(str, i);

    return str;
}

void codegen()
{
	strcpy(temp,"t");
	char buffer[100];
	itoa(count,buffer,10);
	strcat(temp,buffer);
	if(s[top].value=="||")printf("%s = %s %s %s\n",temp,s[top-2].value,s[top].value,s[top-1].value);
	else printf("%s = %s %s %s\n",temp,s[top-2].value,s[top-1].value,s[top].value);
	top = top - 2;
	strcpy(s[top].value,temp);
	count++;
}

void codegencon()
{
	strcpy(temp,"t");
	char buffer[100];
	itoa(count,buffer,10);
	strcat(temp,buffer);
	printf("%s = %s\n",temp,curval);
	push(temp);
	count++;

}

int isunary(char *s)
{
	if(strcmp(s, "--")==0 || strcmp(s, "++")==0)
	{
		return 1;
	}
	return 0;
}

void genunary()
{
	char temp1[100], temp2[100], temp3[100];
	strcpy(temp1, s[top].value);
	strcpy(temp2, s[top-1].value);

	if(isunary(temp1))
	{
		strcpy(temp3, temp1);
		strcpy(temp1, temp2);
		strcpy(temp2, temp3);
	}
	strcpy(temp, "t");
	char buffer[100];
	itoa(count, buffer, 10);
	strcat(temp, buffer);
	count++;

	if(strcmp(temp2,"--")==0)
	{
		printf("%s = %s - 1\n", temp, temp1);
		printf("%s = %s\n", temp1, temp);
	}

	if(strcmp(temp2,"++")==0)
	{
		printf("%s = %s + 1\n", temp, temp1);
		printf("%s = %s\n", temp1, temp);
	}

	top = top -2;
}

void codeassign()
{
	printf("%s = %s\n",s[top-2].value,s[top].value);
	top = top - 2;
}

void label1()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(lno,buffer,10);
	strcat(temp,buffer);
	printf("IF not %s goto %s\n",s[top].value,temp);
	label[++ltop].labelvalue = lno++;
}

void label2()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(lno,buffer,10);
	strcat(temp,buffer);
	printf("goto %s\n",temp);
	strcpy(temp,"L");
	itoa(label[ltop].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	ltop--;
	label[++ltop].labelvalue=lno++;
}

void label3()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(label[ltop].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	ltop--;

}

void label4()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(lno,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	label[++ltop].labelvalue = lno++;
}


void label5()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(label[ltop-1].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("goto %s:\n",temp);
	strcpy(temp,"L");
	itoa(label[ltop].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	ltop = ltop - 2;


}

void arggen(int i)
{
    if(i==1)
    {
	printf("refparam %s\n", curid);
	}
	else
	{
	printf("refparam %s\n", curval);
	}
}

void callgen()
{
	printf("refparam result\n");
	push("result");
	printf("call %s, %d\n",currfunccall,call_params_count);
}



int main(int argc , char **argv)
{
	yyin = fopen(argv[1], "r");
	yyparse();

	if(flag == 0)
	{
		printf(ANSI_COLOR_GREEN "Ok" ANSI_COLOR_RESET "\n");
	}
}

void yyerror(char *s)
{
	printf(ANSI_COLOR_RED "%d %s %s\n", yylineno, s, yytext);
	flag=1;
	printf(ANSI_COLOR_RED "Status: Parsing Failed - Invalid\n" ANSI_COLOR_RESET);
	exit(7);
}

void ins()
{
	insertSTtype(curid,curtype);
}

void insV()
{
	insertSTvalue(curid,curval);
}

int yywrap()
{
	return 1;
}
