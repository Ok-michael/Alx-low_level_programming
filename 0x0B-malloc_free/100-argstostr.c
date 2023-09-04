#include "main.h"
#include <stdlib.h>

/**
 * argstostr - this function oncatenates all arguments passed
 * into a singular string;
 * arguments are separated by a new line in the string.
 * @ac: this is the number of arguments passed to the program.
 * @av: this is an array of pointers to the arguments.
 * Return: If ac == 0, av == NULL, or the function fails NULL is
 * returned otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int arg, byte, k, n = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			n++;
	}
	ptr = malloc(sizeof(char) * n + 1);
	if (ptr == NULL)
		return (NULL);
	k = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			ptr[k++] = av[arg][byte];
		str[k++] = '\n';
	}
	str[n] = '\0';
	return (ptr);
}
