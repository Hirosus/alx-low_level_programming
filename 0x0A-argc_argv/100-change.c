#include <stdio.h>
#include <stdlib.h>

/**
 * main - that prints the minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 on error, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	while (i > 0)
	{
		j++;
		if ((i - 25) >= 0)
		{
			i -= 25;
			continue;
		}
		if ((i - 10) >= 0)
		{
			i -= 10;
			continue;
		}
		if ((i - 5) >= 0)
		{
			i -= 5;
			continue;
		}
		if ((i - 2) >= 0)
		{
			i -= 2;
			continue;
		}
		i--;
	}
	printf("%d\n", j);

	return (0);
}
