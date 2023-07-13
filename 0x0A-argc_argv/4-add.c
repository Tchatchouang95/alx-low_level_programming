#include<stdio.h>
#include<stdlib.h>

/**
 * main - Sums numbers
 * @argc: counter
 * @argv: string holder
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *k;

	if (argc < 3)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			k = argv[i];

			for (j = 0; k[j] != '\0'; j++)
			{
				if (k[j] < '0' || k[j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(k);
			k++;
		}
		printf("%d\n", sum);
	}
	return (0);
}


