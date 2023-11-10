#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: the head of the list
 * @index: the node to locate
 *
 * Return: if the node does not exist - NULL,
 * 	   otherwise the address
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
