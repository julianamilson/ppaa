/*
	Quantos palindromos tem uma frase?
*/

#include "palindromo.h"

int main (void)
{
    Pa *p = p_cria();

    p_insere(p);
    palindromo(p);
    p_libera(p);

    return 0;
}
