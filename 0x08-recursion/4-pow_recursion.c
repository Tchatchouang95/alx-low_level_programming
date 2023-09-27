#include "main.h"

/**
 * _pow_recursion - Finds the power of a number
 * @x: first arguement
 * @y: second arguement
 * Return: the power
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
