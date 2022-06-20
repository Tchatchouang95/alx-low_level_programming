#include "main.h"

/**
 * _memset - fills the first n bytes of memory area
 * @s: pointer character
 * @b: constant byte
 * @n: memory space
 * Return: Always pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
