#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - this function oncatenates two strings.
 * @s1: this parameter is a string to be concatenated upon.
 * @s2: this parameter is the  string to be concatenated to s1.
 * Return: this function return NULL if the operation fails 
 * otherwise it returns a pointer the newly-allocated space in
 * memory containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *pntr;
	int k, l = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (k = 0; s1[k] || s2[k]; k++)
		len++;

	pntr = (char *)malloc(sizeof(char) * len);

	if (pntr == NULL)
		return (NULL);

	for (k = 0; s1[k]; k++)
		pntr[l] = s1[k];

	for (k = 0; s2[k]; k++)
		concat_str[l++] = s2[k];

	return (pntr);
}
