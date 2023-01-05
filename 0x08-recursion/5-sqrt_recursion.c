#include "main.h"

/**
 * square_root - initiates a quess value for the quare root for a number
 * @guess: guess number for test
 * @a: number
 * Return: Always square root
 */
int square_root(int a, int guess)
{
	if ((guess * guess) == a)
	{
		return (guess);
	}
	else if ((guess * guess) > a)
	{
		return (-1);
	}
	else
	{
		return (square_root(a, (guess + 1)));
	}
}
/**
 * _sqrt_recursion - computes the square root recursively
 * @n: number for which we need to compute its square root
 * Return: Always square root
 */
int _sqrt_recursion(int n)
{
	int i;

	i = 1;
	return (square_root(n, 1));
}
