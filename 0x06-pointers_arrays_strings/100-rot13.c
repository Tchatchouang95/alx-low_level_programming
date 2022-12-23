#include "main.h"

/**
 * rot13 - encodes a string
 * @s: input string
 * Return: Always pointer
 */
char *rot13(char *s)
{
	int i, j;

	char k[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; k[j] != '\0'; j++)
		{
			if (s[i] == k[j])
			{
				s[i] = encode[j];
				break;
			}
		}
	}
	return (s);
}
