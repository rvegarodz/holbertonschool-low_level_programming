#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power value
 * Return: value of x to power y (success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (x == 0)
		return (0);
	else
		return (x * _pow_recursion(x, y - 1));
}
