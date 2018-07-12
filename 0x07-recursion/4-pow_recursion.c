#include "holberton.h"

/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y
 *
 * @x: number
 *
 * @y: power
 *
 * Return: if y < 0 (-1), if y = 0 (1), else x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
