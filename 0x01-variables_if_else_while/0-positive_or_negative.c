#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - declare and integer n
 * assign a random number to n each time the program is run
 * finally checks if the number is positive, negative or zero
 * and prints a corresponding message.
 * Return: alway return (0) when the program runs successfully
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
