#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if imput character is a digit
 * @c: input parameter
 *
 * Description: checks for a digit
 * Return: Always (0)
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
