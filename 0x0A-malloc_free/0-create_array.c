#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 *
 * @size: size of the array
 *
 * @c: specific char to be initialized
 *
 * Return: NULL if 0 or fails else pointer
 */

char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	pointer = malloc(sizeof(c) * size);
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		pointer[i] = c;
	}
	return (pointer);
}
