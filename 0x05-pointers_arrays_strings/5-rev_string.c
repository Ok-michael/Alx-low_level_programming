#include <stdio.h>

/**
 * rev_string - this function reverse the order
 * of a string
 * @s: this function accepts s as a string parameter
 * Return: this function returns void
 */
void rev_string(char *s)
{
	int length = 0;
	char *tmp = s;
	int i;

	while (*tmp != '\0')
	{
		length++;
		tmp++;
		s++;
	}
	tmp--;
	s--;
	for (i = 0; i < length; i++)
	{
		*tmp = *s;
		tmp--;
		s--;
	}
	s = tmp;
}
