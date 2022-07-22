#include "main.h"
/**
 * get_bit - returns the value to an index
 * @n: unsigned long int
 * @index: index to return
 * Return: value at input index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		return (n >> index & 1);
	}
}
