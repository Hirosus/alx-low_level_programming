#include "main.h"

/**
 * _sqrt_helper - helper function to calculate the square root recursively
 * @n: the number to calculate the square root of
 * @i: the current guess for the square root
 *
 * Return: the natural square root of n or -1 if n does not have one
 */
int _sqrt_helper(int n, int i)
{
if (i * i > n)
return (-1);

if (i * i == n)
return (i);

return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number recursively
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of n or -1 if n does not have one
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (_sqrt_helper(n, 0));
}
