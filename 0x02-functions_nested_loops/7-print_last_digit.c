#include "main.h"

/**
 * print_last_digit - prints out the last digit of a number
 * @n: placeholder
 * Description: displayse as output the last digit
 * Return: Always last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (n < 0)
	{
		last_digit = (-1) * last_digit;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
