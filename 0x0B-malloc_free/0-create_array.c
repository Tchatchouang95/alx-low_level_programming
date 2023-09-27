#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of characters
 * @size: input size
 * @c: characters to print
 * Return: Pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	i = 0;

	array = (char *) malloc(size);
	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
