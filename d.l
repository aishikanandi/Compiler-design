
%{ 
   /* Definition section */
  #include<stdio.h> 
  #include "y.tab.h" 

// Define token types
%} 
      
/* Rule Section */
%% 
"=>"(" ")*[\n]* {printf("TOKEN_ARROW\n"); return TOKEN_ARROW;}
"in"(" ")*[\n]* { printf("TOKEN_IN\n"); return TOKEN_IN;}
"switch"(" ")*[\n]* { printf("TOKEN_SWITCH\n"); return TOKEN_SWITCH;}
"default"(" ")*[\n]* { printf("TOKEN_DEFAULT\n"); return TOKEN_DEFAULT;}
"case"(" ")*[\n]* { printf("TOKEN_CASE\n"); return TOKEN_CASE; }
("catch"|"class"|"continue"|"debugger"|"delete"|"export"|"enum"|"extends"|"finally"|"import"|"instanceof"|"super"|"this"|"throw"|"try"|"typeof"|"void"|"with")(" "|[\n])* { printf("TOKEN_KEYWORD\n"); return TOKEN_KEYWORD; }
"break"(" ")*[\n]*  { printf("TOKEN_BREAK\n"); return TOKEN_BREAK;}
"function"(" "|[\n])*  { printf("TOKEN_FUNCTION\n"); return TOKEN_FUNCTION; }
"return"(" "|[\n])*  { printf("TOKEN_RETURN\n"); return TOKEN_RETURN;}
"new"(" "|[\n])* { printf("TOKEN_NEW\n"); return TOKEN_NEW;}
("static"|"arguments"|"eval"|"yield"|"implements"|"interface"|"package"|"private"|"protected"|"public")(" "|[\n])* { printf("TOKEN_PSEUDOKEYWORD\n");return TOKEN_PSEUDOKEYWORD; }
"console.log"(" "|[\n])*  {printf("TOKEN_PRINT\n");return TOKEN_PRINT;}
"false"|"true"(" "|[\n])* { printf("TOKEN_BOOLEAN\n");return TOKEN_BOOLEAN; }
"await"(" "|[\n])* { printf("TOKEN_AWAIT\n");return TOKEN_AWAIT; }
"null"(" "|[\n])* { printf("TOKEN_NULL\n");return TOKEN_NULL; }
"var"(" "|[\n])* { printf("TOKEN_VARIABLE\n"); return TOKEN_VARIABLE; }
"const"(" "|[\n])* {printf("TOKEN_CONST\n"); return TOKEN_CONST; }
"let"(" "|[\n])* { printf("TOKEN_LET\n");return TOKEN_LET; }
("++"|"--")(" "|[\n])* { printf("TOKEN_UNARY_OPERATOR\n");return TOKEN_UNARY_OPERATOR; }
"~"(" "|[\n])* {printf("TOKEN_NEGATION\n");return TOKEN_NEGATION;}
";"(" "|[\n])* {printf("TOKEN_SMCLN\n");return TOKEN_SMCLN;}
"="(" "|[\n])* {printf("TOKEN_EQUAL\n"); return TOKEN_EQUAL;}
"!"(" "|[\n])* {printf("TOKEN_NOT\n");return TOKEN_NOT;}
(">="|"<="|">"|"<"|"=="|"!="|"==="|"!==")(" "|[\n])* {printf("TOKEN_COMP_OPERATOR\n");return TOKEN_COMP_OPERATOR;}
("&&"|"||")(" "|[\n])* {printf("TOKEN_ANDOR\n");return TOKEN_ANDOR;}
"{"(" "|[\n])* {printf("TOKEN_LC\n");return TOKEN_LC;}
"}"(" "|[\n])* {printf("TOKEN_RC\n");return TOKEN_RC;} 
"while"(" "|[\n])* {printf("TOKEN_WHILE\n");return TOKEN_WHILE;}
"do"(" "|[\n])* {printf("TOKEN_DO\n");return TOKEN_DO;}
"for"(" "|[\n])* {printf("TOKEN_FOR\n");return TOKEN_FOR;}
"if"(" "|[\n])* {printf("TOKEN_IF\n");return TOKEN_IF;}
"else"(" "|[\n])* {printf("TOKEN_ELSE\n");return TOKEN_ELSE;}
[[](" "|[\n])* { printf("TOKEN_LR\n");return TOKEN_LR; }
[]](" "|[\n])* { printf("TOKEN_RR\n");return TOKEN_RR; }
"("(" "|[\n])* {printf("TOKEN_LP\n");return TOKEN_LP;}
")"(" "|[\n])* {printf("TOKEN_RP\n");return TOKEN_RP;}	
","(" "|[\n])* {printf("TOKEN_COMMA\n");return TOKEN_COMMA;}
"+"(" "|[\n])* { printf("TOKEN_PLUS\n");return TOKEN_PLUS; }
"-"(" "|[\n])* { printf("TOKEN_MINUS\n");return TOKEN_MINUS; }
"//"(.)*[\n]* { printf("TOKEN_COMMENTS\n");return TOKEN_COMMENTS;}
("/*"([^*]|"*"[^/])*"*/")(" "|[\n])* { printf("TOKEN_MULTI_COMMENTS\n");return TOKEN_MULTI_COMMENTS; }
("*"|"%"|"&"|"|"|"^"|"/"|"<<"|">>"|">>>")(" "|[\n])* {printf("TOKEN_BIN_OPERATOR\n"); return TOKEN_BIN_OPERATOR;}
("+="|"-="|"*="|"%="|"<<="|">>="|">>>="|"&="|"|="|"^="|"/=")(" "|[\n])* { printf("TOKEN_RE_ASSIGNMENT\n");return TOKEN_RE_ASSIGNMENT; }
(^#!.*)(" "|[\n])* {printf("TOKEN_HASHBANG_COMMENT\n"); return TOKEN_HASHBANG_COMMENT; }
(\"(\\.|[^"])*\")(" "|[\n])* { printf("TOKEN_STRING\n");return TOKEN_STRING; }
(\'(\\.|[^'])*\')(" "|[\n])* { printf("TOKEN_STRING\n");return TOKEN_STRING; }
(`([{.}]|\\.|[^`])*`)(" "|[\n])* { printf("TOKEN_STRING\n");return TOKEN_STRING; }
([0-9]+(_[0-9]+)*)(" "|[\n])* { printf("TOKEN_INTEGER\n");return TOKEN_INTEGER; }
([0-9]*\.[0-9]+([eE][+-]?[0-9]+)?)(" "|[\n])*  { printf("TOKEN_DECIMAL\n");return TOKEN_DECIMAL; }
(0[bB][01]+(_[01]+)*)(" "|[\n])* { printf("TOKEN_BINARY\n");return TOKEN_BINARY; }
(0[oO][0-7]+(_[0-7]+)*)(" "|[\n])* { printf("TOKEN_OCTAL\n");return TOKEN_OCTAL; }
([0-9]+"e"[0-9]+)(" "|[\n])* { printf("TOKEN_EXP\n");return TOKEN_EXP; }
(0[xX][0-9a-fA-F]+(_[0-9a-fA-F]+)*)(" "|[\n])* { printf("TOKEN_HEXADECIMAL\n");return TOKEN_HEXADECIMAL; }
([1-9][0-9]*(_[0-9]+)*[n])(" "|[\n])* { printf("TOKEN_BIG_INTEGER\n");return TOKEN_BIG_INTEGER; }
(([a-zA-Z_$]|[\u][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F])([a-zA-Z0-9_$]|[\u][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F])*)(" "|[\n])* { printf("TOKEN_IDENTIFIER\n");return TOKEN_IDENTIFIER; }
(#[a-zA-Z_$]([a-zA-Z_$0-9])*)(" "|[\n])* { printf("TOKEN_PRIVATE_IDENTIFIER\n");return TOKEN_PRIVATE_IDENTIFIER; }

"?"(" "|[\n])* { printf("TOKEN_QUESTION_MARK\n");return TOKEN_QUESTION_MARK; }
":"(" "|[\n])* {printf("TOKEN_COLON\n");return TOKEN_COLON;}
"..."(" "|[\n])* {printf("TOKEN_3DOTS\n");return TOKEN_3DOTS;}
"."(" "|[\n])* {printf("TOKEN_DOT\n");return TOKEN_DOT;}
(" ")*[\n] {printf("TOKEN_NEWLINE\n");return TOKEN_NEWLINE; }
<<EOF>> {printf("EOF\n"); return 0;}
. {}
%% 
int yywrap()								
{
	return 1;
}