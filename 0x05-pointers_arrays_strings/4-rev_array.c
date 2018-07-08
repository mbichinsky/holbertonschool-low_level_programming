#include "holberton.h"

/**
 * reverse_array - reverses an array
 *
 * @a: array to be reversed
 *
 * @n: number of elements in the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int end;
	int temp;

	for (end = 0; end < n / 2; end++)
	{
		temp = a[n - end - 1];
		a[n - end - 1] = a[end];
		a[end] = temp;
	}
}
