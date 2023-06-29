#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Cliente
{
	char	nome[80];
	float	deposito;
} Cli;

typedef struct Fila
{
	Cli *cliente;
	struct Fila *prox;
} Fi;

Cli *cli_cria(void);
Fi* fi_cria(void);
void fi_insere(Fi* f);
void fi_retira(Fi* f);
void fi_libera(Fi* f);

void atendimentoCaixaBanco(Fi *f, int *totalCli);
