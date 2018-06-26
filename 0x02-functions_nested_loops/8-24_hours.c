#include "holberton.h"

/**
 * jack_bauer - every minute of the day
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(58);
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
