#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Searches for an integer
 * @array: array of int
 * @size: size of array
 * @cmp: pointer to be used to compare values
 * Return: Always int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
