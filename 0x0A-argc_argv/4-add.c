#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: counter
 * @argv: string holder
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc && *argv[i] != '\0'; i++)
		{
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
