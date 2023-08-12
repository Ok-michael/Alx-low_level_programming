#include <stdio.h>

/**
 * main - this functions declare an integer variable dgt
 * modifies the value using a while loop and print it to the screen
 * Return: This function returns 0 for each successful run
 */

int main(void)
{
	int dgt = 0;

	while(dgt < 10)
	{
		puts(dgt);
		dgt++;
	}
	putchar('\n');
	return (0);
}
