#include "main.h"

/**
 * print_numbers - displays numbers of a given range
 *
 * Return: Always (0)
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
