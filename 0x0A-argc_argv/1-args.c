#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Always success)
 */

int main(int __atrribute__((__unused__)) argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
