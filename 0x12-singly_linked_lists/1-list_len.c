#include "lists.h"

/**
 * list_len - number of elements in a link list
 * @h: first element of list
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
