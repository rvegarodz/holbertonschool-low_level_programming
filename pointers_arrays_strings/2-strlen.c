#include "main.h"
/**
 *
 *
 *
 */
int _strlen(char *s)
{
	char count[] = &s;
	int i;
	
	for (i = 0; count[i] != '\0'; ++i);
	return 0;
}
