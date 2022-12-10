#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char l_alpha, u_alpha;

	l_alpha = 'a';
	u_alpha = 'A';
	while (l_alpha <= 'z')
	{
		putchar(l_alpha);
		l_alpha++;
	}
	while (u_alpha <= 'Z')
	{
		putchar(u_alpha);
		u_alpha++;
	}
	putchar('\n');
	return (0);
}
