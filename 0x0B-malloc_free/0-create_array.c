#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and init  it with a specific char
 * @size: size of memory to be allocated
 * @c: char to be allocated to each byte of memory
 * Return: address of alocated memory
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = (char *)malloc(size);

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
