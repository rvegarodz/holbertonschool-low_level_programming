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
#endif
