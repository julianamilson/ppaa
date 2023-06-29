#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct parenthesis
{
	char s[100];
	int	lp;
	int	rp;
} prt;

prt *prt_create(void);
void prt_free(prt *e);
void prt_access(prt *e);
void prt_attribute(prt *e);

int	parenthesis_balance(prt *e);
int	open_parenthesis(prt *e);
