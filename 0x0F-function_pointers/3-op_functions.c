#include "3-calc.h"

/**
 * op_add - this function adds two integers together
 * @a: a is the first operand
 * @b: b is the second operand
 * Return: the result of the operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this function subtracts the second operand from the first
 * @a: this is the first operand
 * @b: this is the second operand
 * Return: it returns the result of the operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - this function multiplies it's operands
 * @a: this is the first operand
 * @b: this parameter is the second operand
 * Return: the result of the operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - this function divides the first operand by the second
 * @a: this is the first operand
 * @b: this is the second operand
 * Return: this function returns the result of the operation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - this function returns the remainder after perfoming division
 * on the first operand with the second operand
 * @a: this is the first operand
 * @b: this is the second operand
 * Return: the result of the operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
