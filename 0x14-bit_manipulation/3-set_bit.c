nclude "main.h"

/**
 * set_bit - this function sets the value of a bit to 1 at a given index.
 * @n: this is the number to bet set
 * @index: index at which to set bit to one
 *
 * Return: it returns (1) on success, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set_b = 1 << index;
	*n = *n | set;
	return (1);
}
