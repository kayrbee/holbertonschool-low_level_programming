#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - pass to the desired operator function
 * @s: symbol of desired operator: +, -, *, /, %
 * Return: integer value of result of operation
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
	int i = 0;

	while (*ops[i].op != *s)
	{
		i++;

		if ((i > 4) || s[1] != '\0')
		{
			return (NULL);
		}
	}

	return (ops[i].f);

}

