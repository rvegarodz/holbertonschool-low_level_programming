#include <stdio.h>

/**
 * main - print all numbers of base 16
 * Return: always 0 (success)
*/

int main(void)
{
	int a;
	int b;
	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return 0;	
}
