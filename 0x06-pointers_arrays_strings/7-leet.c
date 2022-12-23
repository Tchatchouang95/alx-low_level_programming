#include "main.h"

/**
 * leet - function that incodes astring into 1337
 * @s: imput string
 * Return: Always string
 */
char *leet(char *s)
{
	int i, j;
	char h[] = "aAeEoOtTlL";
	char k[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; h[j] != '\0'; j++)
		{
			if (s[i] == h[j])
			{
				s[i] = k[j];
			}
		}
	}
	return (s);
}
