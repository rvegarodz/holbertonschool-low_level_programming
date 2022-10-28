#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: starting value of array
 * @max: last value of array
 * Return:
 */
int *array_range(int min, int max)
{
	int *ptr, i, len;

	if (min > max)
		return (NULL);
	else
	{
		if (min == max)
			len = 1;
		else
			len = max - min;
		ptr = malloc(sizeof(int) * len);
		if (ptr == NULL)
			return (NULL);
		for (i = 0; i < len; i++)
		{
			ptr[i] = min + i;
		}
		return (ptr);
	}
}
