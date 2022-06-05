#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
		{
			alpha++;
		}
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
