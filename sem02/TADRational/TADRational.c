#include "TADRational.h"

tr *tr_create(void)
{
	tr *e;

	e = (tr *) malloc(sizeof(tr) * 1);
	e->f_num = 0;
	e->s_num = 0;
	e->f_den = 0;
	e->s_den = 0;
	e->operation = 'a';
	return e;
}

void tr_free(tr *e)
{
	free(e);
	e = NULL;
}

void tr_access(tr *e)
{
	char a, b;

	scanf("%d %c %d %c %d %c %d", &e->f_num, &a, &e->f_den, &e->operation, &e->s_num, &b, &e->s_den);
	if (a != '/' || b != '/')
	{
		tr_free(e);
		return ;
	}
	tr_attribute(e);
}

void tr_attribute(tr *e)
{
	if (e->f_den == 0 || e->s_den == 0)
	{
		printf("Invalid denominator\n");
		tr_free(e);
		return ;
	}
	if (e->operation == '+')
		tr_plus(e);
	if (e->operation == '-')
		tr_minus(e);
	if (e->operation == '*')
		tr_mult(e);
	if (e->operation == '/')
		tr_div(e);
}

void tr_plus(tr *e)
{
	int num, den;

	num = (e->f_num * e->s_den) + (e->s_num * e->f_den);
	den = (e->f_den * e->s_den);
	printf("%d/%d = %d/%d\n", num, den, num / 2, den / 2);
}

void tr_minus(tr *e)
{
	int num, den;

	num = (e->f_num * e->s_den) - (e->s_num * e->f_den);
	den = (e->f_den * e->s_den);
	printf("%d/%d = %d/%d\n", num, den, num / 2, den / 2);
}

void tr_mult(tr *e)
{
	int num, den;

	num = e->f_num * e->s_num;
	den = (e->f_den * e->s_den);
	printf("%d/%d = %d/%d\n", num, den, num / 2, den / 2);
}

void tr_div(tr *e)
{
	int num, den;

	num = e->f_num * e->s_den;
	den = e->s_num * e->f_den;
	printf("%d/%d = %d/%d\n", num, den, num / 2, den / 2);
}
