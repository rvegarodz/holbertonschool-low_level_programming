#include "main.h"
/**
 * print_square - print hashtag
 * @i: num of print by line
 * @j: num of print
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
