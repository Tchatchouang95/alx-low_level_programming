#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
