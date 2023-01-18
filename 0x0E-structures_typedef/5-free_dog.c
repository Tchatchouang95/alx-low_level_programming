#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the dog
 * @d: Pointer to structure parameters
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
