#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 */
void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		if (y < n)
		{
			printf("%d, ", a[y]);
		}
		else
		{
			printf("%d\n", a[y]);
		}
	}

}
