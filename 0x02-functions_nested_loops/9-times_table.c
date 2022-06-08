#include "main.h"

/**
 * times_table - Prints out the time table for 0 to 9
 * Description: Displays a multiplication table
 * Return: Nothing
 */
void times_table(void)
{
	int l, w, product;

	for (l = 0; l <= 9; l++)
	{
		for (w = 0; w <= 9; w++)
		{
			if (w == 0)
			{
				_putchar(0 + '0');
				continue;
			}
			product = l * w;
			_putchar(',');
			_putchar(' ');
			if (product >= 10)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(product);
			}
		}
		_putchar('\n');
	}
}
