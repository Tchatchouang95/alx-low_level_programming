#include<stdio.h>
#include<stdlib.h>

int change_cents(int x);
/**
 * main - make change for an amount of money
 * @argc: Number of arguemets passed in the terminal
 * @argv: Stores arguements passed to the terminal
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int cents, result;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("%d\n", 0);
	}
	result = change_cents(cents);
	printf("%d\n", result);
	return (0);
}

/**
 * change_cents - counts the min number of coin to change a cent
 * @x: cents to be changed
 * Return: coins
 */
int change_cents(int x)
{
	int coins = 0;

	while (x)
	{
		if (x >= 25)
		{
			x -= 25;
		}
		else if (x >= 10)
		{
			x -= 10;
		}
		else if (x >= 5)
		{
			x -= 5;
		}
		else if (x >= 2)
		{
			x -= 2;
		}
		else
		{
			x -= 1;
		}
		coins++;
	}
	return (coins);
}
