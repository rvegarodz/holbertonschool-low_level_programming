#include "main.h"
/**
 *
 *
 *
 */
void puts_half(char *str)
{
	int len, hlf, n;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	
	if (len % 2 == 0)
	{
		for (hlf = len / 2; str[hlf] != '\0'; hlf++)
		{
			_putchar(str[hlf]);
		}
	}
	else
	{
		for (n = (len + 1) / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
