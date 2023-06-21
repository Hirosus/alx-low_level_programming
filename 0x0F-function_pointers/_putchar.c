#include <unsitd.h>
#include "function_pointers.h"

/**
 * _putchar - writes c to stdout
 * @c: the character to print
 *
 * Return: 1 on success and -1 on error and errno is set appropriately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
