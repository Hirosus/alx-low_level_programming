#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a listi
 * @head: a pointer
 *
 * Return: if the list is empty, return 0
 * Otherwise - the sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
