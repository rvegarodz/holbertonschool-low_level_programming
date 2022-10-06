#include "main.h"
/*
 *print_alphabet_x10 - print alphabet 10 times
 *Return: void
*/
void print_alphabet_x10(void)
{
	int times = 9, t;
	int az;

	for (t = 0; t <= times; t++)
	{
	for (az = 'a'; az <= 'z'; az++)	
	_putchar(az);
	_putchar('\n');
	}
}
