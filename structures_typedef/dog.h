#ifndef DOG_H
#define DOG_H
/**
 * struct dog - define a new struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/**
 * init_dog - initialize struct dog
 * @d: pointer to struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * print_dog - function that print a struct variable
 * @d: pointer to struct variable
 */
void print_dog(struct dog *d);
/**
 * new_dog - function that creates a newi
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
dog_t *new_dog(char *name, float age, char *owner);
/**
 * free_dog - free malloc created
 * @d; pointer to struct
 */
void free_dog(dog_t *d);
#endif
