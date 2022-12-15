#include "main.h"

/**
 * display_digits - Computes and displays figures
 * @x: Arguement
 *
 * Return: void
 */
void display_digits(int x)
{
	if (x < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(x + '0');
	}
	else if (x < 100)
	{
		_putchar(' ');
		_putchar(x / 10 + '0');
		_putchar(x % 10 + '0');
	}
	else if (x >= 100)
	{
		_putchar(x / 100 + '0');
		_putchar((x % 100) / 10 + '0');
		_putchar(x % 10 + '0');
	}
	else
	{
	}
}
/**
 * print_times_table - Prints thhe N times tables
 * @n: Arguement
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n > 15 || n < 0)
	{
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
				{
					_putchar(0 + '0');
					continue;
				}
				product = i * j;
				_putchar(',');
				_putchar(' ');
				display_digits(product);
			}
			_putchar('\n');
		}
	}
}
