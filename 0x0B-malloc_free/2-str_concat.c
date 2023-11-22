#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - Finds the length of a string
 * @str: string
 * Return: length of the @str
 */
int str_len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - Concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: Concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	size_t i, j, len_s1, len_s2, total_len;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = str_len(s1);
	len_s2 = str_len(s2);
	total_len = len_s1 + len_s2;

	concat = (char *)malloc((total_len + 1) * sizeof(char));

	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}
	for (i = 0; i < len_s1; i++)
		concat[i] = s1[i];
	for (j = 0; j < len_s2; j++)
	{
		concat[i] = s2[j];
		i++;
	}
	concat[i] = '\0';
	return (concat);
}

