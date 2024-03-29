#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 *
 * @h: head of the dlistint
 *
 * Return: the number of elementd in the dlistint_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	
	return (nodes);
}
