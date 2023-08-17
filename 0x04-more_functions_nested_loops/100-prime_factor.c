#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number
 * 612852475143
 * Return: 0.
 */

int main(void)
{
	long nmbr = 612852475143;
	long divisor = 2;
	long lrg_prime = 0;

	while (nmbr != 1)
	{
		if (nmbr % divisor == 0)
		{
			nmbr = nmbr / divisor;
			lrg_prime = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", lrg_prime);
	return (0);
}
