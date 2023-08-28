#include "main.h"

/**
 * _memset - this function fills the first n bytes
 * of a memory area pointed to by s with the constant
 * byte b
 * @s: this is a string variable
 * @b: this function accepts b as char
 * @n: this is the number of bytes to be filled by 
 * the function
 * Return: this function return s a pointer to string
 * literals
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k;

	for(k = 0; k < n; k++)
		s[k] = b;
	return (s);
}
