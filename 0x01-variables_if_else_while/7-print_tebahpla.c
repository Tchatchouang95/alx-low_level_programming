#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char l_alpha;

	l_alpha = 'z';
	while (l_alpha >= 'a')
	{
		putchar(l_alpha);
		l_alpha--;
	}
	putchar('\n');
	return (0);
}
