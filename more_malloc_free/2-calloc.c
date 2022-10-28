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
	int *ptr1;
	char *ptr2;
	unsigned int i;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	if (size == sizeof(char))
	{
		ptr2 = malloc(nmemb * size);
		if (ptr2 == NULL)
		{
			free(ptr2);
			return (NULL);
		}
		for (i = 0; i <= (nmemb * size); i++)
			ptr2[i] = '0';
		return (ptr2);
	}
	ptr1 = malloc(nmemb * size);
	if (ptr1 == NULL)
	{
		free(ptr1);
		return(NULL);
	}
	for (i = 0; i<= (nmemb * size); i++)
		ptr1[i] = 0;
	return (ptr1);
}
