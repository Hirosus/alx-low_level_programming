#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list.
 * @h: the linked list
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h)
	{
		element++;
		h = h->next;

	}

	return (element);
}
