%{
#include <stdio.h>
#include <string.h> 
%}


DIGIT       [0-9]
%%

" " { /* Ignore white spaces */ }

"break"|"case"|"catch"|"class"|"continue"|"debugger"|"default"|"delete"|"do"|"else"|"export"|"enum"|"extends"|"finally"|"for"|"function"|"if"|"import"|"in"|"instanceof"|"new"|"return"|"super"|"switch"|"this"|"throw"|"try"|"typeof"|"void"|"while"|"with" {printf("%s\t\tTOKEN_KEYWORD\n",yytext);}
"static"|"arguments"|"eval"|"yield"|"implements"|"interface"|"package"|"private"|"protected"|"public" {printf("%s\t\tTOKEN_PSEUDOKEYWORD\n",yytext);}
"false"|"true" {printf("%s\t\tTOKEN_BOOLEAN\n",yytext);}
"await" {printf("%s\t\tTOKEN_AWAIT\n",yytext);}
"null" {printf("%s\t\tTOKEN_NULL\n",yytext);}


"var" { printf("%s\t\tTOKEN_VARIABLE\n", yytext);}
"const" { printf("%s\t\tTOKEN_CONST\n", yytext);}
"let" { printf("%s\t\tTOKEN_LET\n", yytext);}

['{'|'}'|'('|')'| ';' | ','] {printf("%s\t\tTOKEN_SEPERATOR\n", yytext);}
[[] {printf("%s\tTOKEN_SEPERATOR\n", yytext);}
[]] {printf("%s\tTOKEN_SEPERATOR\n", yytext);}

['<'|'>'|'+'|'*'|'%'|'&'|'|'|'^'|'!'|'~'|'?'|':'|'='|'/'|'.'] {printf("%s\t\tTOKEN_OPERATOR\n", yytext);}
[-] {printf("%s\tTOKEN_OPERATOR\n", yytext); }
"<="|">="|"=="|"!="|"==="|"!=="|"++"|"--"|"<<"|">>"|">>>"|"&&"|"+="|"-="|"*="|"%="|"<<="|">>="|">>>="|"&="|"|="|"^="|"=>"|"/="|"..." {printf("%s\t\tTOKEN_OPERATOR\n", yytext);}
"||" {printf("%s\tTOKEN_OPERATOR\n", yytext);}



([+-]|""){DIGIT}+|([+-]|"")[1-9]([0-9]*[_0-9][0-9]+)*                 { printf("%s\t\tTOKEN_INTEGER\n", yytext); }

([+-]|"")({DIGIT}*"."{DIGIT}*)|([+-]|"")[1-9]([0-9]*[_0-9][0-9]+)*"."[1-9]((_[0-9]+)|[0-9])*           { printf("%s\t\tTOKEN_DECIMAL\n", yytext); }

([+-]|"")(0[bB][01]+)|([+-]|"")(0[bB])([01]*[_01][01]+)*                      { printf("%s\t\tTOKEN_BINARY\n", yytext); }

([+-]|"")(0[oO][0-7]+)|([+-]|"")(0[oO])([0-7]*[_0-7][0-7]+)*                    { printf("%s\t\tTOKEN_OCTAL\n", yytext); }

([+-]|"")({DIGIT}+"e"{DIGIT}+)             { printf("%s\t\tTOKEN_EXP\n", yytext); }

([+-]|"")(0[xX][0-9a-fA-F]+)|([+-]|"")(0[xX])([0-9a-fA-F]*[_0-9a-fA-F][0-9a-fA-F]+)*                { printf("%s\t\tTOKEN_HEXADECIMAL\n", yytext); }

([+-]|"")(0[bB][01]+)[n]|([+-]|"")(0[oO][0-7]+)[n]|([+-]|"")(0[xX][0-9a-fA-F]+)[n]|([+-]|"")[1-9][0-9]*[n]|([+-]|"")[1-9]([0-9]*[_0-9][0-9]+)*[n] { printf("%s\t\tTOKEN_BIG_INTEGER\n", yytext); }

\"(\\.|[^"])*\"    {printf("%s\t\tTOKEN_STRING\n", yytext);}
\'(\\.|[^'])*\'    {printf("%s\t\tTOKEN_STRING\n", yytext);}
`([{.}]|\\.|[^`])*`    {printf("%s\t\tTOKEN_STRING\n", yytext);}

([a-zA-Z_$]|[\u][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F])([a-zA-Z0-9_$]|[\u][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F])* {printf("%s\t\tTOKEN_IDENTIFIER\n",yytext); }
#[a-zA-Z_$]([a-zA-Z_$0-9])* { printf("%s\t\tTOKEN_PRIVATE_IDENTIFIER\n", yytext); }

^#!.* { printf("%s\t\tTOKEN_HASHBANG_COMMENT\n", yytext); }


"//"(.)*$     { printf("%s\t\tTOKEN_COMMENT\n", yytext); }

"/*"([^*]|"*"[^/])*"*/"     { printf("%s\t\tTOKEN_COMMENT\n", yytext); }

.|\n  

%%
int yywrap() { return 1; }

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s input_file\n", argv[0]);
        return 1;
    }

    FILE *input_file = fopen(argv[1], "r");
    if (input_file == NULL) {
        perror("Error opening file");
        return 1;
    }

    yyin = input_file; // Set the input stream for lex

    yylex();

    fclose(input_file);
    return 0;
}

/*Should we consider await in keyword? it is keyword only inside async function or a module.*/
/*In strict mode static,arguments,eval,await,enum,yield,implements,interface,package,private,protected,public are reserved, else we can use them as identifiers.*/
/*In strict mode let is a reserved word, in non-strict mode it is a reserved word when used as a let and const... else in "var let" i.e global scope it is an identifier*/
/*symbols unicode or emoji, escape characters*/