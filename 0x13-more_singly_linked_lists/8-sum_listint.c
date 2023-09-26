#include "lists.h"

/**
 * sum_listint - Sums all data n of a linked list
 * @head: pointer to first node of linked list
 * Return: sum;
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
