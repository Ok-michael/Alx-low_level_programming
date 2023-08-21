#include <stdio.h>

/**
 * rev_string - this function reverse the order
 * of a string
 * @s: this function accepts s as a string parameter
 * Return: this function returns void
 */
void rev_string(char *s)
{
	int i, length, half_length;
	char first, last;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	length = i - 1;
	half_length = length / 2;
	while (half_length >= 0)
	{
		first = s[length - half_length];
		last = s[half_length];
		s[half_length] = first;
		s[length - half_length] = last;
		half_length--;
	}
}
