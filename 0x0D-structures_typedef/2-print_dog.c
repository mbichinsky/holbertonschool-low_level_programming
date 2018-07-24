#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the struct dog's information
 *
 * @d: struct dog
 */


void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		printf("Age: %f\n", d->age == NULL ? "(nil)" : d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
