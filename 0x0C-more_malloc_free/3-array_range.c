#include "main.h"
#include <stdlib.h>

/**
 * array_range - this function creates an array of integers
 * and fills them up serially
 * @min: this an integer argument
 * @max: this also is an integer argument
 * Return: this function returns a pointer to the array
 */
int *array_range(int min, int max)
{
	int *pntr, k;
	int length = (max - min + 1);

	if(min > max)
		return (NULL);
	pntr = malloc(length * sizeof(int));
	if (pntr == NULL)
		return (NULL);
	for(k = 0; k < length; k++)
		pntr[k] = min++;
	return (pntr);
}
