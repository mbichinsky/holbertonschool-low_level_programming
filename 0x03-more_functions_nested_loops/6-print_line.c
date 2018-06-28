#include "holberton.h"

/**
 * print_line - prints a line
 *
 * @n: number of times the character _ should print
 *
 * Return: Nothing.
 */

void print_line(int n)
{
	int i = 1;

	for (; i <= n; i++)
	{
		_putchar (95);
	}
	_putchar ('\n');
}
