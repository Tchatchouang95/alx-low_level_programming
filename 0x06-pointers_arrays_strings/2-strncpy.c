#include "main.h"

/**
 * _strncpy - used to copy a string
 * @dest: first input string
 * @src: second input string
 * @n: number of bytes
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
