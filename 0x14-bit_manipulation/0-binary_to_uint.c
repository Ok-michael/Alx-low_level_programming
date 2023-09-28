#include "main.h"

/**
 * binary_to_uint - this function converts a binary number to anunsigned
 * integer
 * @b: this is the binary value to be converted.
 *
 * Return: this function returns the converted unsigned integer value
 */
unsigned int binary_to_uint(const char *b)
{
	int length = 0, base_two = 1;
	unsigned int uns_int = 0;

	if (!b)
		return (0);
	if (!strcmp(b, "1"))
		return (1);
	while (b[length])
		length++;
	length--;
	while (length > 0)
	{
		length--;
		base_two = base_two * 2;
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}
		if (b[length] & 1)
		{
			uns_int += base_two;
		}
		/*length--;*/
		/*base_two = base_two * 2;*/
	}
	return (uns_int);
}
