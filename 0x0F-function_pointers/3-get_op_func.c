<<<<<<< HEAD
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * the operation asked by the user.
 * @s: char operator.
 *
 * Return: pointer to the function that corresponds to the operator.
=======
#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - select the correct function
 * @s: operator
 * Return: 0 if false, something else otherwise.
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
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
<<<<<<< HEAD
	int i = 0;

	while (i < 10)
	{
		if (s[0] == ops->op[i])
			break;
		i++;
	}

	return (ops[i / 2].f);
=======

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
}
