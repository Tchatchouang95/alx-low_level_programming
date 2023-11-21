#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - Finds the length of a string
 * @str: string
 * Return: sring length
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
 * _strdup - Duplicates a string
 * @str: string
 * Return: Duplicated string
 */
char *_strdup(char *str)
{
	int i, len;
	char *dest;

	if (str == NULL)
	{
		return (NULL);
	}

	len = str_len(str);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = '\0';
	return (dest);
}
