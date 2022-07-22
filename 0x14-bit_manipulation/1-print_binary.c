#include "main.h"

/**
 * print_binary - print the binary representation of a number
 * @n: integer holder
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int prtbin = ((n & 1) + '0');

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar(prtbin);
}
