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
	int i, j, sum_base, sum;

	for (i = 1; i < argc; i++)
	{
		if (!(atoi(argv[i]) < 0) || !(atoi(argv[i]) > 9))
		{
			printf("Error\n");
			return (1);
		}
	}
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		i = 1;
		j = 2;
		sum_base = atoi(argv[i]) + atoi(argv[j]);
		
		if (argc > j)
		{
			j++;
			for ( ; j < argc; j++)
			{
				sum = sum_base + atoi(argv[j]);
				sum_base = sum;
			}

		}
		printf("%d\n", sum_base);
		return (0);
	}
}
