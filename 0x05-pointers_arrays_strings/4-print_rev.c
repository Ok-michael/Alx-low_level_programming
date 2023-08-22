#include <stdio.h>

/**
 * print_rev - this function prints a string the reverse order
 * @s: this function accepts s as a parametr
 * Return: this function returns void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
