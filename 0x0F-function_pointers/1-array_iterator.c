#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - print each element of an array
 * @array: array whos elements are to be printed
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
