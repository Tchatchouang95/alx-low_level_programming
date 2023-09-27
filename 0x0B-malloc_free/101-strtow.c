#include "main.h"
#include <stdlib.h>
/**
 * str_len - function that finds the length of a string.
 * @s: The string
 * Return: Length of s
 */
int str_len(char *s)
{
	long int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * count_words - counts number of words in a string
 * @string: the string
 * Return: int
 */
int count_words(char *string)
{
	int count, pos, i;

	pos = 0;
	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == ' ')
		{
			if (pos > 0)
				++count;
			pos = 0;
			continue;
		}
		++pos;
	}
	return (count);
}
/**
 * sub_str - Will return a string at specified pos
 * @str: The string
 * @start: The start position
 * @end: The end position
 *
 * Return: char pointer
 */
char *sub_str(char *str, int start, int end)
{
	char *sub;
	int i, size;

	size = end - start;
	sub = (char *)malloc(sizeof(char) * size + 1);
	for (i = 0; start < end; i++, start++)
	sub[i] = str[start];
	sub[i] = '\0';

	return (sub);
}

/**
 * strtow - splits a string into words.
 * @str: The string to be splited
 *
 * Return: double pointer
 */
char **strtow(char *str)
{
char **words = NULL;
char *word = NULL;
int row, pos, i, m, n, end;

	if (str != NULL && str[0] != '\0')
	{
		row = count_words(str);
		if (row > 0)
		{
			words = (char **)malloc(sizeof(char) * row + 1);
			if (words != NULL)
			{
				for (i = 0, pos = 0, m = 0; str[i] != '\0'; i++)
				{
					if (str[i] == ' ' || str[i + 1] == '\0')
					{
						end = str[i + 1] == '\0' ? 1 : 0;
						if (pos > 0)
						{
							word = sub_str(str, i - pos, i + end);
							words[m] = (char *)malloc(sizeof(char) * str_len(word) + 1);
							if (words[m] != NULL)
							{
								for (n = 0; word[n] != '\0'; n++)
									words[m][n] = (char)word[n];
								words[m][n++] = '\0';
								m++;
							}
						}
						pos = 0;
						continue;
					}
					++pos;
				}
				words[m] = NULL;
			}
		}
	}
	return (words);
}
