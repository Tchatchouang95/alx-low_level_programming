#include "main.h"

/**
 * factorial - calculates the factorial of a number
 * @n: Number who's factorial is to be calculated
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
