#include "main.h"

/**
 * factorial - Calculates the factorial of a number
 * @n: Number who's factorial is to be seeked
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
