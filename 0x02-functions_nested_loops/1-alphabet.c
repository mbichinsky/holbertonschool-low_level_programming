#include "holberton.h"

/**
 * print_alphabet - print alphabet, lowercase
 *
 * Return: Nothing.
 */

void print_alphabet(void)
{

	int i = 0;
	char alphabet[] = "a..z";

	for (i = 0; i <= 25; i++)
	{
		_putchar(alphabet[i]);
	}
	_putchar ('\n');
}
