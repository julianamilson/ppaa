#include "sem04.h"

int	ultima_ocorrencia(char *s, char c)
{
	for (int i = strlen(s) - 1 ; s[i]; i--)
		if (s[i] == c)
			return i;
	return -1;
}
