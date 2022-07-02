#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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

	l1 = 0, l2 = 0;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	while (s[l1] != '\0' && s[l2] != '\0')
	{
		l1++;
		l2++;
	}
	if (n > l2)
	{
		l2 = n;
	}
	p = ((l1 + l2 + 1) * sizeof(char));
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

