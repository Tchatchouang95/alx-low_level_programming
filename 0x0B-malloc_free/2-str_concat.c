#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Function that concatenates two strings
 * @s1: frist string
 * @s2: second string
 * Return: pointer containing the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, s1_len, s2_len;
	char *s3;

	s1_len = s2_len = i = j = 0;
	while (s1[s1_len] != '\0' && s2[s2_len] != '\0')
	{
		s1_len++, s2_len++;
	}
	s3 = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (s3 == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		s3[j] = s1[i];
		i++, j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s3[j] = s2[i];
		i++, j++;
	}
	s3[j] = '\0';
	return (s3);
}

