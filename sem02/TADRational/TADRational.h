#include <stdio.h>
#include <stdlib.h>

struct TADRational
{
	int f_num;
	int s_num;
	int f_den;
	int s_den;
	char operation;
} typedef tr;

tr *tr_create(void);
void tr_free(tr *e);
void tr_access(tr *e);
void tr_attribute(tr *e);

void tr_plus(tr *e);
void tr_minus(tr *e);
void tr_mult(tr *e);
void tr_div(tr *e);
