#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: Always something
 */
char *cap_string(char *s)
{
	int i, j;

	char k[] = {32, 9, 10, 44, 46, 59, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		for (j = 0; k[j] != '\0'; j++)
		{
			if (k[j] == s[i] && s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}

