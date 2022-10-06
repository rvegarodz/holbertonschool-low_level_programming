#include "main.h"
/**
 * _abs - compute absolute value of an integer
 * @x: number to estimate
 * Return: always 0 (success)
 */
int _abs(int x)
{
	return ((x) * (((x > 0) << 1) - 1));
}
