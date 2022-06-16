#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse an array of numbers
 * @a: input array
 * @n: length of the array
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int initial, final, tmp;

	initial = 0;
	final = n - 1;
	while (initial < final)
	{
		tmp = a[initial]
		a[initial] = a[final]
		a[final] = tmp;
		inital++;
		final--;
	}
}
