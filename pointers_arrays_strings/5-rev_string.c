#include "main.h"
/**
 *
 *
 *
 */
void rev_string(char *s)
{
	int i = 0, j = 0, z = 0;
	int temp;
	
	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	

	while (z < 0)
	{
		temp = s[z];
		s[z] = s[j];
		s[j] = temp;
		z++;
		j--;
	}
}
