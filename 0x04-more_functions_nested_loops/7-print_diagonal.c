#include "main.h"

/**
 * print_diagonal - printing a diagonal pattern
 * @n: parameter
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (i == j)
				{
					_putchar(92);
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
