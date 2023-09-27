#include "main.h"

/**
 * _calloc - allocates memory for an array
 * using malloc.
 * @nmemb: The number of member elements
 * @size: The array size in bytes
 * Return: pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = NULL;
	unsigned int i;

	if (nmemb > 0 && size > 0)
	{
		p = malloc(size * nmemb);

		if (p != NULL)
		{
			for (i = 0; i < nmemb * size; i++)
			{
				*((char *)p + i) = 0;
			}
		}
	}
	return (p);
}
