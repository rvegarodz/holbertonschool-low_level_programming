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
	int *ptr, **array;
	int len = 0;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	len = sizeof(int *) * width + sizeof(int) * height * width;
	array = (int **)malloc(len);

	if (array == NULL)
		return (NULL);
	else
	{
		ptr = (int *)(array + width);
		for (i = 0; i < width; i++)
			array[i] = (ptr + height * i);
		for (i = 0; i < width; i++)
			for (j = 0; j < width; j++)
				array[i][j] = 0;
		return (array);
	}
}
