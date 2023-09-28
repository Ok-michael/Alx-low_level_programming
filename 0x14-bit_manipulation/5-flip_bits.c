#include "main.h"

/**
 * flip_bits - this function returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: this is the first number
 * @m: this parameter is thsecond number
 * Return: it returns the number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, cntr = 0, k = 0, chk = 1;

	diff = n ^ m;
	while (k < (sizeof(unsigned long int) * 8))
	{
		if (chk == (diff & chk))
		{
			cntr++;
		}
		chk <<= 1;
		k++;
	}
	return (cntr);
}
