#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * @str: string to be printed
 *
 * Return: print
 */

void puts2(char *str)
{
	int len = 0;
	int i = 0;
	char *j = str;
	int k;

	while (*j != '\0')
	{
		j++;
		len++;
	}
	i = len - 1;
	for (k = 0; k <= i ; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
