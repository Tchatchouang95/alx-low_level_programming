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
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_len] != '\0' && s2[s2_len] != '\0')
	{
		s1_len++, s2_len++;
	}
	s3 = (char *)malloc(sizeof(char) * (s1_len + s2_len + 2));
	if (s3 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++, j++)
			s3[j] = s1[i];
		for (i = 0; s2[i] != '\0'; i++, j++)
			s3[j] = s2[i];

		s3[j] = '\0';
	}
	return (s3);
}
