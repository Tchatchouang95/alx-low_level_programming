#include "main.h"

/**
 * print_alphabet - display letters of the alphabet
 *
 * Description: from a to z
 **/
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
