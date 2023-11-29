#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print a elements of a structure
 * @d: structure
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
			printf("Name: (nil)\n");
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		if ((*d).owner == NULL)
			printf("Owner: (nil)\n");
		printf("Owner: %s\n", (*d).owner);
	}
}
