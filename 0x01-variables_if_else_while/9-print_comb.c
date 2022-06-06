#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
		num++;
	} 
	putchar('\n');
	return (0);
}
