# Prefix-Expression-Evaluator

An implementation of a Simple Interpreter for evaluating a given Prefix Expression CGF, using lex and yaac parser.
This is our submission for our Sixth semester CDSS mini project.

## Building the Interpreter
First, compile all the .y (yacc) files
'yacc -y -d yacc_compile.y'
> -d option:	If this option is used, the file y.tab.h is generated with the define statements that associate the yacc-assigned 'token codes' with the user-declared 'token names'. This allows source files other than y.tab.c to access the token codes.
> -y option: A version identification variable is put into y.tab.c. 
