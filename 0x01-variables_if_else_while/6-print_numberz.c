#include <stdio.h>

/**
 * main - This function prints all the single digit numbers
 * of base 10 starting from 0 followed by a new line.
 * it declares a variable Char of type char , initializes it 
 * to '0' and uses a while loop to modify the value of Char.
 * Return: the funtion returns 0 each time this is successfully
 * ran
 */
int main(void)
{
	char Char = '0';

	while (Char <= '9')
	{
		putchar(Char);
		Char ++;
	}
	putchar('\n');
	return (0);
}
