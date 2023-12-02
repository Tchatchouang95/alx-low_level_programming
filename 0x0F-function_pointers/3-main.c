#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main function that performs operations entered by the user
 * @argc: number of arguements passed by the user
 * @argv: array of arguements passed by the user to the terminal
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*print_op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	print_op = get_op_func(argv[2]);
	if (print_op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (num2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", print_op(num1, num2));
	return (0);
}
