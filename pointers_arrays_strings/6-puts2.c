#include "main.h"
/**
 *
 *
 *
 */
void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		str++;
	}
	_putchar('\n');
}
