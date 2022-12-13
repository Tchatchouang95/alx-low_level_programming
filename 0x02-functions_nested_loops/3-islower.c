#include "main.h"

/**
 * _islower - Checks fo lowercase character
 * @c: input character to be checked
 *
 * Return: returns 1 for sucess and 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
