#include "main.h"
#include <math.h>
/**
 * _pow_recursion - Finds the power of a number
 * @x: first arguement
 * @y: second arguement
 * Return: the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
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
