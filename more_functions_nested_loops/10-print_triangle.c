#include "main.h"
/**
 * print_triangle - print a triangle
 * size: size of triangle
 */
void print_triangle(int size)
{
	int i, j, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size == i)
	{
		_putchar('#');
	}
		
	else
	{
		for (i = 1; i <= size; i++)
		{
			if (size == i)
			{
				_putchar('#');
			}
			for (j = 1; j < size; j++)
			{
				for (z = 1; z = j; z++)
				{
					_putchar('#');
				}
				_putchar(' ');
			}
			_putchar('\n');
	}
}
