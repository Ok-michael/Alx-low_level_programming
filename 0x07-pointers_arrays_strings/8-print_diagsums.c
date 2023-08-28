#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - this function prints the sum of the two diagonals
 * @a: this is an integer matrix
 * @size: this the matrix size
 */
void print_diagsums(int *a, int size)
{
	int x, sumA = 0, sumB = 0;

	for (x = 0; x < size; x++)
	{
		sumA += a[x];
		sumB += a[size - x - 1];
		a += size;
	}
	printf("%d, ", sumA);
	printf("%d\n", sumB);
}
