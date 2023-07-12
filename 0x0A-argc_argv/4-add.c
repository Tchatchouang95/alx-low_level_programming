#include<stdio.h>
#include<stdlib.h>

/**
 * main - Sums numbers
 * @argc: counter
 * @argv: string holder
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] > '0' && *argv[i] < '9')
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}


