#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog information
 * @name: Name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Dog information
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/*
 * Functions
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
