#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid: the grid to be freed
 *
 * @height: height of the string
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != 0 || height > 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
