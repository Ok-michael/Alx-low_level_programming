#include "main.h"

/**
 * get_bit - this function returns the value of a bit at a given
 * index.
 * @n: this is an unsigned long int input.
 * @index: this is the index of the bit.
 *
 * Return: this function returns the value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int k = 0;

	if (n == 0 && index < 64)
		return (0);

	while (k <= 63)
	{
		if (index == k)
			return (n & 1);
		n >>= 1;
		k++;
	}

	return (-1);
}

