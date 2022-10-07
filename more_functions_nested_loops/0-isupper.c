#include "main.h"
/**
 * _isupper - check uppercase letter
 * @c: letter to check
 * Return: if uppercase 1 otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
