#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: starting address
 * @b: the desired value
 * @n: number of bytes to be altered
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
