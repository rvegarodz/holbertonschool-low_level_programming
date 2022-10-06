#include "main.h"
/**
 * print_last_digit - print last digit of a input
 * @x: value to analize
 * Return: always x (success)
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
