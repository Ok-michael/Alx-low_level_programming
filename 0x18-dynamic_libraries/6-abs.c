#include "main.h"
/**
 * _abs - the function accepts an integer k and returns
 * the absolute value
 * @k: the function uses the variable to store the values
 * being passed
 * Return: the function returns the value being passed if
 * the funtion is +ve, otherwise it returns (-) multiplied
 * by the value being passed
 */
int _abs(int k)
{
	if (k >= 0)
	{
		return (k);
	}
	else
	{
		return (-k);
	}
}
