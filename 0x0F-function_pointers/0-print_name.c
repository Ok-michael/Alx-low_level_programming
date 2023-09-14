#include "function_pointers.h"

/**
 * print_name - this function print the name passed in as an
 * argument using the function supplied by the caller
 * @name: this parameter is the name to print
 * @f: this parameter specifies the function that will becalled
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
