#include "main.h"

/**
 * reset_to_98 - reset to 98
 * @n: point parameter
 * Return: Always 0;
 */
void reset_to_98(int *n)
{
	int *update;
	int i = 98;

	update = &i;
	*n = *update;
}
