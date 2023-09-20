#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum's its parameters
 * @n: number of parameters
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}
	va_end(args);
	return (sum);
}
