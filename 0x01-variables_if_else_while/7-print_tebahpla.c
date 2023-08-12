#include <stdio.h>

int main(void)
/**
 * main -this funciton prints the lowercase alphabet in reverse order
 * using a while loop and variable Char.
 * the function prototype is `int main(void)`
 * Return: it returns 0 when ran successfully
 */
{
	char Char = 'z';

	while (Char >= 'a')
	{
		putchar(Char);
		Char--;
	}
	putchar('\n');
	return (0);
}
