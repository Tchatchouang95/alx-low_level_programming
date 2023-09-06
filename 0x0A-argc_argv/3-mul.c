#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers passed to the cmd
 * @argc: Number of arguements passed to cmd line
 * @argv: Array of arguements passed to cmd line
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
