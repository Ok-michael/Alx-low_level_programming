#include "main.h"

/**
 * puts2 - this function prints every other character
 * of a string starting from the first character and
 * followed by a newline
 * @str: this function recieve a string as a parameter
 * Return: this function returns void
 */
void puts2(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		if (k % 2 == 0)
			_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
