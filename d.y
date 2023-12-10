%{
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
%}

%nonassoc IF
%token INT 
%token RETURN MAIN
%token VOID
%token WHILE FOR DO
%token BREAK
%token ENDIF
%expect 1

%token id array_id func_id
%token integer_constant string_constant float_constant character_constant

%nonassoc ELSE

%right leftshift_asgn_op rightshift_asgn_op
%right XOR_asgn_op OR_asgn_op
%right AND_asgn_op modulo_asgn_op
%right multiplication_asgn_op division_asgn_op
%right addition_asgn_op subtraction_asgn_op
%right asgn_op

%left OR_op
%left AND_op
%left pipe_op
%left caret_op
%left amp_op
%left equality_op inequality_op
%left lessthan_asgn_op lessthan_op greaterthan_asgn_op greaterthan_op
%left leftshift_op rightshift_op
%left add_op subtract_op
%left multiplication_op division_op modulo_op


%right tilde_op exclamation_op
%left increment_op decrement_op
%start program

%%
program
			: decl_list{

				int j;
				int x=10;
				for (j=0;j<10000;j++){
					x+=j;
				}
				for (j=100001;j>=0;j--){
					x-=j;
				}

			};

decl_list
			: decl{
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
			} decl_list | statment_list ;


decl
			: variable_decl ;

variable_decl
			: type_specifier variable_decl_list ';'{
			int j;
			int x=10;
			for (j=0;j<10000;j++){
				x+=j;
			}
			for (j=100001;j>=0;j--){
				x-=j;
			}
			}

variable_decl_list
			: variable_decl_list ',' variable_decl_id{
			int j;
			int x=10;
			for (j=0;j<10000;j++){
				x+=j;
			}
			for (j=100001;j>=0;j--){
				x-=j;
			}
			} | variable_decl_id;

variable_decl_id
			: id {if(duplicate(curid)){printf("Error! Redecl of varaiable\n");exit(0);}insertSTnest(curid,currnest); ins();
			} vdi
			  | array_id {if(duplicate(curid)){printf("Error! Redeclared a variable.\n");exit(0);}insertSTnest(curid,currnest); ins();  } vdi;



vdi :  id_array_type | asgn_op simple_expression  ;

id_array_type
			: '[' initilization_params{
			int j;
			int x=10;
			for (j=0;j<10000;j++){
				x+=j;
			}
			for (j=100001;j>=0;j--){
				x-=j;
			}
			}
			| ;

initilization_params
			: integer_constant ']' initilization {if($$ < 1) {printf("Error! in Array Size.\n"); exit(0);} }
			| ']' string_initilization;

initilization
			: string_initilization
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
			| array_initialization
			| ;

type_specifier
			: INT;

statment_list
			: stat stat_middle statment_list
			| ;

stat
			: expression_statment | compound_stat
			| conditional_stats | iterative_stats
			| break_stat ;
stat_middle : variable_decl | ;

compound_stat
			: {currnest++;} '{'  decl_list  '}' {deletedata(currnest);currnest--;}  ;



expression_statment
			: expression ';' ;

conditional_stats
			: IF '(' simple_expression ')' {label1();} stat {label2();}  conditional_stats_breakup;

conditional_stats_breakup
			: ELSE stat {label3();}
			| {label3();};

iterative_stats
			: WHILE '(' {label4();} simple_expression ')' {label1();} stat {label5();}
			| FOR '(' expression ';' {label4();} simple_expression ';' {label1();} expression ')'stat {label5();}
			| {label4();}DO stat WHILE '(' simple_expression ')'{label1();label5();} ';';
break_stat : BREAK ';';

string_initilization
			: asgn_op string_constant {insV();} ;

array_initialization
			: asgn_op '{' array_int_decls '}';

array_int_decls
			: integer_constant array_int_decls_breakup;

array_int_decls_breakup
			: ',' array_int_decls
		| ;

expression
			: mutable asgn_op {push("=");} expression{$$=1;codeassign();}
			| mutable addition_asgn_op {push("+=");}expression{$$=1;codeassign();}
			| mutable subtraction_asgn_op {push("-=");} expression{$$=1;codeassign();}
			| mutable multiplication_asgn_op {push("*=");} expression{$$=1;codeassign();}
			| mutable division_asgn_op {push("/=");}expression{$$=1;codeassign();}
			| mutable modulo_asgn_op {push("%=");}expression{$$=1;codeassign();}
			| mutable increment_op 							{ push("++");$$=1;  genunary();}
			| mutable decrement_op  							{push("--");$$=1;}
			| simple_expression { $$=1;} ;


simple_expression
			: simple_expression OR_op {push("||");} and_expression  {if($1 == 1 && $3==1) $$=1; else $$=-1; codegen();}
			| and_expression {if($1 == 1) $$=1; else $$=-1;};

and_expression
			: and_expression AND_op {push("&&");} unary_relation_expression  {if($1 == 1 && $3==1) $$=1; else $$=-1; codegen();}
			  |unary_relation_expression {if($1 == 1) $$=1; else $$=-1;} ;


unary_relation_expression
			: exclamation_op {push("!");} unary_relation_expression {if($2==1) $$=1; else $$=-1; codegen();}
			| regular_expression {if($1 == 1) $$=1; else $$=-1;} ;

regular_expression
			: regular_expression relational_ops sum_expression {if($1 == 1 && $3==1) $$=1; else $$=-1; codegen();}
			  | sum_expression {if($1 == 1) $$=1; else $$=-1;} ;

relational_ops
			: greaterthan_asgn_op {push(">=");} | lessthan_asgn_op {push("<=");} | greaterthan_op {push(">");}| lessthan_op {push("<");}| equality_op {push("==");}| inequality_op {push("!=");} ;

sum_expression
			: sum_expression sum_ops term  {if($1 == 1 && $3==1) $$=1; else $$=-1; codegen();}
			| term {if($1 == 1) $$=1; else $$=-1;};

sum_ops
			: add_op {push("+");}
			| subtract_op {push("-");} ;

term
			: term MULOP factor {if($1 == 1 && $3==1) $$=1; else $$=-1; codegen();}
			| factor {if($1 == 1) $$=1; else $$=-1;} ;

MULOP
			: multiplication_op {push("*");}| division_op {push("/");} | modulo_op {push("%");} ;

factor
			: immutable {if($1 == 1) $$=1; else $$=-1;}
			| mutable {if($1 == 1) $$=1; else $$=-1;} ;

mutable
			: id {
						  push(curid);
						 
			              if(!checkscope(curid))
			              {printf("%s\n",curid);printf("Error! use of undeclared value.\n");exit(0);}
			              if(!checkarray(curid))
			              {printf("%s\n",curid);printf("Array ID has no subscript\n");exit(0);}
						
			          
						
			              }
			| array_id {if(!checkscope(curid)){printf("%s\n",curid);printf("Error! use of undeclared value.\n");exit(0);}} '[' expression ']'
			                   {if(gettype(curid,0)=="int" || gettype(curid,1)== "double")
			              		$$ = 1;
			              		else
			              		$$ = -1;
			              		};

immutable
			: '(' expression ')' {if($2==1) $$=1; else $$=-1;}
			| call {if($1==-1) $$=-1; else $$=1;}
			| constant {if($1==1) $$=1; else $$=-1;};

call
			: id '('{

			             if(!check_decl(curid, "Function"))
			             { printf("Error! use of undeclared value."); exit(0);}
			             insertSTF(curid);
						 strcpy(currfunccall,curid);
					
                         call_params_count=0;
			             }
			             arguments ')'
						 { if(strcmp(currfunccall,"printf"))
							{
								if(getSTparamscount(currfunccall)!=call_params_count)
								{
									yyerror("Number of arguments in function call doesn't match number of parameters");
									exit(8);
								}
							}
							callgen();
						 };

arguments
			: arguments_list | ;

arguments_list
			: arguments_list ',' exp { call_params_count++; }
			| exp { call_params_count++; };

exp : id {arggen(1);} | integer_constant {arggen(2);} | string_constant {arggen(3);} | float_constant {arggen(4);} | character_constant {arggen(5);} ;

constant
			: integer_constant 	{  insV(); codegencon(); $$=1; }
			| string_constant	{  insV(); codegencon();$$=-1;}
			| float_constant	{  insV(); codegencon();}
			| character_constant{  insV(); codegencon();$$=1; };

%%

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
