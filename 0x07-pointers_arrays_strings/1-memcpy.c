#include "main.h"

/**
 * _memcpy - this function copies n bytes from memory area src to
 * memory area dest
 * @dest: this function takes dest as the destination string
 * @src: this function also takes src as the source string
 * @n: this function accepts n as a parameter to measure the 
 * number of bytes to be copied
 * Return: the function returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned k;

	for (k = 0; k < n; k++)
		dest[k] = src[k];
	return (dest);
