#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function prints all arguements it recieves
 * @argc: Number of arguements passed to cmd line
 * @argv: Array of arguements passed to cmd line
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
