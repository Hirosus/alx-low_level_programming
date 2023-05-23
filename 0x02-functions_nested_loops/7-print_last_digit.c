#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @n: the integer to extract last digit from
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
	n = -n;
	
	a = (n % 10);
	
	if (a < 0)
	a = -a;

	_putchar ('0' + a);

	return (a);
}
