#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for array using malloc
 * @nmemb: Elements of array
 * @size: number of bytes of each element of array
 * Return: Null if code fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory =  malloc(nmemb * size);

	if (memory == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*((char *)memory + i) = 0;
	return (memory);
}
