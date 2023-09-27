#include "lists.h"

/**
 * loop_listint - Counts the number of unique nodes in a looped link list
 * @head: head of the first node of a list
 * Return: true
 */
size_t loop_listint(const listint_t *head)
{
	const listint_t *current, *hare;
	size_t node = 1;

	if (!head || !(head->next))
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
				node++;
				current = current->next;
				hare = hare->next;
			}
			current = current->next;
			while (current != hare)
			{
				node++;
				current = current->next;
			}
			return (node);
		}
		current = current->next;
		hare = (hare->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a linked list
 * @head: pointer to the first node
 * Return: Always 0
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index;

	index = 0;
	nodes = loop_listint(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
