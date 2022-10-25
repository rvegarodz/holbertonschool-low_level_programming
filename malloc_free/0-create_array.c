#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - function that creates an array of chars and initializes char
 * @size: size of the array
 * @c: char to initializes array
 * Return: null byte or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
		return (array);
	}
}
