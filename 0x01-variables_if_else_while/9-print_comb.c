#include <stdio.h>
#include <stdlib.h>
/**
 *  * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int dgt = 0;

	while (dgt < 10)
	{
		putchar(48 + dgt);
		if (dgt != 9)
		{
			putchar(',');
			putchar(' ');
		}
		dgt++;
	}
	putchar('\n');
	return (0);
}
