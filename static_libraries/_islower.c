#include "main.h"

/**
 * _islower - print for lowercase characters
 * @c: c is any lowercase letter
 * Return: always 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
