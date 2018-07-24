#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

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
