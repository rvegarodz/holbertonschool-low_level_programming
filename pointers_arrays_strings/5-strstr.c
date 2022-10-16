#include "main.h"
/**
 *
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int len, mv1, mv2, count;

	mv2 = 0;
	count = 0;
	
	// Length of the pointer needle
	for (len = 0; needle[len] != '\0'; )
	{
		len++;
	}

	// Length of th pointer needle without null byte
	len = len - 1;

	// Comparison between pointers
	for (mv1 = 0; haystack[mv1] != '\0'; )
	{
		if (haystack[mv1] == needle[mv2])
		{
			while (haystack[mv1] == needle[mv2] && needle[mv2] <= needle[len])
			{
				mv1++;
				mv2++;
				count++;
			}
			if (haystack[mv1] != needle[mv2])
			{
				mv2 = 0;
				count = 0;
			}
			else if (needle[mv2] > needle[len])
				return (haystack[mv1 - mv2])
		}
		else
			mv1++;
	}
	return (0);
}
