#include "main.h"

/**
 * rot13 - encodes a string
 * @s: input string
 * Return: Always pointer
 */
char *rot13(char *s)
{
	int i, j;
	char boolean;

	char k[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

	for (i = 0; s[i] != '\0'; i++)
	{
		boolean = 0;
		for (j = 0; k[j] != '\0' && boolean == 0; j++)
		{
			if (s[i] == k[j])
			{
				s[i] = k[j + 26];
				boolean = 1;
			}
		}
	}
	return (s);
}
