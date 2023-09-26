#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to the first node of the link list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	head = NULL;
}
