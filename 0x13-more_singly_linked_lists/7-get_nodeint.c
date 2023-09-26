#include "lists.h"

/**
 * get_nodeint_at_index - Finds the nth node of a linked list
 * @head: pointer to the first node of link list
 * @index: index of node to find
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int val;

	val = 0;
	while (val < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		head = head->next;
		val++;
	}
	return (head);
}
