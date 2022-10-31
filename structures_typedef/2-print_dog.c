#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - print a struct
 * @d: pointer to struct
 */
void print_dog(struct dog *d)
{
	struct dog *ptr;

	if (d != NULL)
	{
		ptr = d;
		printf("Name: %s\n", ptr->name);
		printf("Age: %f\n", ptr->age);
		printf("Owner: %s\n", ptr->owner);
	}
}
