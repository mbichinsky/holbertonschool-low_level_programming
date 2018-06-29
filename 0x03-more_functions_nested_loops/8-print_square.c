#include "holberton.h"

/**
 * print_square - print a square using #
 *
 * @size: size of the square
 *
 * Return: Nothing.
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (j = 1; j <= size; j++)
		{
			for (i = 1; i <= size; i++)
				_putchar ('#');
				_putchar ('\n');
		}
	}
}
