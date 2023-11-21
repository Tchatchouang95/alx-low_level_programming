#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chararacters
 * @size: size of array
 * @c: character with which array will be initialised
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = (char *)malloc(size);
	if (array == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
