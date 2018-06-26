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
	int i = n % 10;

	if (i < 0)
	{
		i = _abs(i);
	}
	_putchar (i + '0');
	return (i);
}
