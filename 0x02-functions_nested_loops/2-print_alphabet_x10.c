#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print all the letters of the alphabet x10
 *
 * Return: returns nothing
 */
void print_alphabet_x10(void)
{
	int i;
	char alpha;

	for (i = 1; i <= 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_purchar('\n');
	}
}
