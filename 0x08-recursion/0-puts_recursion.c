#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: Arguement
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_putchar('\n');
	}
	_puts_recursion(s + 1);
}
