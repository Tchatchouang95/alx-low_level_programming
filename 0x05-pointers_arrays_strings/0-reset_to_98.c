#include"main.h"

/**
 * reset_to_98 - updates the value ot points to to 98
 * @n: pointer
 *
 * Return: void
 */
void reset_to_98(int *n)
{
	int *update;
	int i = 98;

	update = &i;
	*n = *update;
}
