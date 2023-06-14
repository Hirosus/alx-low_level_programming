#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in mem
 * @str: character
 * Return: 0
 */

char *_strdup(char *str)
{
	char *arr;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	arr = malloc(sizeof(char) * (i + 1));

	if (arr == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		arr[r] = str[r];
	return (arr);
}
