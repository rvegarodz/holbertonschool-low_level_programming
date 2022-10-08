#include "main.h"
/**
 * more_numbers -
 * @num:
 * Return:
 */
void more_numbers(void)
{
	int i, num;

	for (i = 0; i <= 10; i++)
	{
		for (num = 0; num <= 14; num++)
			{
				_putchar('0' + num);
			}
		_putchar('\n');
	}
	_putchar('\n');
}
