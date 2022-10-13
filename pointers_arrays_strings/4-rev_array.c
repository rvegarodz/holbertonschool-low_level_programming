#include "main.h"
/**
 *
 *
 *
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	i = 0;
	
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
