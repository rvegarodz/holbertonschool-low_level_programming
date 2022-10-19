#include "main.h"
/**
 * *_memcpy - function that copies memory area
 * @dest: pointer to paste
 * @src: pointer to copy
 * @n: bytes from memory
 * Return: always dest (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
