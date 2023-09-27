#include "main.h"
#include <ctype.h>

void rev_string(char *s);

/**
 * str_len - finds the lenhtj  of a string.
 * @s: The string to
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
 * _mul - multiply two numbers
 * @mul: The array to store the result
 * @str: The string
 * Returns: void
 */
void _mul(int *mul, char *str[])
{
	int i, j, len1, len2, tmp;
	char *s1 = str[1];
	char *s2 = str[2];

	rev_string(s1);
	rev_string(s2);

	len1 = str_len(s1);
	len2 = str_len(s2);
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			mul[i + j] += (s1[i] - '0') * (s2[j] - '0');
		}
	}
	for (i = 0; i < len1 + len2; i++)
	{
		tmp = mul[i] / 10;
		mul[i] = mul[i] % 10;
		mul[i + 1] = mul[i + 1] + tmp;
	}
}

/**
 * print_answer - Print the answer
 * @mul: the product
 * Return: void
 */
void print_answer(int *mul)
{
	int i, is_zero;

	is_zero = 1;
	for (i = 1023; i >= 0; i--)
	{
		if (mul[i] > 0)
		{
			is_zero = 0;
			break;
		}
	}
	for (; i >= 0; i--)
		printf("%d", mul[i]);
	if (is_zero == 1)
		printf("0");
	printf("\n");
}

/**
 * rev_string - reverses a string.
 * @s: the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	char tmp1, tmp2;
	int i, j;

	i = str_len(s) - 1;
	j = 0;

	while (i != j && j < i)
	{
		tmp1 = s[i];
		tmp2 = s[j];
		s[i] = tmp2;
		s[j] = tmp1;
		j++;
		i--;
	}
}

/**
 * main - program that multiplies two positive numbers.
 * @argc: number of arguements passed
 * @argv: Array of arguements passed
 *
 * Return: 0 on success, 38 otherwise
 */
int main(int argc, char *argv[])
{
	int mul[2000] = {0};
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; i < 1024; i++)
		mul[i] = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	_mul(mul, argv);
	print_answer(mul);
	return (0);
}
