#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 t an index
 * @n: a string of 0 and 1 chars
 * @index: index of the bit you want to get
 * Return:  1 if true and -1 if false
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = *n | 1 << index;
		return (1);
	}
}
