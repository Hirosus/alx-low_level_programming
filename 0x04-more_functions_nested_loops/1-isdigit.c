#include "main.h"

/**
 * _isdigit - checks for digit from 0 to 9
 * @c: the number  being checked
 *
 * Return: 1 if number is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
