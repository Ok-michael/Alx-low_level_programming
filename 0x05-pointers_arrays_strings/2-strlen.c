#include <stdio.h>

/**
 * _strlen - this function calulates the lent of a string
 * @s: this function accepts as a pointer to characters
 * Return: the funtion returns cnt
 */
int _strlen(char *s)
{
	int cnt = 0;

	while (*s != '\0')
	{
		cnt++;
		s++;
	}
	return (cnt);
}
