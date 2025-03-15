#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize function for struct dog
 * @d: pointer to dog struct
 * @name: char type
 * @age: float type
 * @owner: char type
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

