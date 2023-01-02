#include "main.h"

/**
 * _strstr - finds the first occurance of the substring
 * @haystack: pointer to character string
 * @needle: pointe to character substring
 * Return: Always pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (needle);
			}
			else
			{
				return ('\0');
			}
		}
	}
	return (0);
}
