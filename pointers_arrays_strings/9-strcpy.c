#include "main.h"
/**
 *
 *
 *
 */
char *_strcpy(char *dest, char *src)
{
	int cpy;

	cpy = 0;

	while (src[cpy] != '\0')
	{
		dest[cpy] = src[cpy];
		cpy++;
	}
	dest[cpy] = '\0';

	return (dest);
}
