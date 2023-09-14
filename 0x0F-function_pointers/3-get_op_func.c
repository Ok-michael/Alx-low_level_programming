#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - this function helps select the correct function
 * to be executed
 * @s: this is the operation to perform
 * Return: this function returns Null if s is not one of the
 * defined operators ('+', '-', '*', '/', '%'), otherwise, it
 * returns a pointer to the appropriate function.
 */
int (*get_op_func(char *s))(int, int)
{
	int k = 0;
	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL }
	};

	while (s && ops[k].op != NULL)
	{
		if (!strcmp(s, ops[k].op))
			return (ops[k].f);
		++k;
	}

	return (NULL);
}
