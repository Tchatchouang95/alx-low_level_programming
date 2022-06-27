#include <main.h>
#include <stdio.h>

/**
 * main - function that recieves arguement from the command line
 * @argc: counter
 * @argv: an array of strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
