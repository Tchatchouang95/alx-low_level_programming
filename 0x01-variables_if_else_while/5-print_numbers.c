#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main entry
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
