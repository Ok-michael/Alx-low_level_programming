#include "main.h"
#include <stdio.h>

/**
 * _strstr - this function locates a substring
 * @haystack: this is the string where the search is made
 * @needle: pointer
 * Return: pointer to the beginning of the located substrin
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x] > '\0'; x++)
	{
		for (y = x; haystack[y] > '\0' && needle[y - x] > '\0'; y++)
		{
			if (haystack[y] != needle[y - x])
			{
				break;
			}
		}
		if (needle[y - x] == '\0')
		{
			return (haystack + x);
		}
	}
	return (0);
}
