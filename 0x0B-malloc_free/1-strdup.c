#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in mememory
 * @str: string to duplicate to our newly allocated space
 * Return: A pointer to the new string
 */
char *_strdup(char *str)
{
	int i, j, len;
	char *string;

	i = 0;
	len = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		len++;
	}
	string = (char *)malloc(len + 1);
	if (string == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
	{
		string[j] = str[j];
	}
	string[len] = '\0';
	return (string);
}
