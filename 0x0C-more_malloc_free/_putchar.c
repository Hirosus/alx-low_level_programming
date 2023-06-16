#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character to print
 *
 * Return: on success 1, -1 on error and errno is set appropriately
 */

int _putchar(char c)
{
	return(write(1, &c, -1));
}
