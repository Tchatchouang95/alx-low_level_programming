#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - Finds the length of a string
 * @str: string
 * Return: length of the string
 */
int str_len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * string_nconcat - Concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: first n bytes of s2 to concatenate to s1
 * Return: Always concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, len_s1, len_s2, tot_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = str_len(s1);
	len_s2 = str_len(s2);
	tot_len = len_s1 + len_s2;
	concat = (char *)malloc((tot_len + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		concat[i] = s1[i];
	if (n >= len_s2)
	{
		for (j = 0; j < len_s2; j++)
		{
			concat[i] = s2[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			concat[i] = s2[j];
			i++;
		}
	}
	concat[i] = '\0';
	return (concat);
}
