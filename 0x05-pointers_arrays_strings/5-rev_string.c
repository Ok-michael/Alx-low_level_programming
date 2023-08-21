#include <stdio.h>

void rev_string(char *s)
{
	int ctn = 0, i;
	char *tmp;

	while (*s != '\0')
	{
		*tmp = *s;
		ctn++;
		tmp++;
	}
	for(i = 0; i < ctn; i++)
	{
		s[i] = tmp[ctn -i];
	}
}

