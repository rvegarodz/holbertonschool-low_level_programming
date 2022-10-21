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
        int i, sum;

	i = 1;

        if (argc == 1)
        {
                printf("0\n");
                return (0);
        }
	else
	{
		if (argc > i)
                {
			for (i = 1; i < argc; i++)
                        {
				sum += atoi(argv[i]);
			}
                }
                printf("%d\n", sum);
		return (0);
        }
}

