#include "main.h"
/**
 *
 *
 *
 */
void print_rev(char *s)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (str[i] >= 0)
	{
		_putchar(str[i]);
		i--
	}
	_putchar('\n');
}
