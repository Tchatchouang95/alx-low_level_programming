#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer in an array
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to the function used to compare values
 * Return: Index of the first match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}

