#include "lists.h"

/**
 * print_listint - Prints all elements of listint_t list
 * @h: data part of the node
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
