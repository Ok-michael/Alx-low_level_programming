#include <stdio.h>

/**
 * main - this function uses a nexted loop
 * prints a new line after all the mingling it does
 * Return: return 0 if everything goes well
 */
int main(void)
{
	int p, q;
	for (p = 0; p < 10; p++)
	{
		for(q = p +1; q < 10; q++)
		{
			putchar('0' + p);
			putchar('0' + q);
			if (p < 8 || q < )
			{
				putchar(',');
				putchar(',');
			}
		}
	}
}
