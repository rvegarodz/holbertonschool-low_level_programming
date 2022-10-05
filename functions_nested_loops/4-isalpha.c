#include "main.h"

/**
 * _isalpha - check for alphabetic characters
 * @c: c is any character
 * Return: always 1 (success)
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
