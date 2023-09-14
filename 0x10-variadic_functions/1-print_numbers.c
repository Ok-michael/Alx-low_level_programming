#include "variadic_functions.h"

/**
 * print_numbers - this function prints integers passed as arguments
 * @separator: this is used to separate the output
 * @n: this is the the number of integers to be printed
 * @...: this parameter is the integers to print
 * Description: This function prints integers, separated by separator, followed
 * by a new line. If separator is NULL, it's treated as the empty string.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int rem = n;

	va_start(arguments, n);
	if (!separator)
		separator = "";
	while (rem--)
	{
		printf("%i", va_arg(arguments, int));
		if (remaining)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}
