#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer variable
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i, start, temp;

	start = 0;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i != start)
	{
		temp = s[i];
		s[i] = s[start];
		s[start] = temp;
		start++;
		i--;
	}
}
