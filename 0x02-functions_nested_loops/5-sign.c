#include "holberton.h"

/**
 * print_sign - says if number is pos/neg/zero
 *
 * @n: holds the character for checking
 *
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	int p = 43;
	int i = 45;
	int z = 48;

	if (n > '0')
	{
		_putchar(p);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(z);
		return (0);
	}
	else if (n < '0')
	{
		_putchar(i);
		return (-1);
	}
	return (2);
}

