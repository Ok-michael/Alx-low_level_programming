#include <stdio.h>

/**
 * main: Entry point to the program
 * declare three integers p, q, r
 * use them in nexted loops to create a beauty 
 * from numbers.
 * Return: main returns 0 when everything goes well
 */
int main(void)
{
	int p, q, r;

	for (p = 0; p < 10; p++)
	{
		for (q = p + 1; q < 10; q++)
		{
			for (r = q + 1; r < 10; r++)
			{
				putchar('0' + p);
				putchar('0' + q);
				putchar('0' + r);
			}
			if (p < 7 || (p ==7 && q <8) ||(p ==7 && q == 8 && r < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
