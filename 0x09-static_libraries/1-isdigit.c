#include <stdio.h>

/**
 * _isdigit - this function checks if a given argument
 * is a digit or not
 * @c: this function accept one integer parameter c
 * Return: this function returns 1 if c is a digit
 * otherwise it returns 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
