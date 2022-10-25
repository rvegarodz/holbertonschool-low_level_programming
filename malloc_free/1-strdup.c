#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	char *array;
	unsigned int i;
	unsigned int length = strlen(str);
	
	array = malloc( length );

	for (i = 0; i < length; i++)
	{
		array[i] = str[i];
	}

	return (array);
}
