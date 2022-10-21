#include <stdio.h>
#include <stdlib.h>
/**
 * main - print program name
 * @argc: number of arguments
 * @argv: arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int x, y, mult;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	       	x = atoi(argv[1]);
		y = atoi(argv[2]);

		mult = (x * y);

		printf("%d\n", mult);
	}
	return (0);
}
