#include "main.h"

/**
 * factorial - this function calculates the factorial of
 * an integer 
 * @n: this is the integer who's factorial is calculated
 * Return: this function return and integer which is the
 * factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n-1));
}
