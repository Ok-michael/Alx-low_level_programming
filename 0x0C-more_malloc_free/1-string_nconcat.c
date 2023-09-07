#include "main.h"
#include <stdlib.h>
/**
 * get_len - this function receives a string of characters as a parameter
 * @s: this is the string who's length is to be determined
 * Return: this function returns an integer value
 */
int get_len(char *s)
{
	int k = 0;

	while (s[k])
		k++;
	return (k);
}

/**
 * string_nconcat - this function concatenates up to the nth charater of the
 * second argument to the first
 * @s1: this is the first string passed
 * @s2: this is the second string passed
 * Return: this function returns a pointer to the resulting string from the
 * concatination
 * @n: this is the number of bytes to be counted from the second argument
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pntr;
	unsigned int i = 0, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	k = get_len(s1);
	n += k;
	pntr = malloc(n + 1);
	if (pntr == NULL)
		return (NULL);
	for (; i < n; i++)
	{
		if (i < k)
			pntr[i] = s1[i];
		else
			pntr[i] = s2[i - k];
	}
	pntr[i] = '\0';
	return (pntr);
}
