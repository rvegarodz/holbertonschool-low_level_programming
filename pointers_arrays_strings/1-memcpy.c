#include "main.h"
/**
 *
 *
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int len = 0;
	unsigned int i;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < n; i++)
	{
	dest[len] = src[i];
	len++;
	}
	return (dest);
}
