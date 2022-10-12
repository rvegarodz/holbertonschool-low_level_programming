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
	
	len = len - 1;
	
	if (len % 2 == 0)
	{
		for (hlf = len / 2; str[hlf] != '\0'; hlf++)
		{
			_putchar(str[hlf]);
		}
	}
	else
	{
		n = len / 2;
		_putchar(n);
	}
	_putchar('\n');
}
