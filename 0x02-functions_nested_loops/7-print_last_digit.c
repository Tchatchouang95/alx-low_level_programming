#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @i: Arguement
 *
 * Return: The last digit
 */
int print_last_digit(int i)
{
	int l_digit;

	l_digit = i % 10;

	if (i < 0)
	{
		l_digit = (-1) * l_digit;
	}
	_putchar(l_digit + '0');
	return (l_digit);
}
