#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 *
 * @a: array
 * @n: number of elements
 *
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	if (a != NULL)
	{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

	if (i != n - 1)
	printf(", ");
	}
	printf("\n");
}
}
