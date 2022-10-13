#include "main.h"
/**
 *
 *
 *
 */
void reverse_array(int *a, int n)
{
	int temp, len, i;

	i = 0;
	len = n - 1;

	while (i < len)
	{
		temp = a[i];
		a[i] = a[len];
		a[len] = temp;
		i++;
		len++;
	}
}
