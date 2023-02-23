#include "main.h"

/**
 * more_numbers - prints numbers 0 through 14 and multiplies by 10
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0, i < 10, i++)

	{
		for (j = 0, j <= 14, j++)
		{
			if (j <= 10)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
