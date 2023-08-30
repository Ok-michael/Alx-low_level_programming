#include "main.h"

/**
 * _pow_recursion - this function calculates x raised
 * raised to power y
 * @x: this is the base
 * @y: this is the power
 * Return: this function returns an integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
