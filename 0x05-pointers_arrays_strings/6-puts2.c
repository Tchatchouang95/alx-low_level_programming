#include "main.h"

/**
 * puts2 - print the even parts of a string
 * @str: imput pointer
 * Return: Always 0
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		if (i % 2 == 0)
		{
			_putchar(s[i]);
		}
		i++;
	}
	_putchar('\n');
}
