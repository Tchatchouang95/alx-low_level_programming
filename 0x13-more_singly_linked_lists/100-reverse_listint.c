#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: pointer to the first nodes
 * Return: pointer to structure
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL;
	listint_t *n = NULL;

	if (!head || !(*head))
	{
		return (*head);
	}
	n = (*head)->next;
	while (n->next)
	{
		n = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = n;
	}
	if (n)
	{
		n->next = ptr;
	}
	return (*head);
}

