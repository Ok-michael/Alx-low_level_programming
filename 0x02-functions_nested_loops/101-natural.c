#include <stdio.h>
#include "main.h"

/**
 * main - prints the sum of all multiples of three and five
 * below 1024
 * Return: the main function returns 0 when the call succeeds
 * otherwise, it returns 1
 */
int main(void)
{
	unsigned long sumiii = 0, sumv = 0, sum = 0;
	int k;

	for (k = 0; k < 1024; ++k)
	{
		if ((k % 3) == 0)
			sumiii += k;
		else if ((i % 5) == 0)
			sumv += k;
	}
	sum = sumiii + sumv;
	printf("%lu\n", sum);
	return (0);
}
