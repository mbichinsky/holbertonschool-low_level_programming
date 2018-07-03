#include "holberton.h"

/**
 * swap_int - swaps values of 2 ints
 *
 * @a: int 1
 * @b: int 2
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;

}
