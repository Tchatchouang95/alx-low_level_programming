#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Input test number
 *
 * Return: 1 if positive, -1 if negative ande 0 if equal 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
