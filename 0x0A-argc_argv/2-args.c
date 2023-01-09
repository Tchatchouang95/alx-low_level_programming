#include <stdio.h>

/**
 * main - Main function
 * @argc: Counter
 * @argv: String of arguements passed
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
