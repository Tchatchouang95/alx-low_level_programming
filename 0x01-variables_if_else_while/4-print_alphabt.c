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

	l_alpha = 'a';
	while (l_alpha <= 'z')
	{
		if (l_alpha == 'q' || l_alpha == 'e')
		{
			l_alpha++;
		}
		putchar(l_alpha);
		l_alpha++;
	}
	putchar('\n');
	return (0);
}
