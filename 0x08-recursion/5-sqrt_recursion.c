#include "main.h"

/**
 * sqr - this function searches through the integer class
 * looking for a number that'll match the square root of n
 * @n: this is the number whose square root is being searched
 * for
 * @k: this is actually the value used to control the recursion
 * Return: this function returns the square root of the number if
 * it exists in the set of integers, otherwise it returns -1
 */
int sqr(int n, int k)
{
	if (k * k == n)
		return (k);
	if (k * k < n)
		return (sqr(n, k + 1));
	return (-1);
}

/**
 * _sqrt_recursion - this function seeks the the square root
 * of a passed argument in the set of natural numbers
 * @n: this is the number whose square root the function
 * seeks
 * Return: this function return and integer value equal to the
 * root of n if it exits in the set of natural numbers, otherwise
 * it returns -1
 */
int _sqrt_recursion(int n)
{
	n = sqr(n, 1);
	return (n);
}
