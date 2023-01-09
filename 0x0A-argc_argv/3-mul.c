#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main function
 * @argc: Number of arguments passed to argv
 * @argv: String of arguements recieved
 * Return: 1 if false, 0 if sucess
 */
int main(int argc, char *argv[])
{
	int mul, i;

	mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
