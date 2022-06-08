#include "main.h"

/**
 * print_to_98 - print integers in the range n<=98<=n
 * @n: place holder for our integers
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			_putchar(n + 48);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			_putchar(n + 48);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	return;
}
