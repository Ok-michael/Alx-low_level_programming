#include <stdlib.h>
#include "main.h"

/**
 * _calloc - this function allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory.
 * @nmemb: this is the number of elements
 * @size: this is the size of each array
 * Return: this function returns a pointer to the base address of the
 * newly allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pntr;
	unsigned int k = 0;
	char *init;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pntr = malloc(nmemb*size);
	if (pntr == NULL)
		return (NULL);
	for (; k < (nmemb*size); k++)
		*(int + k) = '\0';
	return (pntr);
}
