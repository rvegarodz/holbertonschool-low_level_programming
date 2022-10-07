#include 'main.h'
/**
 * _isdigit - check for a digit
 * @c: value to check
 * Return: if is digit 1 otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 || c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
