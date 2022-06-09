#include "main.h"

/**
 * more_numbers - loops through a range of numbers and print it 10 times
 * Return: Always int
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <=14; y++)
		{
			if (y >= 10)
			{
				_putchar(y / 10 + '0');
			}
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
}
