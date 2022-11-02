#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
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
