#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
 * new_dog - Function that creates a new dog
 * @name: dog's name
 * @age: dogs age
 * @owner: owner's dog
 * Return: pointer to structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	d->name = malloc(sizeof(char) * _strlen(name) + 1);
	d->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	_strcpy(d->name, name);
	_strcpy(d->owner, owner);

	return (d);
}

/**
 * _strlen - string length
 * @s: String
 * Return: Length of the string s
 */
int _strlen(char *s)
{
	long int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - Creates a copy of a string
 * @dest: string to duplicate
 * @src: source
 * Return: a copy of the string str
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
