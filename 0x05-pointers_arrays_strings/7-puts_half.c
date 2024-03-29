#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: the string
 *
 * Return: half of the string
 */

void puts_half(char *str)
{
	int a, n, len;

	len = 0;

	for (a = 0; str[a] != '\0'; a++)
		len++;
	n = (len / 2);

	if ((len % 2) == 1)
		n = ((len + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
