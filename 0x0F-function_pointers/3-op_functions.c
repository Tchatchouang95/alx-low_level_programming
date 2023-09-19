#include "3-calc.h"

/**
 * op_add - Adds two int
 * @a: first int
 * @b: second int
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two int
 * @a: first int
 * @b: second int
 * Return: Subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two int
 * @a: first int
 * @b: second int
 * Return: Multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two int
 * @a: first int
 * @b: second int
 * Return: Division
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Finds the remainder of two int
 * @a: first int
 * @b: second int
 * Return: Remainder
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
