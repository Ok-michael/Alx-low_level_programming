#include "main.h"
/**
 * _strcat - this function concatenates or joins two
 * strings together
 * @dest: this parameter gets the concatenation from
 * the second parameter.
 * @src: this parater is acts as a source the the first.
 * Return: this function returns a pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int dest_ctn = 0, src_ctn = 0;

	while (dest[dest_ctn] != '\0')
	{
		dest_ctn++;
	}

	while (src_ctn >= 0 && src[src_ctn != '\0')
	{
		dest[dest_ctn] = src[src_ctn];
		dest_ctn++;
		src_ctn++;
	}
	return (dest);
}
