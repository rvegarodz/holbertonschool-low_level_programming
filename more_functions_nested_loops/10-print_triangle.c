#include "main.h"
/**
 * print_triangle - print a triangle
 * size: size of triangle
 */
void print_triangle(int size)
{
	int i, j, z;
	int count = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j < count; j++)
			{
				_putchar(' ');
			}
			for (z = 1; z <= i; z++)
			{
				_putchar('#');
			}
			count--;
			_putchar('\n');
		}
}
