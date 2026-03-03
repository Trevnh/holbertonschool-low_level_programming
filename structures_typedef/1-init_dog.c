#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Initialize variable of type struct dog
 * @d: pointer to a dog
 * @name: pointer to name of dog
 * @age: float for age of dog
 * @owner: pointer to owner of dog
 *
 * Return:
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
