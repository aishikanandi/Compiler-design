Lex is a tool used to create lexical analyzers.We used it to create tokens for JavaScript Programming Language code.

#Instructions(How to use):
1.First we have to compile the c.l file using 'lex' utility(it generates a C source file for the lexer)
and it tokenizes the input strings into strings based on the rules defined in the file and generates output as lex.yy.c

Command 1: lex c.l

2.Then we have to compile the lex.yy.c code into machine code exucutable program using gcc.

Command 2: gcc lex.yy.c

3.At last, we have to execute the executable program file generated by gcc with the sample js file as an arguement.

Command 3: ./a.out <sample_javascript_file.js>

After executing the command it will ask you for input string and it will give you the tokens as a output.


#Tokens Description:
The input JavaScript code is tokenized into various token types by the lexer:
TOKEN_KEYWORD: JavaScript reserved words that cannot be used an identifier in any scope. Example: break, case, catch, if, else, continue, default, etc.
TOKEN_PSEUDOKEYWORD: Pseudo keywords here refer to the lexemes that are reserved in strict mode only, which is set by "use strict"; statement in the code file. In other cases they can be used as identifiers.
TOKEN_BOOLEAN: Token for boolean literals true and false.
TOKEN_AWAIT: Token for the await keyword. It is a psuedo keyword. It is reserved when used inside async function or before a imported module in code, i.e it is reserved based on the context in which it is used.
TOKEN_NULL: Token for the null keyword.
TOKEN_VARIABLE: Token for variable keyword. (primitive datatype)
TOKEN_CONST: Token for const keyword (primitive datatype)
TOKEN_LET: Token for let keyword. It is not a keyword in global scope. (primitive datatype based on context)
TOKEN_SEPERATOR: Tokens for separators like {, }, (, ), ;, comma, [, ].
TOKEN_OPERATOR: Tokens for various operators like +, -, *, /, &&, ||, etc.
TOKEN_INTEGER: Integer literals.
TOKEN_DECIMAL: Decimal literals.
TOKEN_BINARY: Binary literals.
TOKEN_OCTAL: Octal literals.
TOKEN_EXP: Exponential literals.
TOKEN_HEXADECIMAL: Hexadecimal literals.
TOKEN_BIG_INTEGER: Big integer literals.
TOKEN_STRING: String and character literals. There is no distinction among strings and characters in terms of double quotes or single quotes.
TOKEN_IDENTIFIER: Tokens for Identifiers.
TOKEN_PRIVATE_IDENTIFIER: Private identifiers are identifiers that use hexadecimal unicode characters instead of normal characters. 
TOKEN_HASHBANG_COMMENT: Tokens for Hashbang comments.
TOKEN_COMMENT: Tokens for comments.
