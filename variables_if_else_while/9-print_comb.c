#include <stdio.h>
/**
 * main - display de alphabet in lower and upper case with putchar
 * Return: always 0 (success)
*/
int main(void)
{
	int n;
	
	for (n = 0; n <= 9; n++)	
	{
		putchar((n % 10) + '0');
		if (n == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
