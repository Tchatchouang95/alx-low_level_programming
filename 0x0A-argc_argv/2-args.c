#include <stdio.h>

/**
 * main - prints all arguements it recieves
 * @argc: counter
 * @argv: strings holder
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i];
	}
	return (0);
}
