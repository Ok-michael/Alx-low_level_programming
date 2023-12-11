#include "main.h"

/**
 * *_strchr - this function fills memory with a constant byte.
 * @s: it uses a pointer s to put the constant
 * @c: this is the constant
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'  ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
