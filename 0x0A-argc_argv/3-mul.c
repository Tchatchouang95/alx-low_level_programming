#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: counter
 * @argv: string holder
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, mul;

	mul = 1;

	if (argc == 3)
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
