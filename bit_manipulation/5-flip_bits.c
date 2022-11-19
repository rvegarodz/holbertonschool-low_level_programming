#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int c = n ^ m;

	while (c > 0)
	{
		count++;
		c &= (c - 1);
	}

	return (count);
}
