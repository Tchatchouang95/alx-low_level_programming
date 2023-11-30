#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that displays its opcodes
 * @argc: arguement length passed to the terminal
 * @argv: arrayof arguments passed to the terminal
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	int (*addr)(int, char**) = main;
	unsigned char opcode;

	if (arg != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)addr;
		printf("%.2x", opcode);

		if (i == bytes - 1)
		{
			continue;
		}
		printf(" ");
		addr++;
	}
	printf("\n");
	return (0);
}
