#include "main.h"

/**
 * _islower - checks if the character passed is a lower case character
 * @Char: the function accepts one integer parameter Char and checks if it
 * is lower
 * Return: returns a boolean True if the check is successfull
 * otherwise it returns False
 */
int _islower(int Char)
{
	return (Char >= 'a' && Char <= 'z');
}
