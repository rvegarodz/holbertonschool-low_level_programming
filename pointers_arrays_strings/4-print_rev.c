#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: pointer to string to reverse
 */
void print_rev(char *s)
{
	int i = 0, j = 0;

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
