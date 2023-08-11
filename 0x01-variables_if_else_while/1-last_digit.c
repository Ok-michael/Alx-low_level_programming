#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - declares and integer n and assignes it a new value each time it's run
 *  declare two other variables of type in and char* for processing
 *  and geting the last digits of n each time
 *  finally prints a message combining bothe the values of n, lst_dgt
 *  evaluating it to know if the value is greater than 5
 *  Return: alway return (0) when the program run successfully
 */
int main(void)
{
	int n, lst_dgt;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst_dgt = n % 10;

	if (lst_dgt > 5)
		printf("Last digit of %d is %d and is greater than 5\n",n, lst_dgt);
	else if(lst_dgt <=5)
		printf("Last digit of %d is %d and iss less than 6 and not 0\n", n, lst_dgt);
	else if (lst_dgt == 0)
		printf("Last digit of %d is %d and is 0\n", n, lst_dgt);
	return (0);
}
