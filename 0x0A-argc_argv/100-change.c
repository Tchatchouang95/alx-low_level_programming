#include <stdio.h>
#include <stdlib.h>
int change_cents(int change);

/**
 * main - main function
 * @argc: Number of arguements passed to cmd line
 * @argv: Array of arguements passed to cmd line
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("%d\n", 0);
	}
	printf("%d\n", change_cents(cents));
	return (0);
}

/**
 * change_cents - looks for the minimum possible change
 * @change: change to be made
 * Return: min number of possible change
 */
int change_cents(int change)
{
	int count = 0;

	while (change)
	{
		if (change >= 25)
		{
			change -= 25;
		}
		else if (change >= 10)
		{
			change -= 10;
		}
		else if (change >= 5)
		{
			change -= 5;
		}
		else if (change >= 2)
		{
			change -= 2;
		}
		else if (change >= 1)
		{
			change -= 1;
		}
		count++;
	}
	return (count);
}


