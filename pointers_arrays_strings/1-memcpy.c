#include "main.h"
/**
 *
 *
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int ln = 0;
	unsigned int i;

	while (dest[ln] != '\0')
	{
		ln++;
	}

	for (i = 0; i < n; i++)
	{
		dest[ln] = src[i];
		ln++;
	}
	return (dest);
}
