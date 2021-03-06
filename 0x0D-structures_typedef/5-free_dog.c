#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees memory used by dog struct
 *
 * @d: dog struct
 */


void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
