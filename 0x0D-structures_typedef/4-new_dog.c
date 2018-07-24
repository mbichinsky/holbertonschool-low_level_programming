#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include "_strdup.c"

/**
 * new_dog - function that creates a new dog
 *
 * @name: new dogs name
 *
 * @age: new dogs age
 *
 * @owner: new dogs owner
 *
 * Return: NULL if fails else pointer to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *old_name, *old_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	newdog = malloc(sizeof(dog_t));
	old_name = _strdup(name);
	old_owner = _strdup(owner);

	if (newdog == NULL)
	{
		return (NULL);
	}

	if (old_name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	if (old_owner == NULL)
	{
		free(newdog);
		free(old_name);
		return (NULL);
	}

	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);
}
