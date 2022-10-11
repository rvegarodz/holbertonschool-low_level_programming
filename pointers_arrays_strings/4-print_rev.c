#include "main.h"
/**
 *
 *
 *
 */
void print_rev(char *s)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	while (str[count] == 0)
	{
		_putchar(str[count]);
		count--;
	}
	_putchar('\n');
}
