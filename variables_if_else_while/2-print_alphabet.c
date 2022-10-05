#include <stdio.h>

/**
 * main - display de alphabet in lower and upper case with putchar
 * Return: always 0 (success)
*/

int main(void)
{
	int strt = 0;
	for (char az = 'a'; (strt != EOF) && (az != 'z'); az++)
	strt = putchar(az);
	putchar('\n');
	return(0);
}
