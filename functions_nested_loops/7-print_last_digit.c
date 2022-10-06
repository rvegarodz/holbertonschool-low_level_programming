#include "main.h"
/**
 * f
 * f
 * f
 * f
 */
int print_last_digit(int x)
{
	x = x % 10;
	
	if (x < 0)
	{
		x = (-1) * x;
	}

	_putchar('0' + x);
	return (x);
}
