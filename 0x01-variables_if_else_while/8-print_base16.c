#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	char l_alpha;

	num = 0;
	l_alpha = 'a';

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	while (l_alpha <= 'f')
	{
		putchar(l_alpha);
		l_alpha++;
	}
	putchar('\n');
	return (0);
}
