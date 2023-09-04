#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - this function oncatenates two strings s1 and s2.
 * @s1: this is one of the strings to be concatenated.
 * @s2: this is the other string to be concatenated with s1.
 * Return: If concatenation fails - NULL, otherwise - a pointer
 * to the newly-allocated space in memory
 * containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *pntr;
	int k = 0, m = 0, length = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[k] != '\0')
	{
		length++;
		k++;
	}
	k = 0;
	while (s2[k] != '\0')
	{
		length++;
		k++;
	}
	k = 0;
	pntr = (char *)malloc(sizeof(char) * length + 1);
	if (pntr == NULL)
		return (NULL);
	while (k < length)
	{
		if (s1[k] != '\0')
		{
			*pntr = s1[k];
			pntr++;
		}
		else
		{
			*pntr = s2[m];
			pntr++;
			m++;
		}
		k++;
	}
	return (pntr);
}
