#include "main.h"

/**
 * _strchr - this function locates a character in a string
 * passed in as an argument
 * @s: this function takes a string literal s as a parameter
 * @c: this function takes a character literal c as
 * a parameter
 * Return: a pointer to the first occurrence of
 * the character c
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int k = 0;

	while (s[k] != '\0')
	{
		if (s[k] == c)
			return (s + k);
		k++;
	}
	return ('\0');
}
