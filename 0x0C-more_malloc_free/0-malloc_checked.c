#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *str = malloc(b);

	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
