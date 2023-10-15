%{ 
   /* Definition section */
  #include<stdio.h> 
  #include "y.tab.h"
  extern FILE *yyin;
  int flag=0; 

%}

%start S
%token TOKEN_KEYWORD TOKEN_PSEUDOKEYWORD TOKEN_AWAIT TOKEN_NULL TOKEN_BIN_OPERATOR TOKEN_VARIABLE TOKEN_CONST TOKEN_LET TOKEN_SMCLN TOKEN_EQUAL TOKEN_NOT TOKEN_LC TOKEN_RC TOKEN_WHILE TOKEN_DO TOKEN_FOR TOKEN_IF TOKEN_ELSE TOKEN_LR TOKEN_RR TOKEN_LP TOKEN_RP TOKEN_COMMA TOKEN_COMMENTS TOKEN_MULTI_COMMENTS TOKEN_HASHBANG_COMMENT TOKEN_PRINT TOKEN_SOME_OPERATOR TOKEN_OPERATOR TOKEN_SPACE TOKEN_PRIVATE_IDENTIFIER TOKEN_UNARY_OPERATOR TOKEN_DOT TOKEN_ANDOR 
%token TOKEN_INTEGER TOKEN_DECIMAL TOKEN_BINARY TOKEN_OCTAL TOKEN_EXP TOKEN_HEXADECIMAL TOKEN_BIG_INTEGER TOKEN_STRING TOKEN_BOOLEAN TOKEN_IDENTIFIER TOKEN_RE_ASSIGNMENT TOKEN_3DOTS TOKEN_PRE_UNARY TOKEN_PLUS TOKEN_MINUS
%right TOKEN_COLON
%left TOKEN_QUESTION_MARK
%token TOKEN_COMP_OPERATOR
/* Rule Section */
%% 
//Start
S:  P END
P:  | A TOKEN_SMCLN P ;
A: | ASS| PRINTSTMT| UNSTMT| DOWHILELP| WHILELP | TOKEN_NEW_LINE
END: |TOKEN_SMCLN

//Assignment and statements
ASS: F| TOKEN_VARIABLE TOKEN_IDENTIFIER TOKEN_EQUAL F| TOKEN_CONST TOKEN_IDENTIFIER TOKEN_EQUAL F|TOKEN_LET TOKEN_IDENTIFIER TOKEN_EQUAL F |TOKENID TOKEN_EQUAL F|TOKEN_LET TOKEN_IDENTIFIER| TOKEN_VARIABLE TOKEN_IDENTIFIER| TOKENID TOKEN_RE_ASSIGNMENT F;
F: E| TOKEN_PLUS E| TOKEN_MINUS E |TOKEN_NOT F| UNSTMT| TOKEN_PRE_UNARY F| G TOKEN_QUESTION_MARK G TOKEN_COLON G TERNARY_MULTIPLE_1 | TOKEN_LP F TOKEN_RP;
E:  D| E TOKEN_BIN_OPERATOR E|E TOKEN_PLUS E|E TOKEN_MINUS E| E TOKEN_COMP_OPERATOR E| E TOKEN_ANDOR E | TOKEN_LP E TOKEN_RP;
D: TOKEN_INTEGER |TOKEN_DECIMAL|TOKEN_BINARY|TOKEN_OCTAL|TOKEN_EXP|TOKEN_HEXADECIMAL|TOKEN_BIG_INTEGER|TOKEN_STRING|TOKEN_BOOLEAN| TOKENID| TOKEN_LP D TOKEN_RP;
TOKENID: TOKEN_IDENTIFIER | TOKEN_IDENTIFIER TOKEN_DOT TOKEN_IDENTIFIER| G TOKEN_QUESTION_MARK TERNARY_RIGHT TOKEN_COLON TERNARY_RIGHT TERNARY_MULTIPLE_2;
TERNARY_MULTIPLE_1: | TOKEN_QUESTION_MARK G TOKEN_COLON G TERNARY_MULTIPLE_1  //for x?y:z?a:b and so one... for the ternary operator in left side of assignment statement, it allows expressions in left side.
TERNARY_MULTIPLE_2: | TOKEN_QUESTION_MARK TERNARY_RIGHT TOKEN_COLON TERNARY_RIGHT TERNARY_MULTIPLE_2; //for x?y:z?a:b and so one... for the ternary operator in right side of assignment statement, it doesnt allow expressions, only identifiers.

//ternary statements
G: TOKEN_LP F TOKEN_RP| F;
TERNARY_RIGHT: TOKEN_LP TOKENID TOKEN_RP | TOKENID;

//print statement
PRINTSTMT: TOKEN_PRINT TOKEN_LP Z TOKEN_RP;
Z: E TOKEN_COMMA Z| E;

//Comments
COMMENTS: TOKEN_COMMENTS TOKEN_MULTI_COMMENTS 

/*Unary statements*/
UNSTMT: TOKENID TOKEN_UNARY_OPERATOR|TOKEN_UNARY_OPERATOR TOKENID| TOKEN_PRE_UNARY E ;

/*while loop*/
WHILELP: TOKEN_WHILE TOKEN_LP COMPEXP TOKEN_RP TOKEN_LC P TOKEN_RC| TOKEN_WHILE TOKEN_LP COMPEXP TOKEN_RP F TOKEN_SMCLN;


/*do while loop*/
DOWHILELP: TOKEN_DO TOKEN_LC P TOKEN_RC TOKEN_WHILE TOKEN_LP COMPEXP TOKEN_RP TOKEN_SMCLN| TOKEN_DO F TOKEN_SMCLN TOKEN_WHILE TOKEN_LP COMPEXP TOKEN_RP TOKEN_SMCLN;

/*conditional statement*/
COMPEXP: F TOKEN_COMP_OPERATOR COMPEXP| F| TOKEN_LC COMPEXP TOKEN_RC;
%% 


 
 
void main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s input_file\n", argv[0]);
        return ;
    }

    FILE *input_file = fopen(argv[1], "r");
    if (input_file == NULL) {
        perror("Error opening file");
        return ;
    }

    yyin = input_file; // Set the input stream for lex

    yylex();
   yyparse(); 
   if(flag==0) 
   	printf("\nEntered arithmetic expression is Valid\n\n"); 
    
}
 
void yyerror() 
{ 
   printf("\nEntered arithmetic expression is Invalid\n\n"); 
   flag=1; 
}
