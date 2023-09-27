#include "main.h"

/**
 * _realloc - reallocates memory using malloc and frees
 * @ptr: pointer
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *fresh_ptr = NULL;

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL && new_size != 0)
	{
		fresh_ptr = malloc(new_size);
		return (fresh_ptr);
	}

	if (ptr != NULL && (new_size > old_size))
	{
		fresh_ptr = malloc(new_size);
		free(ptr);
		return (fresh_ptr);
	}

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	fresh_ptr = malloc(new_size);
	return (fresh_ptr);
}
