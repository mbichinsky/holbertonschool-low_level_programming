#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Define a new type struct dog with the following:
 *
 * @d: struct
 *
 * @name: dogs name
 *
 * @age: dogs age
 *
 * @owner: owners name
 *
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
