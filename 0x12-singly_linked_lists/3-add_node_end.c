#include "lists.h"
#include <stddef.h>

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
 * str_dup - Duplicates a string
 * @src: string to duplicate
 * Return: Duplicated string
 */
void *str_dup(const char *src)
{
	int i, length;
	char *dest;

	length = str_len(src);
	dest = malloc((length + 1) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * add_node_end - Adds a node at the end of a list
 * @head: pointer position on the last element of the list
 * @str: String to be added on the list
 * Return: Always pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current, *new;
	char *dup_str;

	if (str == NULL)
	{
		return (NULL);
	}
	dup_str = str_dup(str);
	if (dup_str == NULL)
	{
		return (NULL);
	}
	new->str = dup_str;
	new->len = str_len(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	return (*head);
}
