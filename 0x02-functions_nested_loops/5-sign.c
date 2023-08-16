#include "main.h"

/**
 * print_sign - this functions prints the sign of a passed
 * argument on the screen
 * @n: this function accept an integer as an argument
 * Return: this function return the sign of the the integer
 * passed
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
