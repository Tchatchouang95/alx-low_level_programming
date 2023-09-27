#include "lists.h"

/**
 * loop_listint_count - Counts the number of nodes in a looped link list
 * @head: pointer to the first node of the link list
 * Return: Always
 */
size_t loop_listint_count(listint_t *head)
{
	listint_t *current, *hare;
	size_t nodes = 1;

	if ((!head) || !(head->next))
	{
		return (0);
	}
	current = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (current == hare)
		{
			current = head;
			while (current != hare)
			{
				nodes++;
				current = current->next;
				hare = hare->next;
			}
			current = current->next;
			while (current != hare)
			{
				nodes++;
				current = current->next;
			}
			return (nodes);
		}
		current = current->next;
		hare = (hare->next)->next;
	}
	return (0);
}

/**
 * free_listint_safe - frees a list
 * @h: Pointer to the first node
 * Return: Number of element which has been set free
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes, index;
	listint_t *temp;

	nodes = 0;

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}
	h = NULL;
	return (nodes);
}
