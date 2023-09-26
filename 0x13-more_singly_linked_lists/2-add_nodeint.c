#include "lists.h"

/**
 * add_nodeint - Inserts a new node at the begining
 * @head: Pointer to the structure of first node
 * @n: Data part of the node
 * Return: Pointer to structure of current position
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = *head;
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
