#include "stdio.h"

/**
 * main - this function prints the word simply _putchar
 * on the screen
 * Return: the function returns 0 when ran successfully
 */
int main(void)
{
	char txt[9] = "_putchar";
	int ctn = 1;

	for (ctn = 0; ctn < 9; ctn++)
	       _putchar(txt[ctn]);
	putchar('\n');
	return (0);
}
