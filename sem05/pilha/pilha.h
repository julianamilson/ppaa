#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Pilha {
    char s[20];
    int n;
} typedef Pi;

Pi* p_cria (void);
void p_push (Pi* p, float v);
float p_pop (Pi* p);
int p_vazia (Pi* p);
void p_libera (Pi* p);
