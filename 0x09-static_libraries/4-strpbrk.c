#include "main.h"

/**
 * _strpbrk - locates the first occurances in the string
 * @s: pointer to character s
 * @accept: pointer to character accept
 * Return: Always s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
