#include "main.h"

/**
 * _strncat - concatinate two strings using a specific number of bites
 * @dest: imput string
 * @src: second input string
 * @n: number of bites
 * Return: Always dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0, y = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
