#include "holberton.h"
#include <stdio.h>

/**
 * print_array - holds the array to be printed
 *
 * @a: array
 *
 * @n: number of elements in the array
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar ('\n');
}
