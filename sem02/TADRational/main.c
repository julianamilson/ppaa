#include "TADRational.h"

int main(void)
{
	int	n;

	do
	{
		scanf(" %d", &n);
	}
	while (n < 1 || n > 10000);
	for (int i = 0; i < n; i++)
	{
		tr	*expression = tr_create();
		tr_access(expression);
	}

	return 0;
}
