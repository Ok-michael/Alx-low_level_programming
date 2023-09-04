#include "main.h"
#include <stdlib.h>

/**
 * *create_array - this function creates an array of characters
 * and sets every entry with the specified character that was passed
 * as an argument.
 * @size: this is the size of the array passed during function
 * invocation.
 * @c: this is the character specified during the function invocation
 * Return: pointer to the array initialized or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *pntr;
	unsigned int k = 0;

	if (size == 0)
		return NULL;
	pntr = (char *)malloc(size*(sizeof(char) + 1));
	if(pntr == NULL)
		return NULL;
	while (k < size)
		pntr[k] = c;
	return (pntr);
}
