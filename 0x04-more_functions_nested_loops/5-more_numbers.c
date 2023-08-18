#include "main.h"

/**
 * print_triangle - check for a digit
 * @size : integer type
 * Return:void
 */

void print_triangle(int size)
{

	int p = 1, pp;

	while (p <= size && size > 0)
	{
		pp = 0;
		while (pp < size - p)
		{
			_putchar(' ');
			pp++;
		}
		pp = 0;
		while (pp < p)
		{
			_putchar('#');
			pp++;
		}
		_putchar('\n');
		p++;
	}
	if (p == 1)
	_putchar('\n');
}
