#include <stdio.h>

/**
 * _isupper - this function take a character input
 * checks it to know if it's a capital letter
 * @Char: the function accepts a character Char in
 * integer form
 * Return: this function returns 1 if Char is capital
 * and 0 otherwise
 */
int _isupper(int Char)
{
	if (Char > 64 && Char < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
