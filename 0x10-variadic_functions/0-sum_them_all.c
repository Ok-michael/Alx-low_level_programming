 #include "variadic_functions.h"

/**
 * sum_them_all - this function sums all the argument passed
 * into it as
 * @n: this is the number of unnamed arguments passed
 * @...: this parameter accounts for all the unnamed arguments
 * or parameter not specified
 * Return: the function returns the both the named and unnamed
 * arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int rem = n;
	int total = 0;

	va_start(arguments, n);
	while (rem--)
		total = total + va_arg(args, int);
	va_end(args);

	return (total);
}
