#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the two diag a matrix
 * @a: pointer
 * @size: size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum, jump;

	jump = 0;
	sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += *(a + jump);
		jump += size + 1;
	}
	printf("%d", sum);

	jump = 0;
	sum = 0;

	for (i = 0; i < size; i++)
	{
		jump += size - 1;
		sum += *(a + jump);
	}
}
