#include "parenthesis.h"



static int	search_parenthesis(char *s)
{
	int i = 0, j = strlen(s);

	while (s[i])
	{
		if (s[i] == '(')
		{
				while (s[j] != ')' && j >= 0)
					j--;
				if (s[j] != ')' || (s[j] == ')' && j < i))
					return 1;
				j--;
		}
		i++;
	}
	return 0;
}

int open_parenthesis(prt *e)
{
	for (int i = 0; e->s[i]; i++)
	{
		if (e->s[i] == '(')
			e->lp++;
		if (e->s[i] == ')')
			e->rp++;
	}
	if (e->rp != e->lp || search_parenthesis(e->s))
		return 1;
	return 0;
}

int	parenthesis_balance(char *s)
{
	if (!open_parenthesis(s))
	{
		printf("correct\n");
		return 1;
	}
	printf("incorrect\n");
	return 0;
}
