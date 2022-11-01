#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free (new_dog);
		return (NULL);
	}
	else
	{
		new_dog->name = malloc(sizeof(name) * strlen(name));
		if (new_dog->name == NULL)
		{
			free (new_dog->name);
			return (NULL);
		}
		new_dog->owner = malloc(sizeof(owner) * strlen(owner));
		if (new_dog->owner == NULL)
		{
			free (new_dog->owner);
			return (NULL);
		}
	}
	strcpy(new_dog->name, name);
	new_dog->age = age;
	strcpy(new_dog->owner, owner);
	return (new_dog);
}
