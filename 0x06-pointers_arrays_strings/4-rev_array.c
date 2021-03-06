#include "main.h"

/**
 * reverse_array - reverse an array of numbers
 * @a: input array
 * @n: length of the array
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i, f, tmp;

	i = 0;
	f = n - 1;
	while (i < f)
	{
		tmp = a[i];
		a[i] = a[f];
		a[f] = tmp;
		i++;
		f--;
	}
}
