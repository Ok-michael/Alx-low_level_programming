#include "main.h"

/**
 * print_triangle - check for a digit
 * @size : integer type
 * Return:void
 */
void print_triangle(int size)
{

	int p = 1, q;

	while (p <= size && size > 0)
	{
		pp = 0;
		while (q < size - p)
		{
			_putchar(' ');
			q++;
		}
		q = 0;
		while (q < i)
		{
			_putchar('#');
			q++;
		}
		_putchar('\n');
		p++;
	}
	if (p == 1)
	_putchar('\n');
}
