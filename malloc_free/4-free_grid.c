#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = height; i >= 0; i--)
		free(grid[i]);
	free(grid);
}
