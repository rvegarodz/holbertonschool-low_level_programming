#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * @name: pointer to string to print
 * @f: function to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		void (*ptr)(char *) = f;
		(*ptr)(name);
	}
}
