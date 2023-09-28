#include "main.h"

/**
 * get_endianness - this function checks the endianness
 * Return: it returns 0 if big endian and  1 if little endian
 */
int get_endianness(void)
{
	int p = 1;
	char *q;

	q = (char *)&p;
	return (*q);
i
