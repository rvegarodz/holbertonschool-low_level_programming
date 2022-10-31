#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function that initialize a struct dog
 * @d: pointer to struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr;
	
	ptr = d;
	if (ptr == NULL)
		exit;
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}
