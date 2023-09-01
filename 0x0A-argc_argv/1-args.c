#include <stdio.h>

/**
 * main - this function prints the number of arguments passed.
 * @argc: this parameter denotes number of commandline arguments.
 * @argv: this parameter is a pointer to an array of the
 * commmand line arguments.
 * Return: this function returns 0 when it is successful
 * otherwise it returns non-zero.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
