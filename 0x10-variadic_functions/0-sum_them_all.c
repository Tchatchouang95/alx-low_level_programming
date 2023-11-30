#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters
 * @n: number of arguements
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}
	}
	va_end(args);
	return (sum);
}

