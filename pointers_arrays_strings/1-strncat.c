#include "main.h"
/**
 * *_strncat - concatenates two string
 * @dest: first string
 * @src: second string
 * @n: bytes from src
 * Return: always dest (success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = 0;
	while (dest[len] != '\0')
		len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
