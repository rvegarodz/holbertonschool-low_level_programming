#include "main.h"
/**
 *
 *
 *
 */
void print_rev(char *s)
{
	int i = 0, j = 0, z = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;

	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
