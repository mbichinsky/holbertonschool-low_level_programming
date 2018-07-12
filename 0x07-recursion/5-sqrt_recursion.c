#include "holberton.h"

/**
 * find_sqroot - finds the square root of n
 *
 * @n: number to be checked for
 *
 * @i: possible square root for n
 *
 * Return: square root of n or -1
 */

int find_sqroot(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i <= n)
	{
		return (find_sqroot(i + 1, n));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *
 * @n: number to be checked for square root
 *
 * Return: -1 if n doesnt have natural square root, else the square root
 */

int _sqrt_recursion(int n)
{
	return (find_sqroot(0, n));
}
