#include "lists.h"

/**
 * free_listint2 - Frees  a list
 * @head: pointer to the first node of a link list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = temp->next;
		free(temp);
	}
	*head = NULL;
	head = NULL;
}
