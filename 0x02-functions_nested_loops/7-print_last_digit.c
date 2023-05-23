#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @n: the integer to extract last digit from
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (n < 0)
	{
	n = -n;
	}

	_putchar ('0' + i);

	return (i);
}
