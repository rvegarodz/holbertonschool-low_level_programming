#include "stdio.h"
/**
 * main - print program name
 * @argc: number of arguments
 * @argv: arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[0]);
		break;
	}
	return (0);
}
