# include "main.h"

/**
 * primeRecursive - this function checks if n is prime
 * @n: this number is check for primality
 * @div: this number derives from n and is used to 
 * control the recursion
 * Return: this function returns a boolean value
 */
int primeRecursive(int n, int div)
{
	if (n <= 1)
		return (0);
	if (div == 1)
		return (1);
	if (n % div == 0)
		return (0);
	return (primeRecursive(n, div - 1));
}

/**
 * is_prime_number - this function checks if a passed argument is
 * prime
 * @n: this is the number that is to be tested
 * Return: this function returns a boolean value
 * depending on the passed argument
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return 0;
	}
	return (primeRecursive(n, n - 1));
}
			
