#include <stdio.h>

/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char C1, c2 = '0';

	while (c2 <= '9')
	{
		putchar(c2);
		c2++;
	}

	for (c1 = 'a'; c1 <= 'f'; c1++)
	{
		putchar(c1);
	}

	putchar('\n');
	return (0);
}
