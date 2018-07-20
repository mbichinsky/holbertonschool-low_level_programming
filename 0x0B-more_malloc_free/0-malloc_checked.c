#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of memory
 *
 * Return: 98
 */

void *malloc_checked(unsigned int b)
{
	void *pb;

	pb = malloc(b);

	if (pb == NULL)
	{
		exit(98);
	}

	return (pb);
}
