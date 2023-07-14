#include "sem04.h"

char	*inverte(char *s)
{
	int len = strlen(s);
	char *str = (char *)malloc(sizeof(char) * (len + 1));
	str[len] = '\0';

	for (int i = 0; s[i]; i++)
		str[--len] = s[i];

	return str;
}
