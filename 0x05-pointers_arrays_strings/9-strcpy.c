#include "main.h"

/**
 * _strcpy - copy from one place holder to another
 * @dest: pointed variable
 * @src: pointed variable
 * Return: Always char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
