#include "main.h"

/**
 * _strncat - concatenates two strings, but at most n bytes of src are copied
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to copy from src
 *
 * Return: The destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*dest)
	{
		dest++;
	}

	while (n-- && *src)
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (temp);
}
