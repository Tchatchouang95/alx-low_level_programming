#include "main.h"

/**
 * factorial - computes the factorial of a number
 * @n: input integer
 * Return : Always int
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
