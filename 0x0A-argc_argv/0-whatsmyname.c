#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name followed by a new line
 * @argc: Number of arguements passed to the ternmal
 * @argv: array of arguements passed to the terminal
 * Return: Always 0
 */
int main(int argc __attribute__((unused)) , char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
