#include "main.h"
/**
 * print_most_numbers -
 * x
 * Return:
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 || num != 4)
			_putchar('0' + num);
	}
}
