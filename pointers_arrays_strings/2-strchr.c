#include "main.h"
/**
 *
 *
 *
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			_putchar(s[i]);
		}
		else if (s[i] != c)
		{
			_putchar('N');
			_putchar('U');
			_putchar('L');
			_putchar('L');
		}
	}
	return (0);
}
