#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string to be printed in reverse
 */

void print_rev(char *s)
{
	int len = 0;
	int o;

	while (*s != 0)
	{
		len++;
		s++;
	}
	s--;
	for (o = len; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
