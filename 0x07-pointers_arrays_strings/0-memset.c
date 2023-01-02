#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: pointer to constant byte
 * @b: constant byte
 * @n: Size of memory
 * Return: Always char
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
