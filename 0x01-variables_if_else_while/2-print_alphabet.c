#include <stdio.h>

/**
 * main -This function declares and a char alph 
 * and initializes it to 'a'
 * then iterates through to 'z'
 * and finally prints a new line. 
 * Return: It returns a (0) if everything goes well
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
