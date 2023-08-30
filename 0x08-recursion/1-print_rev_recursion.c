#include "main.h"

/**
 * _print_rev_recursion - this function prints a string
 * in reverse order
 * @s: this function accepts a pointer to a string
 * Return: this funtion returns void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
