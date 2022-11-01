#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 *
 *
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int long i;

	if (action != NULL)
	{
		void (*ptr)(int) = action;
		if (array != NULL)
			for (i = 0; i < size; i++)
				(*ptr)(array[i]);
	}
}
