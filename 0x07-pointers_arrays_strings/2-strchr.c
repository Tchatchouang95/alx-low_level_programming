#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String of characters
 * @c: Character to check if it exist in @s
 * Return: Always char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (!c)
	{
		return (&s[i]);
	}
	return ('\0');
}
