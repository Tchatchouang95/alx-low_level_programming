#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - makes space available in memory for use
 * @str: input string
 * Return: Pointer
 */
char *_strdup(char *str)
{
	char *copy;
	int j = 0, len;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[j] != '\0')
	{
		j++;
	}
	len = j;
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
	{
		copy[j] = str[j];
	}
	copy[len] = '\0';
	return (copy);
}
