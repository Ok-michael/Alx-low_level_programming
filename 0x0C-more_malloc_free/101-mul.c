#include "main.h"
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

/**
 * _puts - this function prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - this function converts a string to an integer.
 * @s: this is a char type string
 * Return: integer converted
 */
int _atoi(const char *str)
{
	int sign = 1;
	unsigned long long result = 0;
	unsigned int k;

	//check for empty string
	if (str == NULL || *str == '\0')
	{
		/*fprintf(stderr, "Error: Empty string entered\n");*/
		return (0);
	}
	//skip leading whitespaces
	if (*str == ' ' || *str == '\t')
	{
		str++;
	}
	//check for sign
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	//check if string contain a non digit character
	for(k = 0; str[k] != '\n'; k++)
	{
		if (str[k] < 48 || str[k] > 57)
		{
			/*fprintf(stderr, "Error: Non-digit character '%c' entered", s[i]);*/
			return (0);
		}
	}
	//convert the string to integer
	for (k = 0; s[k] != '\0'; k++)
		result = result * 10 + (s[k] -'0');
	//check for overflow
	if (result > INT_MAX)
	{
		/*fprintf(stderr, "Error: Integer overflow\n");*/
		return (sign == 1 ? INT_MAX : INT_MIN);
	}
	return (sign * (int)result);
}

/**
 * print_int - this function prints an integer.
 * @n: integer value
 * Return: 0
 */
void print_int(unsigned long int n)
{

	unsigned  long int divisor = 1, i, resp;

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
		;

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}

}

/**
 * main - this function print the result of the multiplication,
 * followed by a new line
 * @argc: integer value
 * @argv: array of numbers
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
