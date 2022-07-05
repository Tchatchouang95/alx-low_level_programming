#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the file name
 * Description: Prints the file from which this program was compiled
 * Return: Always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
