#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	unsigned long int i, left, right, mid;

	i = 0;
	left = 0;
	right = size -1;

	while (left <= right)
	{
		/*print */

                printf("Searching in array: ");
                while (i < right)
                {
                        printf("%i, ", array[i]);
                        i++;
                }
                printf("%i\n", array[i]);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
		{
			left = mid + 1;
			i = left;
		}
		else
		{
			right = mid - 1;
			i = left;
		}
	}
	return (-1);
}
