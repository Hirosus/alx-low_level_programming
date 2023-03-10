#include "main.h"

/**
 * _strncpy - copies a string to a buffer, but at most n bytes of src are copied
 * @dest: The buffer to copy to
 * @src: The string to copy
 * @n: The maximum number of bytes to copy from src
 *
 * Return: The destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	while (n-- && *src)
	{
		*dest++ = *src++;
	}

	while (n--)
	{
		*dest++ = '\0';
	}

	return (temp);
}
