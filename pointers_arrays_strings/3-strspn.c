#include "main.h"
/**
 *
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				j++;
				break;
			}
			else
			{
				j++;
			}
		}
	}
	return (count);
}
