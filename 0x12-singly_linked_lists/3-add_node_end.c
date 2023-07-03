#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: a pointer
 * @str: a string to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *lis;
	int len;
	list_t *new, *old;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	lis = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = lis;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		old = *head;
		while (old->next != NULL)
			old = old->next;
		old->next = new;
	}

	return (*head);
}
