#include "holberton.h"

/**
 * print_diagonal - prints diagonal lines
 *
 * @n: number of diagonal lines
 *
 * Return: Nothing.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (i > j)
				_putchar (32);
				else if (i == j)
				_putchar (92);
			}
			_putchar ('\n');
		}
	}
	else
	_putchar ('\n');
}
