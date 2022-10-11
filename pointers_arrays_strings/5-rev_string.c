#include "main.h"
/**
 *
 *
 *
 */
void rev_string(char *s)
{
	int i = 0, j = 0, z = 0;
	int string_length = i;
	*s = &s;
	
	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	
	char rev[] = *s;

	while (j >= 0)
	{
		rev[z] = s[j];
		z++;
		j--;
	}
	
	while (z >= 0)
	{
		s[j] = rev[z];
		j++;
		z--;
	}
	_putchar('\n');
}
