#include "main.h"

/**
 * wildcmp - this function compare the corresponding letters
 * of two string to verify if they are matches
 * @s1: this is one of the strings to be compared
 * @s2: this is the other string to be compared
 * Return: this function returns an integer
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	return (wildcmp(s1 + 1, s2 + 1))
}
