#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_strdup - this function returns a pointer to a newly allocated space
 in memory which contains a copy of the string given as a parameter.
 * @str: this string is the parameter the function accepts
 * Return: this function returns a pointer to the newly allocated memory
 */
char *_strdup(char *str)
{
	int k = 0, length = 0;
	char *pntr;

	if (str == NULL)
		return (NULL);
	while(str[length] != '\0')
		length++;
	pntr = malloc(size * sizeof(*str) + 1);
	if (pntr == 0)
		return (NULL);
	while(k < lenght)
	{
		pntr[k] = str[k];
		k++;
	}
	return (pntr);
}
