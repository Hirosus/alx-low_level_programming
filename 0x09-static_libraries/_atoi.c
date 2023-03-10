#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int n = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	while (*s)
	{
		if (_isdigit(*s))
		{
			n = n * 10 + (*s - '0');
		}
		else
		{
			break;
		}

		s++;
	}

	return (n * sign);
}
