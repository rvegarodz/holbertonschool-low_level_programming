#include "main.h"
/**
 * *_memset - fills memory with constante char
 * @s: pointer to memory
 * @b: constant char to add
 * Return: pointer to memory (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
