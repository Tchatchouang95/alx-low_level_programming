#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: Pointer to the first node
 * Return: Number of element which has been set free
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	listint_t *temp;
	int difference;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	while (*h != NULL)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
