#include "calc.h"

/**
  *get_op_func - function to perform the select operation
  *@s: char pointer as operator
  *
  *Return: pointer to function that correspond to the operator given
  *as parameter
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

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
	}
	return (NULL);
}
