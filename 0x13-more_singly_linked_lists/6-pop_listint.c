#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: a pointer
 *
 * Return: if the linked list is empty, 0
 * Otherwise - the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
