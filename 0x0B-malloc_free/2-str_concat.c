#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len, i, j, size;
	char *str;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		continue;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		continue;
	size = s1_len + s2_len + 1;
	str = malloc(size * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j <= s2_len; j++)
	{
		str[i] = s2[j];
		i++;
	}
	return (str);
}
