#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user
 * function returns a pointer to the function that
 * corresponds to the operator given as a parameter
 *
 * @s: operator passed as argument to the program
 *
 * Return: If s does not match any of the 5 expected operators (+, -, *, /, %),
 * return NULL
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int j = 0;

	while (ops[j].op)
	{
		if (*s == *ops[j].op)
			return (ops[j].f);
		j++;
	}
	return (NULL);
}
