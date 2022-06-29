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
	int i, length;

	i = 0, length = 0;

	copy = malloc(sizeof(char) * (length + 1));
	if (str == 0 || copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		copy[i] = str[i];
		length++;
	}
	copy[length] = '\0';
	return (copy);
}
