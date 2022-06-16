#include "main.h"

/**
 * _strcmp - to compare two strings
 * @s1: first input
 * @s2: second input
 * Return: return int
 */
int _strcmp(char *s1, char *s2)
{
	int i, gap;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			gap = s1[i] - s2[i];
			return (gap);
		}
		else if (s1[i] < s2[i])
		{
			gap = s2[i] - s1[i];
			return (gap);
		}
	}
	return (0);
}
