#include "main.h"

/**
 * print_alphabet_x10 - print the lower case alphabet 10 times
 * Return: returns void
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
			_putchar('\n');
		}
	}
}
