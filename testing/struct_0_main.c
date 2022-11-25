#include"main.h"
#include <stdlib.h>
#include <stdio.h>

struct User
{
        char *name;
        char *email;
        int age;
};

int main(void)
{
	struct User *user;

	user = new_user("Foo", "foo@foo.bar", 98);
	if (user == NULL)
		return (1);
	printf("User %s created!\n", user->name);
	printf("His email is: %s\n", user->email);
	printf("And he is %d years old\n", user->age);
	return (0);
}
