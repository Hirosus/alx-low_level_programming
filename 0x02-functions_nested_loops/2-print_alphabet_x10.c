#include "main.h"

/**
 * print_alphabet_x10 - prints alpha bet 10x
 *
 */

void print_alphabet_x10(void)
{
	int i;
	char alph;

	i = 0;
	while (i < 10)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		i++;
	}
}
