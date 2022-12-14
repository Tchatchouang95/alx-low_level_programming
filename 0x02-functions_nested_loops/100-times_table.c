#include "main.h"

/**
 * print_times_table - Prints the n times tables
 * @n: Arguement
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n > 15)
	{
	}
	else if (n < 0)
	{
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				if (product >= 10)
				{
					_putchar(product / 10 + '0');
					_putchar(product % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(product + '0');
				}
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
