#include "main.h"

/**
 * test_prime - makes tests to check if input value is prime or not
 * @x: increment
 * @y: test number
 * Return: Always 1 or 0
 */
int test_prime(int x, int y)
{
	if (y != 1)
	{
		if ((y / x) == 1)
		{
			return (1);
		}
		else if ((y % x) == 0 || y <= 1)
		{
			return (0);
		}
		else
		{
			return (test_prime(x + 1, y));
		}
	}
	return (0);
}
/**
 * is_prime_number - check if an input number is prime or not
 * @n: input test number
 * Return: Always 1 or 0
 */
int is_prime_number(int n)
{
	int i;

	i = 2;
	return (test_prime(i, n));
}
