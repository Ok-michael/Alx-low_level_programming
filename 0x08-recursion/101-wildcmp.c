#include "main.h"

/**
 * seedCompare - this function compare the corresponding letters
 * of two string to verify if they are matches
 * @strA: this is one of the strings to be compared
 * @strB: this is the other string to be compared
 * Return: this function returns an integer
 */
int seedCompare(char *strA, char *strB)
{
	if (*strA == '\0' && *strB == '\0')
		return (1);
	if (*strA != *strB)
		return (0);
	return (seedCompare(strA + 1, strB + 1));
}

/**
 * wildcomp - this function uses the previous function
 * to tell if two strings are identical or not
 * @s1: one string to be compared
 * @s2: the other string to be compared
 * Return: this function returns a boolean value depending
 * on the passed strings
 */
int wildcmp(char *s1, char *s2)
	return (eedCompare(s1, s2))
