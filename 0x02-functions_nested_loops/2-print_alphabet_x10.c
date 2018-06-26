#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet, lowercase, 10 times
 *
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char i = 97;
	int j = 0;

	for (j = 0; j <= 9; j++)
	{
		for (i = 97; i <= 122; i++)
		{
		_putchar(i);
		}
		_putchar('\n');
	}
}
