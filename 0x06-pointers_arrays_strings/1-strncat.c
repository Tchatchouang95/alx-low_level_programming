#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: String to which @src is appended
 * @src: String appended to @dest
 * Return: Always dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
