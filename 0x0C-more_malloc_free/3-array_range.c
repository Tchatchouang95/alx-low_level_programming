#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: The minimum value
 * @max: The maximum value
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p = NULL;
	int size, m;

	if (min <= max)
	{
		size = max - min + 1;
		p = malloc(size * sizeof(int));
		if (p != NULL)
		{
			for (m = 0; min <= max; m++, min++)
				ptr[m] = min;
		}
	}
	return (p);
}
