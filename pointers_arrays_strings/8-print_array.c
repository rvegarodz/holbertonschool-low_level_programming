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
	int min;

	min = n - 1;

	for (y = 0; y <= min; y++)
	{
		if (y < min)
		{
			printf("%d, ", a[y]);
		}
		
		else
		{
			printf("%d\n", a[y]);
		}
	if (n <= 0)
	{
		printf("\n");
	}
	}


}
