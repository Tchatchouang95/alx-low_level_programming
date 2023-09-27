#include "main.h"

/**
 * str_len - gives the length of a string.
 * @s: The string
 *
 * Return: Length of s
 */
int str_len(char *s)
{
	long int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * @n: number of s2 characters to concatenate to s1
 *
 * Return: a pointer to s1 and s2 string, NULL otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string = NULL;
	unsigned int size, len, i, j;

	s1 = s1 == NULL ? "" : s1;
	s2 = s2 == NULL ? "" : s2;
	len = str_len(s2);
	n = (n > len) ? len : n;

	len = str_len(s1);
	size = len + n + 1;
	string = malloc(sizeof(char) * size);

	if (string != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			string[i] = s1[i];

		for (j = 0; j < n && s2[j] != '\0'; i++, j++)
			string[i] = s2[j];

		string[i] = '\0';
	}

	return (string);
}
