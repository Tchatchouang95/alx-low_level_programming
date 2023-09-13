#include <stdio.h>
#include "dog.h"

/**
 * new_dog - Function that creates a new dog
 * @name: dog's name
 * @age: dogs age
 * @owner: owner's dog
 * Return: pointer to structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_cpy, *owner_cpy;
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (!new_dog || !name || !owner)
	{
		return (NULL);
	}
	name_cpy = malloc(_strlen(name) + 1);
	if (!name_cpy)
	{
		return (free(new_dog), NULL);
	}
	name_cpy = _strcpy(name);
	(*new_dog).name = name_cpy;
	if (!owner_cpy)
	{
		return (free((*new_dog).name), free(new_dog), NULL);
	}
	owner_cpy = _strcpy(owner);
	(*new_dog).age = age;
	return (new_dog);
}

/**
 * _strlen - string length
 * @s: String
 * Return: Length of the string s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != NULL)
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - Creates a copy of a string
 * @str: string to duplicate
 * Return: a copy of the string str
 */
char *_strcpy(char *str)
{
	int len, i;
	char *copy;

	if (!str)
	{
		return (NULL);
	}
	len = _strlen(str);
	copy = malloc(sizeof(char) * len + 1);
	if (!copy)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';
	return (copy);
}
