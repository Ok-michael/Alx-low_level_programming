#include "main.h"

/**
 * times_table - this function prints the 9 multiplication
 * table
 * Return: the function returns nothing
 */
void times_table(void)
{
	int row, column, prod, tens, unit;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			prod = row * column;
			tens = prod / 10;
			unit = prod % 10;
			if (column == 0)
			{
				_putchar('0');
			}
			else if (prod < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(unit + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(unit + '0');
			}
		}
		_putchar('\n');
	}
}
