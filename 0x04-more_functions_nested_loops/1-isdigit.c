#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks for a digit
 * @c: input arguement
 *
 * Return: 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 + '0' && c <= 9 + '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
