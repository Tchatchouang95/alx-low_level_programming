#include <stdio.h>
#include <stdlib.h>

int change_cents(int number);

/**
 * main - Prints the minimum number of coins to make change
 * @argc: Number of arguements passed to cmd line
 * @argv: Array of arguements passed to cmd line
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 1)
	{
		printf("%d\n", 0);
	}
	printf("%d\n", change_cents(num));
	return (0);
}

/**
 * change_cents - checks the the min number of times a cion us changed
 * @number: coin to be changed
 * Return: number of times coin is changed
 */
int change_cents(int number)
{
	int coin = 0;

	while (number)
	{
		if (number >= 25)
		{
			number -= 25;
		}
		else if (number >= 10)
		{
			number -= 10;
		}
		else if (number >= 5)
		{
			number -= 5;
		}
		else if (number >= 2)
		{
			number -= 2;
		}
		else if (number >= 1)
		{
			number -= 1;
		}
		coin++;
	}
	return (coin);
}
