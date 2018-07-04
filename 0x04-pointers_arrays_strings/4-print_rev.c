#include "holberton.h"
#include "2-strlen.c"

/**
 * print_rev - prints string in reverse
 *
 * @s: string to be printed
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i = _strlen(s);
	int k;

	for (k = 1; k <= i; k++)
	{
		_putchar(s[i - k]);
	}
	_putchar('\n');
}
