#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: pointer to the first nodes
 * Return: pointer to structure
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *new_ptr;

	if (!head || !(*head))
	{
		return (NULL);
	}
	ptr = *head;
	*head = ptr->next;
	ptr->next = NULL;
	while (*head != NULL)
	{
		new_ptr = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		if (new_ptr == NULL)
		{
			return (*head);
		}
		*head = new_ptr;
	}
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	return (NULL);
}

