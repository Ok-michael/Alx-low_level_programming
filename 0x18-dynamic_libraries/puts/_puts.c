#include <stdio.h>

/**
 * _puts - this function accepts a string and prints
 * it to the standard output
 * @str: this function accepts one  parameter str
 * Return: this function returns void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
