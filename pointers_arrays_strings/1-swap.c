#include "main.h"
/**
 * swap_int - function that swaps the values
 * @a: first value to change
 * @b: second value to change
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
