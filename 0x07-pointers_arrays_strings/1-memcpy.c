#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: where memory is stored
 * @src: where memory is copied
 * @n: number of bytes
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = 0;

	for (; j < i; i++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
