#include "calc.h"

/**
 * get_op_func - select the correct function
 * 
 * @s: the operation
 * @a: first num
 * @b: second num
 *
 * Return: integer
 */

int (*get_op_func(char *s))(int a, int b)
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

	while (i < 6)
	{
		if (s == ops[i][0])
			return (ops[i][1]);
		i++;
	}
	return (NULL);
}
