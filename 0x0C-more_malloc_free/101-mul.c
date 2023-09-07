#include "main.h"
#include <stdlib.h>

/**
 * _puts - this function prints a string, followed by a new line,
 * @string: pointer to the string to print
 * Return: void
 */
void _puts(char *string)
{
	int i = 0;

	while (string[i])
	{
		_putchar(string[i]);
		i++;
	}

}

/**
 * _atoi - this function converts strings to an integers.
 * @s: char type string
 * Return: integer converted
 */
int _atoi(const char *string)
{
	int sign = 1;
	unsigned long int resp = 0, firstNum, i;

	for (firstNum = 0; !(string[firstNum] >= 48 && string[firstNum] <= 57); firstNum++)
	{
		if (string[firstNum] == '-')
		{
			sign *= -1;
		}
	}

	for (i = firstNum; string[i] >= 48 && string[i] <= 57; i++)
	{
		resp *= 10;
		resp += (string[i] - 48);
	}

	return (sign * resp);
}

/**
 * print_int - this prints an integer.
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
 * main - print the result of the multiplication, followed by a new line
 * @argc: int
 * @argv: list
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
