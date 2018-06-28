#include "holberton.h"

/**
 * more_numbers - prints 1-14, 10 times
 *
 * Return: Nothing.
 */

void more_numbers(void)
{
	int i, n;

	for (n = 1; n <= 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			int j = i % 10;
			int k = i / 10;

			if (i > 9)
			{
				_putchar(k + '0');
			}
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
