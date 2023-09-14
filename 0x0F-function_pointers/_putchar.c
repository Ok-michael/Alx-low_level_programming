#include <unistd.h>

/**
 * _putchar - this function writes the character c to stdout
 * @c: this is the character to be printed
 * Return: this function returns 1 on success.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
