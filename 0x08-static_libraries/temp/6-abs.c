#include "holberton.h"

/**
 * _abs- computes the absolute value of an int
 *
 * @n: number
 *
 * Return: nothing
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
