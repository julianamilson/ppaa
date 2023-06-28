#include "parenthesis.h"

int main(void)
{
	prt	*expression;
	int		n;

	do
	{
		scanf(" %d", &n);
	} while (n < 1 || n > 10000);
	for (int i = 0; i < n; i++)
	{
		expression = prt_create();
		scanf(" %s", expression);
		parenthesis_balance(expression);
		prt_free(expression);
	}

	return 0;
}
