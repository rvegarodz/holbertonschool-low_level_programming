#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements of any array
 * @a: pointer to array
 * @n: number of elements of the arra
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
