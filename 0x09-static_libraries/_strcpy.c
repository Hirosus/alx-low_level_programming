#include "main.h"

/**
 * _strcpy - copies a string to a buffer
 * @dest: The buffer to copy to
 * @src: The string to copy
 *
 * Return: The destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (temp);
}
