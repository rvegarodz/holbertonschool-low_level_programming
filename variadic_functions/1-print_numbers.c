#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *
 *
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	va_list ptr;

	if (n != 0)
		va_start(ptr, n);
		for (i = 0; i < n; i++)
		{
			j = va_arg(ptr, int);
				printf("%d", j);
			if (separator == NULL)
			{
			}
			else if (i != n - 1)
				printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
