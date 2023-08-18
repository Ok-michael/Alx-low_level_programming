#include "main.h"

/**
 * print_diagonal - check for a digit
 * @n : number of \\ to be printed
 * Return: Always 0.
 */

void print_diagonal(int n)
{

	int p = 0, q;

	while (p < n && n > 0)
	{
		q = 0;

		while (q < p)
		{
			_putchar(' ');
			q++;
		}
		_putchar('\\');
		_putchar('\n');
		q++;
	}

	if (q == 0)
		_putchar('\n');
}
