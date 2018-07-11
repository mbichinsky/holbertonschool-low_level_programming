#include "holberton.h"

/**
 * factorial - function that returns the factorial of a given number
 *
 * @n: number to be factorialized
 *
 * Return: -1 if n < 0, 0 if n == 0, else the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
