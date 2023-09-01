#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - this function print sum of two numbers.
 * @argc: this is the number of commandline arguments.
 * @argv: this is a pointer to an array of commmand line arguments.
 * Return: this function returns 0 if it runs successfully,
 * otherwise a non-zero integer is returned.
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
