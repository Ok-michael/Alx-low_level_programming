#include <stdio.h>

/**
 * main - declares and initializes two variables, sm_ltr, cpt_ltr
 * of type char
 * uses a while loop to modify the values of each
 *  and prints the values on the screen using puchar
 *  Return: finally the function returns '0' if everything goes well
 */
int main(void)
{
	char sm_ltr = 'a', cpt_ltr = 'A';

	while (sm_ltr <= 'z')
	{
		putchar(sm_ltr);
		sm_ltr++;
	}
	while (cpt_ltr <= 'Z')
	{
		putchar(cpt_ltr);
		cpt_ltr++;
	}
	putchar('\n');
	return (0);
}
