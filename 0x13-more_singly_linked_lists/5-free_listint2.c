#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: a pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
