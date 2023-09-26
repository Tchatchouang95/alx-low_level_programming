#include "lists.h"

/**
 * pop_listint - Deletes the head of a node of a link list
 * @head: pointer to the head node
 * Return: head node's data n
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int i;

	if (((*head) == NULL) || head == NULL)
	{
		return (0);
	}
	current = *head;
	i = current->n;
	*head = (*head)->next;
	free(current);
	return (i);
}
