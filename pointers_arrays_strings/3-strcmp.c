#include "main.h"
/**
 * _strcmp - compares two string
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: if are the same 0 otherwise negative or positive value
 */
int _strcmp(char *s1, char *s2)
{
	int flag, i;

	flag = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = 1;
		}
	}
	if (s1[i] != '\0' || s2[i] != '\0')
		return 1;
	if (flag == 0)
		return (0);
	else
		return (1);
}
