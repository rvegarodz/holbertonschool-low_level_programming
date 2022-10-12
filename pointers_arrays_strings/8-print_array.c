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
		printf("%d", a[y]);
		if (y < (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
