#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_gri - returns pointer to a 2d array
 * @width: number of rows
 * @height: number of columns
 * Return: pointer array (success)
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));

		if (array[i] == NULL)
		{
			while (i >= 0)
			{
				free(array[i]);
				i--;
			}
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	return (array);
}
