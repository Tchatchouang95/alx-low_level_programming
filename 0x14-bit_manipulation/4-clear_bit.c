#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: a string
 * @index: index of a bit
 * Return: 1 if true and -1 if false
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = *n & ~(1 << index);
		return (1);
	}
}
