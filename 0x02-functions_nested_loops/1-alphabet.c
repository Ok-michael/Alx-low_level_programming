#include "main.h"

/**
 * main - print all the small letters
 * Return: return 0 if everything goes on well
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
	return (0);
}
