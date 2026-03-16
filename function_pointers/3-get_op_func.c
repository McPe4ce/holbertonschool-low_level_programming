#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - Function that grabs the operator
 * @s: Function that points to the argument operator
 * Return: ops[i].f (The operator pointed by f in the op_t struc
 * that matches with what s sees in the argument line)
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

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
		return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
