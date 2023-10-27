
%{ 
   /* Definition section */
  #include<stdio.h> 
  #include "y.tab.h" 
char* prev_token =NULL;
// Define token types
%} 
      
/* Rule Section */
%% 
"=>"(" ")*[\n]* {  prev_token = yytext; return TOKEN_ARROW;}
"in"(" ")*[\n]* {  prev_token = yytext; return TOKEN_IN;}
"switch"(" ")*[\n]* {   prev_token = yytext; return TOKEN_SWITCH;}
"default"(" ")*[\n]* {   prev_token = yytext; return TOKEN_DEFAULT;}
"case"(" ")*[\n]* {   prev_token = yytext; return TOKEN_CASE; }
("catch"|"class"|"continue"|"debugger"|"delete"|"export"|"enum"|"extends"|"finally"|"import"|"instanceof"|"super"|"this"|"throw"|"try"|"typeof"|"void"|"with")(" "|[\n])* {   prev_token = yytext; return TOKEN_KEYWORD; }
"break"(" ")*[\n]*  {   prev_token = yytext; return TOKEN_BREAK;}
"function"(" "|[\n])*  {   prev_token = yytext; return TOKEN_FUNCTION; }
"return"(" "|[\n])*  {   prev_token = yytext; return TOKEN_RETURN;}
"new"(" "|[\n])* {  prev_token = yytext;  return TOKEN_NEW;}
("static"|"arguments"|"eval"|"yield"|"implements"|"interface"|"package"|"private"|"protected"|"public")(" "|[\n])* {  prev_token = yytext; return TOKEN_PSEUDOKEYWORD; }
"console.log"(" "|[\n])*  { prev_token = yytext; return TOKEN_PRINT;}
"false"|"true"(" "|[\n])* {  prev_token = yytext; return TOKEN_BOOLEAN; }
"await"(" "|[\n])* {  prev_token = yytext; return TOKEN_AWAIT; }
"null"(" "|[\n])* {  prev_token = yytext; return TOKEN_NULL; }
"var"(" "|[\n])* {  prev_token = yytext;  return TOKEN_VARIABLE; }
"const"(" "|[\n])* { prev_token = yytext;  return TOKEN_CONST; }
"let"(" "|[\n])* {  prev_token = yytext; return TOKEN_LET; }
("++"|"--")(" "|[\n])* {  prev_token = yytext; return TOKEN_UNARY_OPERATOR; }
"~"(" "|[\n])* { prev_token = yytext; return TOKEN_NEGATION;}
";"(" "|[\n])* { prev_token = yytext; return TOKEN_SMCLN;}
"="(" "|[\n])* {  prev_token = yytext; return TOKEN_EQUAL;}
"!"(" "|[\n])* { prev_token = yytext; return TOKEN_NOT;}
(">="|"<="|">"|"<"|"=="|"!="|"==="|"!==")(" "|[\n])* { prev_token = yytext; return TOKEN_COMP_OPERATOR;}
("&&"|"||")(" "|[\n])* { prev_token = yytext; return TOKEN_ANDOR;}
"{"(" "|[\n])* { prev_token = yytext; return TOKEN_LC;}
"}"(" "|[\n])* { prev_token = yytext; return TOKEN_RC;} 
"while"(" "|[\n])* { prev_token = yytext; return TOKEN_WHILE;}
"do"(" "|[\n])* { prev_token = yytext; return TOKEN_DO;}
"for"(" "|[\n])* { prev_token = yytext; return TOKEN_FOR;}
"if"(" "|[\n])* { prev_token = yytext; return TOKEN_IF;}
"else"(" "|[\n])* { prev_token = yytext; return TOKEN_ELSE;}
[[](" "|[\n])* {  prev_token = yytext; return TOKEN_LR; }
[]](" "|[\n])* {  prev_token = yytext; return TOKEN_RR; }
"("(" "|[\n])* { prev_token = yytext; return TOKEN_LP;}
")"(" "|[\n])* { prev_token = yytext; return TOKEN_RP;}	
","(" "|[\n])* { prev_token = yytext; return TOKEN_COMMA;}
"+"(" "|[\n])* {  prev_token = yytext; return TOKEN_PLUS; }
"-"(" "|[\n])* { prev_token = yytext; return TOKEN_MINUS; }
"//"(.)*[\n]* { prev_token = yytext;  return TOKEN_COMMENTS;}
("/*"([^*]|"*"[^/])*"*/")(" "|[\n])* {  prev_token = yytext; return TOKEN_MULTI_COMMENTS; }
("*"|"%"|"&"|"|"|"^"|"/"|"<<"|">>"|">>>")(" "|[\n])* {  prev_token = yytext; return TOKEN_BIN_OPERATOR;}
("+="|"-="|"*="|"%="|"<<="|">>="|">>>="|"&="|"|="|"^="|"/=")(" "|[\n])* {  prev_token = yytext; return TOKEN_RE_ASSIGNMENT; }
(^#!.*)(" "|[\n])* {  prev_token = yytext; return TOKEN_HASHBANG_COMMENT; }
(\"(\\.|[^"])*\")(" "|[\n])* {  prev_token = yytext; return TOKEN_STRING; }
(\'(\\.|[^'])*\')(" "|[\n])* {  prev_token = yytext; return TOKEN_STRING; }
(`([{.}]|\\.|[^`])*`)(" "|[\n])* {  prev_token = yytext; return TOKEN_STRING; }
([0-9]+(_[0-9]+)*)(" "|[\n])* {  prev_token = yytext; return TOKEN_INTEGER; }
([0-9]*\.[0-9]+([eE][+-]?[0-9]+)?)(" "|[\n])*  {  prev_token = yytext; return TOKEN_DECIMAL; }
(0[bB][01]+(_[01]+)*)(" "|[\n])* { prev_token = yytext;  return TOKEN_BINARY; }
(0[oO][0-7]+(_[0-7]+)*)(" "|[\n])* { prev_token = yytext; return TOKEN_OCTAL; }
([0-9]+"e"[0-9]+)(" "|[\n])* {  prev_token = yytext; return TOKEN_EXP; }
(0[xX][0-9a-fA-F]+(_[0-9a-fA-F]+)*)(" "|[\n])* {  prev_token = yytext; return TOKEN_HEXADECIMAL; }
([1-9][0-9]*(_[0-9]+)*[n])(" "|[\n])* {  prev_token = yytext; return TOKEN_BIG_INTEGER; }
(([a-zA-Z_$]|[\u][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F])([a-zA-Z0-9_$]|[\u][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F])*)(" "|[\n])* {  prev_token = yytext; return TOKEN_IDENTIFIER; }
(#[a-zA-Z_$]([a-zA-Z_$0-9])*)(" "|[\n])* {  prev_token = yytext; return TOKEN_PRIVATE_IDENTIFIER; }

"?"(" "|[\n])* {  prev_token = yytext; return TOKEN_QUESTION_MARK; }
":"(" "|[\n])* { prev_token = yytext; return TOKEN_COLON;}
"..."(" "|[\n])* { prev_token = yytext; return TOKEN_3DOTS;}
"."(" "|[\n])* { prev_token = yytext; return TOKEN_DOT;}
(" ")*[\n] { prev_token = yytext; return TOKEN_NEWLINE; }
<<EOF>> { return 0;}
. {}
%% 
int yywrap()								
{
	return 1;
}