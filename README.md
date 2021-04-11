# Prefix-Expression-Evaluator

An implementation of a Simple Interpreter for evaluating a given Prefix Expression CGF, using lex and yacc parser.
This is our submission for our Sixth semester CDSS mini project.

## Building the Interpreter
- Compile the .y (yacc) file(s) using:

      `yacc -y -d yacc_compile.y`

      
     > -d option:	If this option is used, the file y.tab.h is generated with the define statements that associate the yacc-assigned 'token codes' with the user-declared 'token names'. This allows source files other than y.tab.c to access the token codes.

     > -y option: A version identification variable is put into y.tab.c. 


- Compile the .l(lex) file(s) using:

      `lex yacc_compile.l`

- To generate the object (.o) files, run:

      `gcc -c y.tab.c lex.yy.c`

- Using gcc, now:

      `gcc lex.yy.o y.tab.o yacc_compile.c`

- And run:

      `./a.out`




**Enter a Prefix Expression and the evaluated result shall be displayed as output!**

**Head over to the file TestCases for some examples - a WIP.**

# Team Members:
- Siva Prakash Anupam
- Subhramanya N Sadhwani
- Vaishaali Kondapalli
- Vaishnavi A Punagin
  > sigh, :poop:
