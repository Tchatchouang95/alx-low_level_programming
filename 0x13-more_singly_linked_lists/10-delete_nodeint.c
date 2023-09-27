#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index
 * @head: pointer to the first node of a link list
 * @index: index of node to delete
 * Return: pointer to the head of a list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *ptr;
	unsigned int i;

	if (!head || !*head)
	{
		return (-1);
	}
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		current = current->next;
		if (current == NULL)
		{
			return (-1);
		}
	}
	ptr = current->next;
	current->next = ptr->next;
	free(ptr);
	return (1);
}
