#Instructions(How to use):
1. Make sure the current directory has a sample input javascript file, we have use sample.js for the same.
2. commands.sh consists of the shell script to compile the lex and yac files and run them simultaneously to analyse the syntax of sample.js.
Command 1: chmod a+x commands.sh 
Command 2: ./commands.sh
 
You may change the 3rd line of shell script into any other file name for testing instead of sample.js

[commands.sh consists of:
#!/bin/bash
cc lex.yy.c y.tab.c main.c -ll
./a.out sample.js

note that lex.yy.c can be produced from the command=> lex d.l
y.tab.c can be produced from=> yacc -Wnone -d parser.y
main.c is the main c file to take inputs to lex file.
a.out is the final executable for syntax analysis of any js code
]
