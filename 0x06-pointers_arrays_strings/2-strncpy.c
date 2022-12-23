#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: string to which @src is being copied
 * @src: Input string copied to @dest
 * @n: Number of bytes in @src
 * Return: Always dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
