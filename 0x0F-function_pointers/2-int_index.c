#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: The array
 * @size: The size of the array
 * @cmp: pointer to the function
 *
 * Return: If no element matches or size <= 0, return -1
 * Otherwise - the index of the first element for which cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}

	return (-1);
}
