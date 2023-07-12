#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints the number of arguements passed to it
 * @argc: counter
 * @argv: string holder
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
