#include "main.h"

/**
 * print_rev - Reverse a string of characters
 * @s: imput string
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
