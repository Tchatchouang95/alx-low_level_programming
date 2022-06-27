#include <stdio.h>

/**
 * main - function that recieves arguement from the command line
 * @argc: counter
 * @argv: an array of strings
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
