#include "sem04.h"

int	main(void)
{
	char *s = "Rio de Janeiro";

	printf("Ultima ocorrencia dos caracteres da string %s\n", s);
	for (int i = strlen (s) - 1; s[i]; i--)
		printf("%c = %d\n", s[i], ultima_ocorrencia(s, s[i]));

	char *str = inverte(s);
	printf("O inverso da string %s eh %s\n", s, str);
	free(str);

	
	return 0;
}
