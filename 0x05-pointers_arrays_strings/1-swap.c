#include <stdio.h>

/**
 * swap_int - this functions swaps the value of
 * two integers
 * @a: this function accepts an n as a pointer
 * @b: this function accepts b too as a pointer
 * Return: this function returns void
 */
void swap_int(int *a, int *b)
{
	int tmpr = *a;
	*a = *b;
	*b = tmpr;
}
