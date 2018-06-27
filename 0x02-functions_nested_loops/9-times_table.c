#include "holberton.h"

/**
 * times_table - 9x9 table
 *
 * Return: nothing
 */

void times_table(void)
{
	int x;
	int y;
	int k;
	int l;

	for (x = 0; x <= 9; x++)
	{
		l = 0;
		for (y = 0; y <= 9; y++)
		{
			k = x * y;
			l == 0 ? l = 1 : _putchar(',') && _putchar(' ');
			if (k <= 9)
			{
				if (y != 0)
				{
				_putchar(' ');
				}
				_putchar(x * y + '0');
				}
			else
				{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
