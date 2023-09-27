#include "main.h"
#include <stdlib.h>

/**
 * str_len - Finds the length of a string
 * @s: string
 * Return: length of string
 */
int str_len(char *s)
{
	long int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * argstostr - concatenates the arguements of a program
 * @ac: length of arguements passed
 * @av: strings of arguements passed
 * Return: concatenated arguements
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *string = NULL;

	if (ac > 0 && av != NULL)
	{
		size = 0;
		for (i = 0; i < ac; i++)
		{
			size += str_len(av[i]) + 1;
		}
		string = malloc(size * sizeof(char) + 1);
		if (string != NULL)
		{
			k = 0;
			for (i = 0; i < ac; i++)
			{
				for (j = 0; av[i][j] != '\0'; j++, k++)
				{
					string[k] = av[i][j];
				}
				string[k++] = '\n';
			}
		}
	}
	return (string);
}
