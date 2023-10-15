
%{ 
   /* Definition section */
  #include<stdio.h> 
  #include "y.tab.h" 

// Define token types
%} 
      
/* Rule Section */
%% 


"break"|"case"|"catch"|"class"|"continue"|"debugger"|"default"|"delete"|"export"|"enum"|"extends"|"finally"|"import"|"in"|"instanceof"|"new"|"return"|"super"|"switch"|"this"|"throw"|"try"|"typeof"|"void"|"with" { printf("TOKEN_KEYWORD\n"); return TOKEN_KEYWORD; }
"static"|"arguments"|"eval"|"yield"|"implements"|"interface"|"package"|"private"|"protected"|"public" { printf("TOKEN_PSEUDOKEYWORD\n");return TOKEN_PSEUDOKEYWORD; }
"console.log"  {printf("TOKEN_PRINT\n");return TOKEN_PRINT;}
"false"|"true" { printf("TOKEN_BOOLEAN\n");return TOKEN_BOOLEAN; }
"await" { printf("TOKEN_AWAIT\n");return TOKEN_AWAIT; }
"null" { printf("TOKEN_NULL\n");return TOKEN_NULL; }
"var" { printf("TOKEN_VARIABLE\n"); return TOKEN_VARIABLE; }
"const" {printf("TOKEN_CONST\n"); return TOKEN_CONST; }
"let" { printf("TOKEN_LET\n");return TOKEN_LET; }
"++"|"--" { printf("TOKEN_UNARY_OPERATOR\n");return TOKEN_UNARY_OPERATOR; }
'~' {printf("TOKEN_PRE_UNARY\n");return TOKEN_PRE_UNARY;}
";" {printf("TOKEN_SMCLN\n");return TOKEN_SMCLN;}
"=" {printf("TOKEN_EQUAL\n"); return TOKEN_EQUAL;}
">="|"<="|">"|"<"|"=="|"!="|"==="|"!==" {printf("TOKEN_COMP_OPERATOR\n");return TOKEN_COMP_OPERATOR;}
"&&"|"||" {printf("TOKEN_ANDOR\n");return TOKEN_ANDOR;}
"!" {printf("TOKEN_NOT\n");return TOKEN_NOT;}
"{" {printf("TOKEN_LC\n");return TOKEN_LC;}
"}" {printf("TOKEN_RC\n");return TOKEN_RC;} 
"while" {printf("TOKEN_WHILE\n");return TOKEN_WHILE;}
"do" {printf("TOKEN_DO\n");return TOKEN_DO;}
"for" {printf("TOKEN_FOR\n");return TOKEN_FOR;}
"if" {printf("TOKEN_IF\n");return TOKEN_IF;}
"else" {printf("TOKEN_ELSE\n");return TOKEN_ELSE;}
[[] { printf("TOKEN_LR\n");return TOKEN_LR; }
[]] { printf("TOKEN_RR\n");return TOKEN_RR; }
"(" {printf("TOKEN_LP\n");return TOKEN_LP;}
")" {printf("TOKEN_RP\n");return TOKEN_RP;}	
"," {printf("TOKEN_COMMA\n");return TOKEN_COMMA;}
"+" { printf("TOKEN_PLUS\n");return TOKEN_PLUS; }
"-" { printf("TOKEN_MINUS\n");return TOKEN_MINUS; }
"//"(.)*$ { printf("TOKEN_COMMENTS\n");return TOKEN_COMMENTS;}
"/*"([^*]|"*"[^/])*"*/" { printf("TOKEN_MULTI_COMMENTS\n");return TOKEN_MULTI_COMMENTS; }
"*"|"%"|"&"|"|"|"^"|"/"|"<<"|">>"|">>>" {printf("TOKEN_BIN_OPERATOR\n"); return TOKEN_BIN_OPERATOR;}
"+="|"-="|"*="|"%="|"<<="|">>="|">>>="|"&="|"|="|"^="|"/=" { printf("TOKEN_RE_ASSIGNMENT\n");return TOKEN_RE_ASSIGNMENT; }
^#!.* {printf("TOKEN_HASHBANG_COMMENT\n"); return TOKEN_HASHBANG_COMMENT; }
\"(\\.|[^"])*\" { printf("TOKEN_STRING\n");return TOKEN_STRING; }
\'(\\.|[^'])*\' { printf("TOKEN_STRING\n");return TOKEN_STRING; }
`([{.}]|\\.|[^`])*` { printf("TOKEN_STRING\n");return TOKEN_STRING; }
[0-9]+(_[0-9]+)* { printf("TOKEN_INTEGER\n");return TOKEN_INTEGER; }
[0-9]*\.[0-9]+([eE][+-]?[0-9]+)?  { printf("TOKEN_DECIMAL\n");return TOKEN_DECIMAL; }
0[bB][01]+(_[01]+)* { printf("TOKEN_BINARY\n");return TOKEN_BINARY; }
0[oO][0-7]+(_[0-7]+)* { printf("TOKEN_OCTAL\n");return TOKEN_OCTAL; }
([0-9]+"e"[0-9]+) { printf("TOKEN_EXP\n");return TOKEN_EXP; }
0[xX][0-9a-fA-F]+(_[0-9a-fA-F]+)* { printf("TOKEN_HEXADECIMAL\n");return TOKEN_HEXADECIMAL; }
[1-9][0-9]*(_[0-9]+)*[n] { printf("TOKEN_BIG_INTEGER\n");return TOKEN_BIG_INTEGER; }
([a-zA-Z_$]|[\u][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F])([a-zA-Z0-9_$]|[\u][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F])* { printf("TOKEN_IDENTIFIER\n");return TOKEN_IDENTIFIER; }
#[a-zA-Z_$]([a-zA-Z_$0-9])* { printf("TOKEN_PRIVATE_IDENTIFIER\n");return TOKEN_PRIVATE_IDENTIFIER; }

"?" { printf("TOKEN_QUESTION_MARK\n");return TOKEN_QUESTION_MARK; }
":" {printf("TOKEN_COLON\n");return TOKEN_COLON;}
"..." {printf("TOKEN_3DOTS\n");return TOKEN_3DOTS;}
"." {printf("TOKEN_DOT\n");return TOKEN_DOT;}
\n|. 

%% 
  
int yywrap() { return 1; }
