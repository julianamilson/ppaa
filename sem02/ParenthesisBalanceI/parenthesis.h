#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct parenthesis
{
	char *s;
	int	lp;
	int	rp;
} typedef prt;

prt *prt_create(void);
void prt_free(prt *e);
void prt_access(prt *e);
void prt_attribute(prt *e);

int	parenthesis_balance(char *s);
int	open_parenthesis(prt *e);
