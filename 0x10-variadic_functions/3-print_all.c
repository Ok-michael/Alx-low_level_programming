#include "variadic_functions.h"


/**
 * print_char - this function prints a character
 * @argument: the va_list with the character to print as it's next element
 * Return: this is the number of bytes printed
 */
int print_char(va_list argument)
{
	return (printf("%c", va_arg(argument, int)));
}

/**
 * print_float - this function print a float
 * @argument: this is the va_list with the float to print as it's next element
 * Return: the number of bytes printed
 */
int print_float(va_list argument)
{
	return (printf("%f", va_arg(argument, double)));
}


/**
 * print_int - this function prints an integer
 * @argument: this is the va_list with the integer to print as it's next element
 * Return: the number of bytes printed
 */
int print_int(va_list argument)
{
	return (printf("%i", va_arg(argument, int)));
}


/**
 * print_str - this function prints a string
 * @args: the va_list with the string to print as it's next element
 * Return: the number of bytes printed
 */
int print_str(va_list args)
{
	const char *str = va_arg(args, const char *);

	if (!str)
		str = "(nil)";
	return (printf("%s", str));
}


/**
 * print_all - this function prints anything passed in as an argument
 * @format: a format string listing the types of the proceeding arguments
 * @...: the values to print
 */
void print_all(const char * const format, ...)
{
	va_list args;
	print_fn_t fn_list[] = {
		{'c', print_char},
		{'f', print_float},
		{'i', print_int},
		{'s', print_str},
		{ 0,  NULL}
	};
	char *sep[] = {"", ", "};
	unsigned int bytes = 0, fn_index = 0, format_index = 0;

	va_start(args, format);
	while (format && format[format_index])
	{
		fn_index = 0;
		while (fn_list[fn_index].format)
		{
			if (format[format_index] == fn_list[fn_index].format)
			{
				printf("%s", sep[bytes != 0]);
				bytes += fn_list[fn_index].fn(args);
				break;
			}
			++fn_index;
		}
		++format_index;
	}
	printf("\n");
	va_end(args);
}
