#include "3-calc.h"

/**
 * main - Function thats does simple operations
 * @argc: numbers of arguements
 * @argv: strings of arguements
 * Return: 1
 */
int main(int__attribute__((__unused__))argc, char *argv[])
{
	int a, b;
	int (*ptr_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ptr_func = get_op_func(argv[2]);
	if (!ptr_func)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", ptr_func(a, b));
	return (1);
}
