#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	char alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
