#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - Finds the operator entered by a user
 * @s: operator passed as arguement
 * Return: Pointer to a function that corresponds to an operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = 
	{
		{"+", op_add}, 
		{"-", op_sub}, 
		{"*", op_mul}, 
		{"/", op_div}, 
		{"%", op_mod}, 
		{NULL, NULL}
	};
       	int i = 0;
	
	while (i < 5)
	{
		if (!strcmp(ops[i].op, s))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}

