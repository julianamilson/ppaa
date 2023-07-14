#include "sem04.h"

void	codifica(char *s)
{
	char str[strlen(s) + 1];
	str[strlen(s)] = '\0';

	for (int i = 0; s[i]; i++)
	{
		if (isalpha(s[i]))
		{
			if (s[i] == 'Z' || s[i] == 'z')
				str[i] = s[i] - 25;
			else
				str[i] = s[i] + 1;
		}
		else
			str[i] = s[i];
	}

	printf("%s = %s\n", s, str);
}
