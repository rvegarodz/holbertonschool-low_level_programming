#include "main.h"
/**
 * main - program that copies the content of a file to another file
 * Return: 0 if (success)
 */
int main(int argc, char *argv[])
{
	FILE *fp1, *fp2;
	char c;

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	fp1 = fopen(argv[1], "r");
	if (fp1 == NULL)
	{
		printf("Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	fp2 = fopen(argv[2], "w");
	if (fp2 == NULL)
	{
		printf("Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99);
	}
	while ((c = fgetc(fp1)) != EOF)
	{
		fputc(c, fp2);
	}
	fclose(fp1);
	fclose(ft);
	return (0);
}
