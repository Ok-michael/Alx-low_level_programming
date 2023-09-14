#include "function_pointers.h"

/**
 * int_index - this function searches for an integer
 * @array: this is the parameter that specifies the
 * array to be searched.
 * @size: this parameter tells the array size
 * @cmp: this is the function to use to compare values with
 * Return: if it finds no match or size is less than 1, or if array
 * is NULL or cmp is NULL, the function return -1.
 * Otherwise return the index of the first match.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		for (i = 0; i < size; ++i)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
