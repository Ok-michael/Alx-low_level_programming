#include <stdio.h>
#include <stdlib.h>

/**
 * main - this function print it's opcodes
 * @argc: this parameter is the number of arguments passed
 * @argv: the arguments of vectors passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int p;
	char *mem = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	p = atoi(argv[1]);

	if (p < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (p--)
		printf("%02x%c", *mem++ & 0xff, p ? ' ' : '\n');

	return (0);
}
