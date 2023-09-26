#include "lists.h"

/**
 * add_nodeint_end - inserts node at the end of link list
 * @head: Pointer to the first node of the list
 * @n: Data part og the node
 * Return: pointer to the current position
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *current;

	ptr = malloc(sizeof(listint_t));
	if (ptr = NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = ptr;
	return (*head);
}
