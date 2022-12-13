#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints all the alphabet, in lowercase
 *
 * Return: Returns nothing
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
	return 0;
}
