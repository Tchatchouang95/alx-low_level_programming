#include "dog.h"

/**
 * init_dog - Initialises a variable of type struct dog
 * @name: Name of the dog
 * @age: Dog's age
 * @owner: Dog's owner
 * @d: Structure
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
