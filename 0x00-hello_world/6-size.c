#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of char: %i byte(s)\n", sizeof(a));
	printf("Size of int: %i byte(s)\n", sizeof(b));
	printf("Size of long int: %i byte(s)\n", sizeof(c));
	printf("Size of long long int: %i byte(s)\n", sizeof(d));
	printf("Size of float: %i byte(s)\n", sizeof(e));

	return (0);
}
