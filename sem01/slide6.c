#include <stdio.h>
#include <stdlib.h>

unsigned int fatorial(unsigned int n)
{
	if (n == 0)
		return 1;
	else
		return n * fatorial(n - 1);
}

unsigned int arranjo(unsigned int n, unsigned int k)
{
	unsigned int a, b = 1, c = 1;

	if (n - k == 0)
		exit(1);
	b = fatorial(n);
	c = fatorial(n - k);
	a = b / c;

	return a;
}
