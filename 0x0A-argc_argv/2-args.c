#include <stdio.h>
#include "main.h"

/**
 * main - this function prints the number of arguments
 * passed into the program
 * @argc: this parameter denotes the number of commandline
 * arguments
 * @argv: this parameter is a pointer to the array of
 * arguments
 * Return: this function returns 0 if it is successful
 * otherwise it returns any other integer
 */
int main(int argc, char const *argv[])
{
	int k = 0;

	while (argc--)
	{
		printf("%s\n", argv[k]);
		k++;
	}

	return (0);
}
