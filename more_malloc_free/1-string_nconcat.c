#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of second string to concatenates
 * Return: pointer to new string (success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, len1, len2;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = strlen(s2);
	if (n >= len2)
		n = len2;
	else
	{
		ptr = malloc(sizeof(char) * (len1 + n + 1));
		if (ptr == NULL)
			return (NULL);
		for (i = 0; i <= len1; i++)
			ptr[i] = s1[i];
			
		for (i = 0; i < n; i++)
			ptr[len1 + i] = s2[i];
	}
	ptr[len1 + n + 1] = '\0';
	return (ptr);
}
