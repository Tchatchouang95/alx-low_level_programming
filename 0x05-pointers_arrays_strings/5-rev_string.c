#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer variable
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
}
