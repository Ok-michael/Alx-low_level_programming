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

	while (*tmp != '\0')
	{
		length++;
		tmp++;
	}
	tmp--;
	for(i = 0; i < length/2; i++)
	{
		char temp = *s;
		*s = *tmp;
		*tmp = temp;
		s++;
		temp--;
	}
}
