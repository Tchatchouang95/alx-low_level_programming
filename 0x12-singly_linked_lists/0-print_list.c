#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: list
 * Return: the number of nodes in h
 */
size_t print_list(const list_t *h)
{
	register int length = 0;

	while (h)
	{
		if (!(h->str))
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
		length++;
	}
	return (length);
}
