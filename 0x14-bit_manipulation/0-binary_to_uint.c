#include "main.h"
/**
 * binary_to_uint - converts binary number to an int
 * @b: string holder
 * Return: Always the result of computation
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i, add;

	add = 0;

	if (b != NULL)
	{
		for (len = 0; b[leng] != '\0'; len++)
		{
			if (b[len] != 48 && b[len] != 49)
			{
				return (0);
			}
		}
		for (i = 0; len--; len >= 0; len--)
		{
			add = add + ((b[len] - '0') << i);
			i++;
		}
		else
		{
			return (0);
		}
		return (add);
	}
