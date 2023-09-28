#include "main.h"

/**
 * binary_to_uint - this function converts a binary number to anunsigned
 * integer
 * @b: this is the binary value to be converted.
 *
 * Return: this function returns the converted unsigned integer value
 */
igned int binary_to_uint(const char *b)
{
	unsigned int uns_int;
	int length, base_two;

	if (!b)
		return (0);

	uns_int = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, base_two = 1; length >= 0; length--, base_two *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			uns_int += base_two;
		}
	}

	return (uns_int);
}
