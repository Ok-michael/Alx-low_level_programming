#include "main.h"

/**
 * _isalpha - this function checks if the passed parameter is an alphebet
 * @Char: this function accepts an integer Char
 * Return: this function returns True or False depending on the parameter
 * passed
 */
int _isalpha(int Char)
	return ((Char >= 'a' && Char <= 'z') || (Char >= 'A' && Char <= 'Z'));
