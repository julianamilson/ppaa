#include "TADFila.h"

int main(void)
{
	Fi *f = fi_cria();
	int i = 0, *ptr_i = &i;

	for (int i = 0; i < 4; i++)
		fi_insere(f);
	atendimentoCaixaBanco(f, ptr_i);
	fi_libera(f);

	return 0;
}
