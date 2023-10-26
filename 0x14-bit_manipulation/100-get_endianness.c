#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: it returns 0 if big endian or 1 otherwise
 */
int get_endianness(void)
{
	int m = 1;
	char *n;

	n = (char *)&m;
	return (*n);
}
