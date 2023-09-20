#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to separate two numbers
 * @n: number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, result;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		result = va_arg(args, int);
		printf("%d", result);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
