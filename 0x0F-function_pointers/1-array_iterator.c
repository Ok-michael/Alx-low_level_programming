#include "function_pointers.h"

/**
 * array_iterator - this function executes a function given as a param
 * on each element of an array
 * @array: this is the array to be iterated over
 * @size: this parameter is the size of the array
 * @action: this is actually the function to carry out on each array element
 * Return: it returns void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		while (size)
		{
			action(*array++);
			size--;
		}
	}
}
