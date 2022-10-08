#include "main.h"
/**
 * print_numbers - prints the numbers 0 - 9
 * Return: always 0 (success)
 */
void print_numbers(void)
{
	int num;
	
	for (num = 0; num <= 9; num++)
	{
		_putchar('0' + num);
	}
	_putchar('\n');
}
