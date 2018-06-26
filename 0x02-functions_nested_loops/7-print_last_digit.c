#include "holberton.h"
#include "6-abs.c"

/**
 * print_last_digit- prints last number
 *
 * @n: number
 *
 * Return: nothing
 */

int print_last_digit(int n)
{
	return (_abs(n) % 10);
}
