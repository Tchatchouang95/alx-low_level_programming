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
	int i, sum = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
