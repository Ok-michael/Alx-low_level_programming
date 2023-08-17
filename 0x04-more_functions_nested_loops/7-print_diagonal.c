#include "main.h"

/**
 * print_diagonal - check for a digit
 * @n : number of \\ to be printed
 * Return: Always 0.
 */

void print_diagonal(int n)
{

	int q = 0, qq;

	while (q < n && n > 0)
	{
		qq = 0;

		while (qq < i)
		{
			_putchar(' ');
			qq++;
		}
		_putchar('\\');
		_putchar('\n');
		q++;
	}

	if (q == 0)
		_putchar('\n');
}
