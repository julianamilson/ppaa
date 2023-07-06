/*
	string mocada contendo numeros e simbolos matematicos, cada vez que passar pelo simbolo matematico, fazer a operacao com os numeros guardados e substituir o valor na string pelos resultados
*/

#include "pilha.h"

int main(void)
{
    Pi *p = p_cria();

    for (int i = 0; p->s[i]; i++)
        printf("%c\n", p->s[i]);
}
