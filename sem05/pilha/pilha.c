#include "pilha.h"

Pi* p_cria (void)
{
    Pi* p = (Pi*) malloc(sizeof(Pi));
    p->n = 0;
    scanf("%[^\n]", p->s);
    return p;
}

void p_push (Pi* p, float v)
{
    if (p->n == 20)
    {
        printf("Tamanho estourou.\n");
        exit(1);
    }
    p->s[p->n] = v;
    p->n++;
}

float p_pop (Pi* p)
{
    float v;

    v = p->s[p->n-1];
    p->n--;
    return v;
}
