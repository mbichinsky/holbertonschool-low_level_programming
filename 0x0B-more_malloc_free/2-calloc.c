#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - function that allocates memory for an array
 *
 * @nmemb: data
 *
 * @size: size of data
 *
 * Return: pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pointer = malloc(nmemb * size);

	if (pointer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		pointer[i] = 0;
	}

	return (pointer);
}
