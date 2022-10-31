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
		if (ptr->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", ptr->name);
		if (ptr->age == NULL)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", ptr->age);
		if (ptr->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", ptr->owner);
	}
}
