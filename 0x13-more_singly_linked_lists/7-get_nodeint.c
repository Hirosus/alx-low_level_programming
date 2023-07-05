#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: a pointer
 * @index: the index of the node
 *
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;
	 
	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
