#include "main.h"
/**
 *
 *
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return -1;
	else if (y == 0)
		return 1;
	else if (x == 0)
		return 0;
	else
		return (x * _pow_recursion(x, y - 1));
}
