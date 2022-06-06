#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	int nums;

	nums = 0;
	while (nums < 10)
	{
		putchar(nums + '0');
		if (nums != 9)
		{
		putchar(',');
		putchar(' ');
		}
		nums++;
	}
	putchar('\n');	
	return (0);
}
