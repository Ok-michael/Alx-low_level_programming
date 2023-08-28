#include "main.h"

/**
 * set_string - this function sets the value of a pointer to a char
 * @s: this pointer points to another pointer
 * @to: this is the character
 */
void set_string(char **s, char *to)
{
	s[0] = to;
}
