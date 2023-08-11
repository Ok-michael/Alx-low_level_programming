#include <stdio.h>

/**
 * main - Declare a variable sm_ltr and initializes it to 'a'
 * uses a while loop to modify the values of
 * and print it out using putchar if the value is not either 'e' or 'q'
 * Return: if everything goes well, the funtion returns '0'
 */
int main(void)
{
	char sm_ltr = 'a';

	while (sm_ltr <= 'z')
	{
		if (sm_ltr != 'e' && sm_ltr != 'q')
			putchar(sm_ltr);
		sm_ltr++;
	}
	return (0);
}
