#include "main.h"

/**
 * times_table - Prints the 9times table starting with 0
 *
 * Return: Nothing
 */
void times_table(void)
{
	int l, w, product;

	for (l = 0; l < 10; l++)
	{
		for (w = 0; w < 10; w++)
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
				_putchar(product + '0');
			}
		}
		_putchar('\n');
	}
}

