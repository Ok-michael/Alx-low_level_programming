#include "main.h"

/**
 * print_times_table - this function print the multiplication table
 * @k: this function accept an integer k
 * Return: this function returns void
 */
void print_times_table(int k)
{
	int row, col, prod;

	if (k >= 0 && k < 15)
	{
		for (row = 0; row <= k; row++)
		{
			for (col = 0; col <= k; col++)
			{
				prod = row * col;
				if (col == 0)
					_putchar('0');
				else if (prod < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod % 10 + '0');
				}
				else if (prod >= 10 && prod < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((prod / 10) % 10 + '0');
					_putchar(prod % 10 + '0');
				}
				else if (prod > 99 && prod < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(prod / 10) % 10 + '0');
					_putchar(prod % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
