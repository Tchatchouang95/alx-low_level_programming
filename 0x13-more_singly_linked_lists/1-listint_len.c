#include "lists.h"

/**
 * listint_len - Finds the number of elements in a linked list
 * @h: pointer to structure of the first node
 * Return: number of elements if the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t num;

	for (num = 0; h; num++)
	{
		h = h->next;
	}
	return (num);
}
