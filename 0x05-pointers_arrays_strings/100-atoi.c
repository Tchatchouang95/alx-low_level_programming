#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string into an integer
 * @s: pointer to a string
 *
 * Return: int
 */
int _atoi(char *s)
{
	int i, num, minus;
	short boolean;

	i = minus = num = boolean = 0;
	minus = -1;
	for (; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			minus *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			num *= 10;
			num -= (s[i] - 48);
			boolean = 1;
		}
		else if (boolean == 1)
		{
			break;
		}
	}
	num *= minus;
	return (num);
}
