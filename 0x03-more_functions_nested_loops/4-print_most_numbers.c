#include "holberton.h"

/**
 * print_most_numbers - print 0-9 except 2 and 4
 *
 * Return: Nothing.
 */

void print_most_numbers(void)
{
	int i = 48;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar (i);
		}
	}
	_putchar ('\n');
}
