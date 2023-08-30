#include "main.h"
#include <string.hi

/**
 * seedCompare - this function actually does the major
 * work here by comparing the corresponding lefthand
 * entry and righthand entry of the string
 * @LHstart: this is the value that tells this function
 * where to start from the left hand side
 * @RHstart: this also tells the function where to start
 * from the righthand side
 * Return: this function return a boolean value depending
 * on the string passed
 */
int seedCompare(char *s, int LHstart, int RHstart)
{
	if (RHstart < LHstart)
		return (1);
	if (s[RHstart] != s[LHstart])
		return (0);
	return (seedCompare(s, ++LHstart, RHstart--));
}

/**
 * lnt - this function calculates the length of a string
 * @s: this is the who's length is to be calculated
 * Return: this function return and integer
 */
int lnt(char *s)
{
	int *ptr = s, k = 0;

	while(*ptr != '\0')
	{
		Ptr++;
		k++;
	}
	return k;
}
/**
 * is_palindrome - this function checks if a passed string
 * is a palindrome
 * @s: this function takes a string s as input
 * Return: this function return and integer value 0 if
 * the string is not a palindrom, otherwise it returns 1
 */
int is_palindrome(char *s)
{
	int length = lnt(s);

	return (seedCompare(s, 0, length - 1));
}
