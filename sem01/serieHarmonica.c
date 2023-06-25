#include <stdio.h>

float harmonica(int n)
{
	float h = 0;

	for (int i = 1; i <= n; i++)
		h += 1.0/i;

	return h;
}

int main(void)
{
	int n = 0;

	while (n == 0) // prevenir divisao por 0
		scanf("%d", &n);
	printf("%.3f", harmonica(n));

	return 0;
}
