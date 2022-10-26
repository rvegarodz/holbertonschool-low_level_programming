#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
int **alloc_grid(int width, int height)
{
	unsigned int *array_2d, *y, *x;
	int **array_2d_p, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	y = malloc(sizeof(int) * width);
	x = malloc(sizeof(int) * height);

	if (y == NULL || x == NULL)
		return (NULL);
	for (j = 0; j <= height; j++)
	{
		for (i = 0; i <= width; i++)
		{
			array_2d[j][i] = 0;
		}
	}
	array_2d_p = *array_2d;
	return (array_2d_p);
}
