#include <math.h>
#include "main.h"

/**
 * _pow_recursion - Finds the power of a nujmber using recursion
 * @x: whole number
 * @y: power
 * Return: power
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
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
