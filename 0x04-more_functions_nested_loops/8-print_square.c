#include "main.h"

/**
 * print_square - displays N x N paterns
 * @size: imput length of pattern
 * Return: always 0
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for(j = 1; j <= n; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
