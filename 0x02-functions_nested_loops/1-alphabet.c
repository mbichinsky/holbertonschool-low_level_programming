#include "holberton.h"

/**
 * print_alphabet - print alphabet, lowercase
 *
 * Return: Nothing.
 */

void print_alphabet(void)
{

	char i = 97;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar ('\n');
}
