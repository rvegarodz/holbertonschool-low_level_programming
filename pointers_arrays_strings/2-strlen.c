#include "main.h"
/**
 *
 *
 *
 */
int _strlen(char *s)
{
	int count = 0, i = 0;
	
	while (s[i] != '\0')
	{
		i++;
		count++;
	}
	return (count);
}
