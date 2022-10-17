#include "main.h"

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
		_putchar('\n');
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
