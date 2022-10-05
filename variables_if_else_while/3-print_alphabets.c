#include <stdio.h>

/**
 * main - display de alphabet in lower and upper case with putchar
 * Return: always 0 (success)
*/

int main(void)
{
	int az;
	int upperaz;
	for (az = 'a'; az <= 'z'; az++)
		putchar(az);
	for (upperaz = 'A'; upperaz <= 'Z'; upperaz++)
		putchar(upperaz);
	putchar('\n');
	return 0;	
}
