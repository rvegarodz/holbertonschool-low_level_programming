#include <stdio.h>

/**
 * main - display de alphabet in lower and upper case with putchar
 * Return: always 0 (success)
*/

int main(void)
{
	int az;
	for (az = 'z'; az >= 'a'; az--)
		putchar(az);
	putchar('\n');
	return 0;	
}
