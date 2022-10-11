#include "main.h"
/**
 *
 *
 *
 */
void print_rev(char *s)
{
	int count = 0, i = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	i = count;
	while (s[i] == 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
