#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of int from a given range
 * @min: minimum integer in array
 * @max: maximum integer in array
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int *array = NULL;
	int length, i;

	if (min > max)
		return (NULL);
	length = (max - min) + 1;
	array = (int *)malloc(length * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		if (min <= max)
		{
			array[i] = min;
			min++;
		}
	}
	return (array);
}
