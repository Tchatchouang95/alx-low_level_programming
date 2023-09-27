#include "main.h"
#include <stdlib.h>
/**
 * str_len - function that finds the length of a string.
 * @s: The string
 * Return: Length of s
 */
int str_len(char *s)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}

	return (i);
}

/**
 * count_words - counts number of words in a string
 * @string: the string
 * Return: int
 */
int count_words(char *string)
{
	int index = 0, len = 0, words = 0;

	for (index = 0; *(string + index); index++)
	{
		len++;
	}
	for (index = 0; index < len; index++)
	{
		if (*(string + index) != ' ')
		{
			words++;
			index += str_len(string + index);
		}
	}
	return (words);
}

/**
 * strtow - splits a string into words.
 * @str: The string to be splited
 *
 * Return: double pointer
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);
	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);
	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;
		letters = count_words(str + index);
		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);
			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];
		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
