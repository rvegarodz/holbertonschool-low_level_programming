#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to string to reverse
 */
void rev_string(char *s)
{
	int i, j, z, temp;
	i = 0, j = 0, z = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	

	while (z < j)
	{
		temp = s[z];
		s[z] = s[j];
		s[j] = temp;
		z++;
		j--;
	}

