#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: size of memory to be allocated
 */
void *malloc_checked(unsigned int b)
{
	int *alloc;

	alloc = (int *)malloc(b);
	if (alloc == NULL)
	{
		exit(98);
	}
	return (alloc);
}


