#include "search_algos.h"

/**
 * binary_search - search for a value in a sorted array
 * using binary search algorithm
 * @array: pointer to first element of the array to search
 * @size: number of elements in array
 * @value: value to search
 * Return: 
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned long int i, midpoint, l_half, r_half;

	i = 0;
	midpoint = size / 2;
	l_half = 0;
	r_half = size;
	
	while (value != array[midpoint - 1])
	{
		/* printing array to search */
	       	printf("Searching in array: ");
		while (i < r_half - 1)
		{
			printf("%i, ", array[i]);
			i++;
		}
		printf("%i\n", array[i]);

		if (value < array[midpoint - 1])
		{
			r_half = midpoint;
			midpoint = r_half / 2;
			i = l_half;
		}

		else if (value > array[midpoint - 1])
		{
			l_half = midpoint;
			midpoint = r_half - l_half / 2;
			i = l_half;
		}

		if (l_half >= r_half)
		{
			return (-1);
		}

	}
	return (midpoint - 1);
}
