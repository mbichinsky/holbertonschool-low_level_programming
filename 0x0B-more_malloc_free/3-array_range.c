#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - function that creates an array of integers
 *
 * @min: min of memory
 *
 * @max: max of memory
 *
 * Return: pointer to memory
 */

int *array_range(int min, int max)
{
	int *pointer;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	pointer = malloc(sizeof(int) * (max - min + 1));

	if (pointer == NULL)
	{
		return (NULL);
	}

	while (min <= max)
	{
		pointer[i] = min;
		i++;
		min++;
	}

	return (pointer);
}
