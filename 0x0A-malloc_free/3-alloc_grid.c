#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers
 *
 * @width: width of the string
 *
 * @height: height of the string
 *
 * Return: NULL on fail or if height/ width are zero. else 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0 || array == NULL)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			while (i--)
			{
				free(array[i]);
			}
			free(array);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
