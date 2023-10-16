%{ 
   /* Definition section */
  #include<stdio.h> 
  #include "y.tab.h"
  extern FILE *yyin;
  int flag=0; 
 
%}

%start S
%token TOKEN_KEYWORD TOKEN_PSEUDOKEYWORD TOKEN_AWAIT TOKEN_NULL TOKEN_BIN_OPERATOR TOKEN_VARIABLE TOKEN_CONST TOKEN_LET TOKEN_SMCLN TOKEN_EQUAL TOKEN_NOT TOKEN_LC TOKEN_RC TOKEN_WHILE TOKEN_DO TOKEN_FOR TOKEN_IF TOKEN_ELSE TOKEN_LR TOKEN_RR TOKEN_LP TOKEN_RP TOKEN_COMMA TOKEN_COMMENTS TOKEN_MULTI_COMMENTS TOKEN_HASHBANG_COMMENT TOKEN_PRINT TOKEN_SOME_OPERATOR TOKEN_OPERATOR TOKEN_SPACE TOKEN_PRIVATE_IDENTIFIER TOKEN_UNARY_OPERATOR TOKEN_DOT TOKEN_ANDOR TOKEN_FUNCTION TOKEN_RETURN TOKEN_IN
%token TOKEN_INTEGER TOKEN_DECIMAL TOKEN_BINARY TOKEN_OCTAL TOKEN_EXP TOKEN_HEXADECIMAL TOKEN_BIG_INTEGER TOKEN_STRING TOKEN_BOOLEAN TOKEN_IDENTIFIER TOKEN_RE_ASSIGNMENT TOKEN_3DOTS TOKEN_NEGATION TOKEN_PLUS TOKEN_MINUS
%right TOKEN_COLON
%left TOKEN_QUESTION_MARK
%token TOKEN_COMP_OPERATOR
/* Rule Section */
%% 
//Start
S:  P END
P:  | A| A TOKEN_SMCLN |  A TOKEN_SMCLN P| A G;
A:  | ASS| PRINTSTMT| UNSTMT| DOWHILELP| WHILELP| COMMENTS | FUND | FUNC | FOR | TOKEN_LC P TOKEN_RC;
G:   | COMMENTS;
END: |TOKEN_SMCLN

//Assignment 
ASS: F|TOKEN_VARIABLE TOKEN_IDENTIFIER TOKEN_EQUAL MULTI_EQUAL| TOKEN_LET TOKEN_IDENTIFIER TOKEN_EQUAL MULTI_EQUAL| TOKEN_CONST TOKEN_IDENTIFIER TOKEN_EQUAL MULTI_EQUAL| TOKEN_VARIABLE TOKEN_IDENTIFIER TOKEN_EQUAL F ASSIGNMENT_COMMA1| TOKEN_CONST TOKEN_IDENTIFIER TOKEN_EQUAL F ASSIGNMENT_COMMA1 | TOKEN_LET TOKEN_IDENTIFIER TOKEN_EQUAL F ASSIGNMENT_COMMA1 | UNINITIALIZED | TOKENID TOKEN_EQUAL MULTI_EQUAL ASSIGNMENT_COMMA1|TOKENID TOKEN_RE_ASSIGNMENT MULTI_EQUAL ASSIGNMENT_COMMA1| TOKENID ASSIGNMENT_COMMA1;
UNINITIALIZED: TOKEN_LET TOKEN_IDENTIFIER ASSIGNMENT_COMMA1| TOKEN_VARIABLE TOKEN_IDENTIFIER ASSIGNMENT_COMMA1;
WITHOUT_VAR_LET_CONST: TOKENID TOKEN_EQUAL MULTI_EQUAL ASSIGNMENT_COMMA1|TOKENID TOKEN_RE_ASSIGNMENT MULTI_EQUAL ASSIGNMENT_COMMA1| TOKENID ASSIGNMENT_COMMA1;
MULTI_EQUAL: | TOKEN_IDENTIFIER TOKEN_EQUAL MULTI_EQUAL| TOKEN_IDENTIFIER TOKEN_DOT TOKEN_IDENTIFIER TOKEN_EQUAL MULTI_EQUAL| F_TERNARY_LEFT TOKEN_EQUAL MULTI_EQUAL | F;

//Expressions
F:  TOKEN_NOT F| UNSTMT| TOKEN_NEGATION F | TOKEN_LP F EXPRESSION_COMMA TOKEN_RP| TOKEN_LP WITHOUT_VAR_LET_CONST EXPRESSION_COMMA TOKEN_RP|  E| ARRAY;
E:   E TOKEN_COMP_OPERATOR E| E TOKEN_PLUS E|E TOKEN_MINUS E|E TOKEN_BIN_OPERATOR E| E TOKEN_ANDOR E | TOKEN_LP E EXPRESSION_COMMA TOKEN_RP| D| F_TERNARY_RIGHT| ARRAY;
F_TERNARY_RIGHT: F TOKEN_QUESTION_MARK F TOKEN_COLON F // on right side of equality ternary expression on either side of colons can be variables or constants.
D: TOKEN_INTEGER |TOKEN_DECIMAL|TOKEN_BINARY|TOKEN_OCTAL|TOKEN_EXP|TOKEN_HEXADECIMAL|TOKEN_BIG_INTEGER|TOKEN_STRING|TOKEN_BOOLEAN| TOKENID| TOKEN_LP D EXPRESSION_COMMA TOKEN_RP;
TOKENID: TOKEN_IDENTIFIER | TOKEN_IDENTIFIER TOKEN_DOT TOKEN_IDENTIFIER| F_TERNARY_LEFT| TOKEN_LP TOKENID EXPRESSION_COMMA TOKEN_RP| ARRAY_ELEMENT;
F_TERNARY_LEFT: F TOKEN_QUESTION_MARK TOKENID TOKEN_COLON TOKENID;  // on left side of equality ternary expression on either side of colons cannot be variables or constants.

ASSIGNMENT_COMMA1: | TOKEN_COMMA WITHOUT_VAR_LET_CONST| TOKEN_COMMA F; // var a=1,b this form
EXPRESSION_COMMA: | TOKEN_COMMA F EXPRESSION_COMMA| TOKEN_COMMA WITHOUT_VAR_LET_CONST EXPRESSION_COMMA; // (x,y,z, and so on): takes the last one in this pattern after comma

//Function Definition
FUND: TOKEN_FUNCTION TOKEN_IDENTIFIER TOKEN_LP PARAM TOKEN_RP TOKEN_LC P P RETURN TOKEN_RC;
PARAM: | TOKEN_IDENTIFIER PARAM2 ;
PARAM2: | TOKEN_COMMA TOKEN_IDENTIFIER PARAM2;
RETURN: |  TOKEN_RETURN F |   TOKEN_RETURN F TOKEN_SMCLN |  TOKEN_RETURN|  TOKEN_RETURN TOKEN_SMCLN;

//Array 
ARRAY_ELEMENT: TOKEN_IDENTIFIER TOKEN_LR F TOKEN_RR 
ARRAY: TOKEN_LR ARRAY_IN TOKEN_RR
ARRAY_IN: | F ARRAY_NEXT 
ARRAY_NEXT: | TOKEN_COMMA| TOKEN_COMMA F ARRAY_NEXT 

//Object


//Function call
FUNC: TOKEN_IDENTIFIER TOKEN_LP PARAM3 TOKEN_RP | TOKEN_IDENTIFIER TOKEN_LP PARAM3 TOKEN_RP
PARAM3: | D PARAM4 ;
PARAM4: | TOKEN_COMMA D PARAM4;

//print statement
PRINTSTMT: TOKEN_PRINT TOKEN_LP Z TOKEN_RP;
Z: E TOKEN_COMMA Z| E;

//Comments
COMMENTS: TOKEN_COMMENTS | TOKEN_MULTI_COMMENTS 

/*Unary statements*/
UNSTMT: TOKENID TOKEN_UNARY_OPERATOR|TOKEN_UNARY_OPERATOR TOKENID| TOKEN_NEGATION E ;

/*for loop*/
FOR: TOKEN_FOR TOKEN_LP FOR_IN TOKEN_SMCLN FOR_COMPEXP TOKEN_SMCLN FOR_STMT TOKEN_RP TOKEN_LC P TOKEN_RC | TOKEN_FOR TOKEN_LP FOR_IN TOKEN_SMCLN FOR_COMPEXP TOKEN_SMCLN FOR_STMT TOKEN_RP F TOKEN_SMCLN| TOKEN_FOR TOKEN_LP FOR_IN_ID TOKEN_IN FOR_IN_ID TOKEN_RP TOKEN_LC P TOKEN_RC| TOKEN_FOR TOKEN_LP FOR_IN_ID TOKEN_IN FOR_IN_ID TOKEN_RP F TOKEN_SMCLN;
FOR_IN_ID: TOKEN_IDENTIFIER| TOKEN_IDENTIFIER TOKEN_DOT TOKEN_IDENTIFIER| UNINITIALIZED| TOKEN_CONST TOKEN_IDENTIFIER;
FOR_COMPEXP: | COMPEXP | COMPEXP FOR_COMPEXP2;
FOR_COMPEXP2: | TOKEN_COMMA COMPEXP FOR_COMPEXP2;
FOR_IN: | ASS| ASS FOR_IN2;
FOR_IN2: | TOKEN_COMMA ASS FOR_IN2;
FOR_STMT: | WITHOUT_VAR_LET_CONST | F| WITHOUT_VAR_LET_CONST FOR_STMT2| F FOR_STMT2;
FOR_STMT2: | TOKEN_COMMA F FOR_STMT2;| TOKEN_COMMA WITHOUT_VAR_LET_CONST FOR_STMT2;

/*while loop*/
WHILELP: TOKEN_WHILE TOKEN_LP COMPEXP TOKEN_RP TOKEN_LC P TOKEN_RC| TOKEN_WHILE TOKEN_LP COMPEXP TOKEN_RP F TOKEN_SMCLN;


/*do while loop*/
DOWHILELP: TOKEN_DO TOKEN_LC P TOKEN_RC TOKEN_WHILE TOKEN_LP COMPEXP TOKEN_RP TOKEN_SMCLN| TOKEN_DO F TOKEN_SMCLN TOKEN_WHILE TOKEN_LP COMPEXP TOKEN_RP TOKEN_SMCLN;

/*conditional statement*/
COMPEXP: F TOKEN_COMP_OPERATOR COMPEXP| F| TOKEN_LC COMPEXP TOKEN_RC;
%% 


 
void main() 
{ 
  printf("\nEnter code:\n"); 
   yyparse(); 
   if(flag==0) 
   	printf("\nEntered arithmetic expression is Valid\n\n"); 
}
 
void yyerror() 
{ 
   printf("\nEntered arithmetic expression is Invalid\n\n"); 
   flag=1; 
}

// new