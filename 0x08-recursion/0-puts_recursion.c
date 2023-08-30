#include "main.h"
 
/**
 * _puts_recursion - this function puts s string on the screen
 * followed by a newline
 * @s: this function receives a pointer to a string
 * Return: this function returns void
 */
void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
