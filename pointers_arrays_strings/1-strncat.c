#include "main.h"
/**
 *
 *
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = 0;

	while (dest[len] != '\0')
		len++;

	for (i = 0; i < n; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
