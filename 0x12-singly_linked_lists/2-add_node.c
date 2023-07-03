#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer
 * @str: a string to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int i;
	list_t new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; str[len];)
		i++;

	new->str = dup;
	new->i = i;
	new->next = *head;

	*head = new;

	return (new);
}
