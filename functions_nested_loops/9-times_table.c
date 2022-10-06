#include "main.h"
/**
 * 
 *
 *
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');

		for (y = 0; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');

			z = x * y;

			if (z <= 9)
				_putchar(' ');
			else
				_putchar('0' + (z / 10));

			_putchar('0' + (z % 10));
		}
		_putchar('\n');
	}
}
