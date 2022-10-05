#include "main.h"
/**
 * f
 * f
 * f
 * f
 */
int print_last_digit(int x)
{
	int result, digit;

	result = (x) * (((x > 0) << 1) - 1);
	digit = result % 10;
	_putchar('0' + digit);

	return (0);
}
