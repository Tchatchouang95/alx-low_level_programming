#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input pointer
 * @accept: input pointer
 * Return: accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				break;
			}
		}
		if (!accept[y])
		{
			break;
		}
	}
	return (i);
}
					
