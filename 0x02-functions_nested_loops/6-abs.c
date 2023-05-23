#include "main.h"

/**
 * _abs - Prints an absolute value of an integer
 * @i: the integer to be checked
 *
 * Return: i if greater than or equal to zero, -i if less than 0
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (-i);
	}
}
