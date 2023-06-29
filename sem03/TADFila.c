#include "TADFila.h"

Cli *cli_insere(void)
{
	Cli *c = (Cli *)malloc(sizeof(Cli));
	scanf(" %s", c->nome);
	scanf(" %f", &c->deposito);
	return c;
}

Fi* fi_cria(void)
{
	Fi *f = (Fi *)malloc(sizeof(Fi));
	f->cliente = NULL;
	f->prox = NULL;
	return f;
}

void fi_insere(Fi* f)
{
	Fi *aux;
	float v;

	if (!f->cliente)
	{
		f->cliente = cli_insere();
		f->prox = NULL;
		return ;
	}
	for (aux = f; aux->prox; aux = aux->prox);
	aux->prox = fi_cria();
	aux->prox->cliente = cli_insere();
	aux->prox->prox = NULL;
}

void fi_retira(Fi* f)
{
	Fi *aux = f;

	if (!f)
		return ;
	f = f->prox;
	free(aux);
}

void fi_libera(Fi* f)
{
	Fi *aux = f;

	if (!f)
		return ;
	while (f)
	{
		aux = f;
		f = f->prox;
		free(aux);
	}
}

void atendimentoCaixaBanco(Fi *f, int *totalCli)
{
	Fi		*aux = f;
	float	totalDep = 0;

	for (; aux; aux = aux->prox)
	{
		(*totalCli)++;
		printf("Cliente %d - %s atendido, deposito de %.0f reais\n", (*totalCli), aux->cliente->nome, aux->cliente->deposito);
		totalDep += aux->cliente->deposito;
	}
	printf("Total de clientes: %d\nDeposito total: %.0f reais", (*totalCli), totalDep);
}
