#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - string length
 * @s: string arguement
 * Return: string length
 */
unsigned int _strlen(char *s)
{
	unsigned int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: length of string of s2
 * Return: Always pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (n >= l2)
	{
		l2 = n;
	}
	p = malloc((l1 + l2 + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		p[i] = s[i];
	}
	for (i = 0; i < l2; i++)
	{
		p[l1 + i] = s2[i];
	}
	p[t1 + t2] = '\0';
	return (p);
}

