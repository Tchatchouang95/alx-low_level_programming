#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialises a structure
 * @d: pointer to structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}


