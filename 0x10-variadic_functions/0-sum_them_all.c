#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum's all input values
 * @n: last named parameter
 * Return : Always the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list alt;

	va_start(alt, n);
	for (i = 0; i < n; i++)
	{
		int n = va_arg(alt, unsigned int);

		sum += n;
	}
	va_end(alt);
	return (sum);
}
