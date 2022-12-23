#include "main.h"

/**
 * _strcmp - to compare two strings
 * @s1: first input
 * @s2: second input
 * Description: the function compares two strings
 * Return: return int
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	j = 0;
	for (i = 0; s1[i] != '\0' && j == 0; i++)
	{
		j = s1[i] - s2[i];
	}
	return (j);
}
