#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination copied bytes
 * @src: Source from which bytes are copied
 * @n: number of bytes
 * Return: Always char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
