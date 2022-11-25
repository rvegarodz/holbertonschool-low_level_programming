#include "main.h"
#include <stdlib.h>

struct User
{
	char *name;
	char *email;
	int age;
};

struct User *new_user(char *name, char *email, int age)
{
        struct User *user;

        user = malloc(sizeof(struct User));
        if (user == NULL)
                return (NULL);
        user->name = name;
        user->email = email;
        user->age = age;
        return (user);
}
