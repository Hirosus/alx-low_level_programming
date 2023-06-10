#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Always success)
 */

int main(int __atrribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", *argv[0]);

	return (0);
}
