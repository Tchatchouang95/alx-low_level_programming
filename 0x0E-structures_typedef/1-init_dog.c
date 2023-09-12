#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialises a variable type
 * @d: pointer to structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
