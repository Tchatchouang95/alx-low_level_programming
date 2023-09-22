#include "lists.h"

/**
 * str_len - determines the length of a string
 * @str: string
 * Return: Always the length
 */
int str_len(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - appends node on a primary node
 * @head: 1st arguement
 * @str: 2nd arguement
 * Return: Nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *current;

	current = malloc(sizeof(list_t));
	if (current == NULL)
	{
		return (NULL);
	}
	current->str = strdup(str);
	current->len = str_len(str);
	current->next = *head;

	*head = current;
	return (current);
}
