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
		if (n <= 0)
		{
			min = 0;
		}
		else if (a[y] == '\0')
		{
			min = 0;
		}
		else if (y < min)
		{
			printf("%d, ", a[y]);
		}
		
		else
		{
			printf("%d\n", a[y]);
		}
	}


}
