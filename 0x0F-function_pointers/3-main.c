#include "3-calc.h"
#include <stdio.h>

/**
 * main - this is a very basic calculator that performs our basic numerical
 * operations
 * @argc: this is the number of arguments passed
 * @argv: this is a vector of all arguments passed
 * Description: The programme performs a specified operation on the arguments
 * passed and prints the result on the screen with a newline. It however prints
 * "Error" is the wrong number of arguments is passed and exits with  98
 * it also terminates with a process status of 99 if the operator given is not
 * one of '+', '-', '*', '/' or '%' and prints "Error".
 * Divisions by 0 result in "Error" and terminates with 100
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	f = get_op_func(argv[2]);

	if (!f)
	{
		puts("Error");
		exit(99);
	}

	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
