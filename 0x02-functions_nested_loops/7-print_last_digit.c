#include "main.h"

/**
 * print_last_digit - this function prints the last
 * digit of the value passed on the standard output
 * @k: this function accepts an integer value k as
 * a parametter
 * Return: this function returns an integer value
 */
int print_last_digit(int k)
{
	int last_dgt = k % 10;

	if (k < 0)
		last_dgt *= -1;
	_putchar(last_dgt + '0');
	return (last_dgt);
}
