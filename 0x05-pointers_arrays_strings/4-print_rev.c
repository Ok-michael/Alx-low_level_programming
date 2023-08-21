#include <stdio.h>

/**
 * print_rev - this function prints a string the reverse order
 * @s: this function accepts s as a parametr
 * Return: this function returns void
 */
void print_rev(char *s)
{
	int ctn = 0;

	while (*s != '\0')
	{
		ctn++;
		s++;
	}
	while (ctn--)
	{
		putchar(*s);
		s--;
	}
	putchar(*s);
	putchar('\n');
}
