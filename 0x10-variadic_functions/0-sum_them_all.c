#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum's all input values
 * @n: last named parameter
 *
 * Description: Sums all parameters of the function
 * Return: return 0 if there are 0 parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0, num;
	va_list parameters;

	va_start(parameters, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		num = va_arg(parameters, int);
		sum = sum + num;
	}
	va_end(parameters);
	return (sum);
}
