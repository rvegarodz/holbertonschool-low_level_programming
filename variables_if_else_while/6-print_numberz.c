#include <stdio.h>

/**
 * main - print numbers of base 10
 * Return: always 0 (success)
*/

int main(void)
{
	int abc;
	for (abc = '0'; abc <= '9'; abc++)
		putchar(abc);
	putchar('\n');
	return 0;	
}
