#include "main.h"

/**
 * print_most_numbers - this function prints some numbers
 * Return: this function returns void
 */

void print_most_numbers(void)
{
	char nmbr = 0;

	while (nmbr <= 9)
	{
		if (nmbr != 2 && nmbr != 4)
		{
			_putchar('0' + nmbr);
		}
		nmbr++;
	}
	_putchar('\n');
}
