#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
if (strlen(s) <= 1)
return (1);
else if (*s != *(s + strlen(s) - 1))
return (0);
else
{
*(s + strlen(s) - 1) = '\0';
return (is_palindrome(s + 1));
}
}
