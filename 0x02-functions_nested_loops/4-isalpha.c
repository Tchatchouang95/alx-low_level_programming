#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: Input character to be checked
 *
 * Return: Returns 1 if true and 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
