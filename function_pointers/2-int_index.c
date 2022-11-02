#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - function that searches for an integer
 * @array: array of integers
 * @size: length of array
 * @cmp: pointer to function
 * Return: result of function (success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL)
	{
		if (cmp != NULL)
		{
			int (*ptr)(int) = cmp;
			
			for (i = 0; i < size; i++)
			{
				if ((*ptr)(array[i]) != 0)
					return (i);
			}
		}
	}
	return (-1);
}
