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
	putchar(num + '0');
	num++;
	while (num < 10)
	{
		putchar(',');
		putchar(' ');
		putchar(num + '0');
		num++;
	}
        putchar('\n');	
	return (0);
}
