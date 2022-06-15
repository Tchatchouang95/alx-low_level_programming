#include "main.h"

/**
 * puts_half - start printing from the middle of a string
 * @str: imput pointer
 * Return: Always 0
 */
void puts_half(char *str)
{
	int i, mid;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 != 0)
	{
		mid = (i + 1) / 2;
		while (str[mid] != '\0')
		{
			_putchar(str[mid]);
			mid++;
		}
	}
	else
	{
		mid = i / 2;
		while (str[mid] != '\0')
		{
			_putchar(str[mid]);
			mid++;
		}
	}
	_putchar('\n');
}
