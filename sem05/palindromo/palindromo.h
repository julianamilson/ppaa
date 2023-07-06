#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct Palindromo {
    char **m;
    char s[99];
} typedef Pa;

Pa *p_cria(void);
void p_insere(Pa *p);
void p_libera(Pa *p);

void palindromo(Pa *p);
char **cria_matriz(char *s);
