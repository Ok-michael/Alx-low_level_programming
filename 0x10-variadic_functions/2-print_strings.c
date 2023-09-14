#include "variadic_functions.h"

/**
 * print_strings - this function prints strings
 * @separator: this is the output separator
 * @n: this is the number of strings to be printed
 * @...: the strings to print
 * Description: This function prints strings, separated by separator, followed
 * by a new line. If separator is NULL, it's treated as the empty string. If a
 * string is NULL, print "(nil)" instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int rem = n;
	const char *str = NULL;

	va_start(arguments, n);
	if (!separator)
		separator = "";
	while (rem--)
	{
		str = va_arg(arguments, const char *);
		printf("%s", str ? str : "(nil)");
		if (rem)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}
