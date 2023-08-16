#include <stdio.h>

/**
 * main - this function prints the first 50 fibonacci numbers
 * with base cases as 1 and 2
 * Return: this function returns 0 if it runs successfully
 */
int main(void)
{
	long int j, k, l, next;

	k = 1;
	l = 2;
	for (j = 1; j <= 50; j++)
	{
		if (k != 20365011074)
		{
			printf("%ld, ", k);
		}
		else
		{
			printf("%ld\n", k);
		}
		next = k + l;
		k = l;
		l = next;
	}
	return (0);
}
