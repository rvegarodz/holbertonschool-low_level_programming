#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - pointer to copy of string
 * @str: string to copy
 * Return: array (success)
 */
char *_strdup(char *str)
{
	char *array;
	unsigned int i;
	unsigned int length = strlen(str);

	if (str == NULL)
		return (NULL);
	array = malloc(sizeof(char) * (length + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		array[i] = str[i];
	return (array);	
}
