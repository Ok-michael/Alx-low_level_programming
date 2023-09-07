#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - this function allocates a memory using malloc
 * @b: this parameter is the numbers to expect from the malloc
 * Return: this function returns a pointer to the base address of
 * the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pntr = malloc(b);

	if (pntr == NULL)
	{
		exit(98);
	}
	return (pntr);
}
