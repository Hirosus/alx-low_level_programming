#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: width input
 * @height: height input
 *
 * Return: pointer to new array
 */

int **alloc_grid(int width, int height)
{
	int **mee;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		mee[i] = malloc(sizeof(int) * width);

		if (mee[i] == NULL)
		{
			for (; i >= 0; i--)
				free(mee[i]);

			free(mee);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			mee[i][j] = 0;
	}
	return (mee);
}
