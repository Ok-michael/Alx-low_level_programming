#include "main.h"

/**
 * print_line - check for a digit
 * @n : number of _ to be printed
 * Return:void
 */

void print_line(int n)
{

	int q = 0;

	while (q < n && n > 0)
	{
		_putchar('_');
		q++;
	}
	_putchar('\n');
}
