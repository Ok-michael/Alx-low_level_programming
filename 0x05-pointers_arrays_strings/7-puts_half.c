#include "main.h"

/**
 * puts_half - this function prints half of a string
 * followed by a new line
 * @str: this function accepts a string parameter
 * Return: this function returns void
 */
void puts_half(char *str)
{
	int ctn = 0, k;

	while(ctn >= 0)
	{
		if (str[ctn] == '\0')
			break;
		ctn++;
	}

	if (ctn % 2 == 1)
		k = ctn / 2;
	else
		k = (ctn - 1) / 2;
	for (k++; k < ctn; k++)
		_putchar(str[k]);
	_putchar('\n');
}
