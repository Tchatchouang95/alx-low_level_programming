#include<stdio.h>

/**
 * main - main function
 * @argc: counter of arguements stored in argv[]
 * @argv: string of arguements passed in the terminal
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
