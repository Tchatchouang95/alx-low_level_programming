#include "main.h"
/**
 * _pow_recursion - displays value raised to a power
 * @x: whole int
 * @y: power to the int
 * Return: Always value of x raised to the power y
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
