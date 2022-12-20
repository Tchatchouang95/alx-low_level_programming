#include "main.h"

/**
 * print_rev - Reverses a string
 *
 * @s: pointer to string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
