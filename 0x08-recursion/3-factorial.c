#include "main.h"

/**
 * factorial - calculates the factorial of a number recursively
 * @n: the number to calculate the factorial of
 *
 * Return: the factorial of the number, or -1 if n is less than 0
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
