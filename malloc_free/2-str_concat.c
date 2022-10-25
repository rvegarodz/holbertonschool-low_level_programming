#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two string
 * @s1: string one
 * @s2: string two
 * Return: pointer to new string (success)
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	unsigned int length1 = strlen(s1);
	unsigned int length2 = strlen(s2);
	unsigned int i, j;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	array = malloc(length1 + (length2 + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
	{
		array[i] = s1[i];
	}
	for (j = 0; j < length2; j++)
	{
		array[length1] = s2[j];
		length1++;
	}
	return (array);
}
