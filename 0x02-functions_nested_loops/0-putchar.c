#include "main.h"

/**
 * main - this function prints the word simply _putchar
 * on the screen
 * Return: the function returns 0 when ran successfully
 */
int main(void)
{
	char *txt = "_putchar";
	int ctn;

	for (ctn = 0; txt[ctn] != '\0'; ctn++)
	       _putchar(txt[ctn]);
	_putchar('\n');
	return (0);
}
