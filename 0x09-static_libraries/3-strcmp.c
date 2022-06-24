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
	int i, f;

	i = 0;
	f = 0;

	while (s1[i] != '\0' && f == 0)
	{
		f = s1[i] - s2[i];
		i++;
	}
	return (f);
}
