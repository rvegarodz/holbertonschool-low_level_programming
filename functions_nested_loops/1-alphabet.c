#include "main.h"

/**
 * print_alphabet - display de alphabet in lower and upper case with putchar
 * 
 * Return: always 0 (success)
 *
*/

void print_alphabet(void)
{
	int az;
	for (az = 'a'; az <= 'z'; az++)
		_putchar(az);
	_putchar('\n');	
}
