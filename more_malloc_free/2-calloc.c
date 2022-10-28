#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr2;
	unsigned int *ptr1, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (size == sizeof(char))
	{
		ptr2 = malloc(nmemb * size);
		if (ptr2 == NULL)
			return (NULL);
		for (i = 0; i < nmemb; i++)
			ptr2[i] = '0';
		return (ptr2);
	}
	else
	{
		ptr1 = malloc(nmemb * size);
		if (ptr1 == NULL)
			return(NULL);
		for (i = 0; i < nmemb; i++)
			ptr1[i] = 0;
		return (ptr1);
	}
}
