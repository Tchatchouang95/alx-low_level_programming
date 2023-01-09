#include <stdio.h>

/**
 * main - Main function of the program
 * @argc: Number of arguements passed to argv
 * @argv: Arguements passed during compilation
 * Return: Alwayse sucess (0)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
