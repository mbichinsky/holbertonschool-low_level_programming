#include "holberton.h"

/**
 * find_prime - finds the prime of n
 *
 * @n: number to be checked for
 *
 * @i: possible prime for n
 *
 * Return: 1 if integer is prime, else 0
 */

int find_prime(int i, int n)
{
	if (i * i == n)
	{
		return (0);
	}
	else if (i * i < n)
	{
		return (find_prime(i + 1, n));
	}
	else if (n < 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - function looks for prime numbers
 *
 * @n: The number to find the prime of
 *
 * Return: find_prime
 */

int is_prime_number(int n)
{
	return (find_prime(0, n));
}
