#include <stdio.h>

/**
 *main - create a new user
 *
 *Return: (0) Success
 */

struct user
{
	char *name;
	char *email;
	int age;
};


struct user *new_user(char *name, char *email, int age);

int main(void)
{
	struct user *create;

	create = new_user("Joe", "kojo@gmail.com", 27);

	if (create == NULL)
		return (1);
	printf("User name: %s\n", create -> name);
	printf("User email: %s\n", create -> email);
	printf("User age: %d\n", create -> age);
	printf("Account for %s succesfully created\n", create -> name);
	return (0);
}


struct user *new_user(char *name, char *email, int age)
{
	struct user new;
	struct user *User;

	User = &new;

	User -> name = name;
	User -> email = email;
	User -> age = age;

	return (User);
}
