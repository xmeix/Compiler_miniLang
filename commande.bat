bison -d -v syntaxique.y 
flex lexical.l
gcc syntaxique.tab.c lex.yy.c -lfl -o projet.exe