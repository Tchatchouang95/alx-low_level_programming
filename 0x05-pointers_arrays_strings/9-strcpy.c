#include "main.h"

/**
 * _strcpy - copies a string from a source to a destination
 * @dest: destination string
 * @src: source string
 * Return: duplicated string
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
