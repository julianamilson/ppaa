#include <stdio.h>
#include <stdlib.h>

int tamanhoCiclo(int n)
{
	int tam = 1;

	while (n != 1)
	{
		if (n % 2 == 0)
			n = n / 2;
		else
			n = n * 3 + 1;
		tam++;
	}
	return tam;
}

int	serie(int *i, int *j)
{
	if (*i > *j)
	{
		int aux = *i;
		*i = *j;
		*j = aux;
	}
	int ciclo, cicloMax = 0;

	for (int k = *i; k < *j ; k++)
	{
		ciclo = tamanhoCiclo(k);
		if (ciclo > cicloMax)
			cicloMax = ciclo;
	}
	return cicloMax;
}

int main(void)
{
	int i, j;

	while (scanf(" %d %d", &i, &j) != EOF)
		printf("%d %d %d\n", i, j, serie(&i, &j));

	return 0;
}
