#include "main.h"
#include <stdio.h>

/**
 * _realloc - this function reallocates a memory passed as an argument
 * using malloc and free
 * @ptr: a pointer the memory to be reallocated
 * @old_size: the size in bytes of the allocated space for ptr
 * new_size: this is the size in bytes of the new pointer
 * Return: 	ptr, if new_size equals old_size
 * 		NULL, if new_size equal 0
 * 		pointer to the newly allocated memory otherwise
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pntr;
	char *pntr_cpy, *init;
	unsigned int k;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		pntr = malloc(new_size);

		if (pntr == NULL)
			return (NULL);
		return (pntr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	pntr_cpy = ptr;
	pntr = malloc(sizeof(*pntr_cpy) * new_size);
	if (pntr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	init = pntr;
	for (k = 0; k < old_size && k < new_size; k++)
		init[k] = pntr_cpy[k];
	free(ptr);
	return (pntr);
}
