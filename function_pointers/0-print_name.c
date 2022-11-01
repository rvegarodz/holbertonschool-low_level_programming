#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *) = f;
	(ptr)(name);
}
