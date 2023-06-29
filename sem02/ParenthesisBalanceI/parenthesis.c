#include "parenthesis.h"

prt *prt_create(void)
{
	prt	*node;

	node = (prt *)malloc(sizeof(prt) * 1);
	node->lp = 0;
	node->rp = 0;
	scanf(" %s", node->s);

	return node;
}

void prt_free(prt *e)
{
	free (e);
	e = NULL;
}

void prt_access(prt *e);
void prt_attribute(prt *e);

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

int	parenthesis_balance(prt *e)
{
	if (!open_parenthesis(e))
	{
		printf("correct\n");
		return 1;
	}
	printf("incorrect\n");
	return 0;
}
