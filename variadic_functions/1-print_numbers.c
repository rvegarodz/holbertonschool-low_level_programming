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
	unsigned int i;
	va_list ptr;
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", ptr);
		if (i != n - 1)
			printf("%s", separator);
	}
	va_end(ptr);
}
