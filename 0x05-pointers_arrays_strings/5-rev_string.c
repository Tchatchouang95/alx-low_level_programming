#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer variable
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i, start, end, temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	start = i;
	i = 0;
	end = start - 1;
	while (i < end)
	{
		temp = s[i];
		s[i] = s[end];
		s[end] = temp;
		i++;
		end++;
	}
}
