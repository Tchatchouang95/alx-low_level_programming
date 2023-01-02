#include "main.h"

/**
 *_strspn - gets the length of a prefix substring
 *@s: input pointer
 *@accept: input pointer
 *Return: accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, incr;

	incr = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				incr++;
			}
		}
		if (s[x] == ' ' || s[x] == ',')
		{
			break;
		}
	}
	return (incr);
}
