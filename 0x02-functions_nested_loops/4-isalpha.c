#include "main.h"

/**
 * _isalpha - checks for alphabetic characters.
 * @c: the character being checked
 *
 * Return: 1 if c is an alphabetic character, 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
