#include "main.h"

/**
 * print_number - this function prints numbers
 * @n: this funciton accepts and integer parameter
 * Return: this function returns void.
 */
void print_number(int n)
{
	unsigned int p, q, cntr;

	if (n >= 0)
	{
		p = n ;
	}
	else
	{
		_putchar(45);
		p = -n;
	}

	q = p;
	cntr = 1;

	while (q >= 10)
	{
		q = q / 10;
		cntr = cntr * 10;
	}

	for (; cntr >= 1; cntr /= 10)
	{
		_putchar(((p / cntr) % 10) + 48);
	}
}
