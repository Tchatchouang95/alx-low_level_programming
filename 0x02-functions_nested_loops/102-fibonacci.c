#include <stdio.h>

/**
 * main - Main function
 *
 * Description: Display first 50 fabionacci seq starting with 1 and 2
 * Return: Always 0
 */
int main(void)
{
	long int first, next, sum, i;

	first = 1;
	next = 2;

	printf("%ld, %ld, ", first, next);
	for (i = 1; i <= 48; i++)
	{
		sum = first + next;
		first = next;
		next = sum;
		printf("%ld", sum);

		if (i < 48)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
