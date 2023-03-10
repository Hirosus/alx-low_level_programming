#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: The memory area to fill
 * @b: The byte to fill the memory area with
 * @n: The number of bytes to fill
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}

	return (s);
}
