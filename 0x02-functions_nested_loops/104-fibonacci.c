#include <stdio.h>

/**
 * main - find, print the first 98 fibonacci's
 * Return: this function returns 0 if successful
 */
int main(void)
{
	unsigned long int i, j, k, j_one, j_two, k_one, k_two;

	j = 1;
	k = 2;
	printf("%lu", j);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}
	j_one = j / 1000000000;
	j_two = j % 1000000000;
	k_one = k / 1000000000;
	k_two = k % 1000000000;
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", k_one + (k_two / 1000000000));
		printf("%lu", (k_two % 1000000000));
		k_one += j_one;
		j_one = k_one - j_one;
		k_two += j_two;
		j_two = k_two - j_two;
	}
	printf(i\n");
	return (0);
}

