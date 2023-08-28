#include "main.h"

/**
 * _strspn - this function returns the length of a prefix
 * substring
 * @s: it accepts s as a string.
 * @accept: it also takes accept as bytes.
 * Return: the function returns unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, l;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (l = 0; accept[l] != s[l]; l++)
		{
			if (accept[l] == '\0')
				return (k);
		}
	}
	return (k);
}
