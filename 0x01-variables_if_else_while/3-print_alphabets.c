#include <stdlib.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char caps;
	char small;

	caps = 'A';
	small = 'a';
	while (small <= 'z')
	{
		putchar(small);
		small++;
	}
	while (caps <= 'Z')
	{
		putchar(caps);
		caps++;
	}
	putchar('\n');
	return (0);
}
