#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints string
 * @separator: string to be printed
 * @n: number of strings passed to function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *j;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(ptr, char *);
		if (j == NULL)
			printf("(nil)");
		else
			printf("%s", j);
		if (i != n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(ptr);
	printf("\n");
}
