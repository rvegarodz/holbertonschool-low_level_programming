#include "main.h"

/*
 *print_alphabet_x10 - print alphabet 10 times 
 *
 *Return: void
 *
*/ 
 
void print_alphabet_x10(void)
{
	int times;
	int az;

	for (times = 0, times <= 10, times++);
	{
		for (az = 'a', az <= 'z', az++)
			_putchar(az);
			_putchar('\n');		
	}

}
