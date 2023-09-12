#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print out elements of a structure dog
 * @d: pointer to structure
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", (*d).name);
		}
		printf("Age: %f\n", (*d).age);
		if ((*d).owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", (*d).owner);
		}
	}
}
