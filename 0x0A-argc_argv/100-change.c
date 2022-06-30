#include <stdio.h>
#include <stdlib.h>

int change_cents(int number);

/**
 * main - prints the minimun number of cons to make change
 * @argc: counter
 * @argv: string holder
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
	if (num < 0)
	{
		printf("0\n");
	}
	printf("%d\n", change_cents(num));
	return (0);
}
/**
 * change_cents - determins the min change of a coin
 * @number: input amount
 * Return: coins
 */
int change_cents(int number)
{
	int coins;

	coins = 0;

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
		coins++;
	}
	return (coins);
}

