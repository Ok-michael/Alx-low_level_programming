nclude "main.h"

/**
 * clear_bit - this function sets the value of a bit to 0 at a given index.
 * @n: this is the number to set
 * @index: this is the index at which to set bit
 * Return: it returns (1) on successs (-1) otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set_b = ~(1 << index);
	*n = *n & set_b;
	return (1);
}
