#include "lists.h"

/**
 * print_listint - Prints all elements of listint_t list
 * @h: data part of the node
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
