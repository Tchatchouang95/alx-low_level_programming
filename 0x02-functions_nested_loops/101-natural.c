#include <stdio.h>

/**
 * main - Main function
 *
 * Description: Sum of natural numbers that are multiples of 3 or 5
 *
 * Return: Always (0) Sucess
 */
int main(void)
{
	int count, sum;

	sum = 0;

	for (count = 1; count < 1024; count++)
	{
		if (count % 3 == 0 || count % 5 == 0)
		{
			sum += count;
		}
	}
	printf("%d\n", sum);
	return (0);
}
