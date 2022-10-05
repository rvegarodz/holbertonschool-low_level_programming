#include "main.h"

/*
 *print_alphabet_x10 - print alphabet 10 times 
 *
 *Return: void
 *
*/ 
 
void print_alphabet_x10(void)
{
	int times

	for (times = 0, times <= 10, times++)
	{
		print_alphabet();
		_putchar("\n");
	}
}
