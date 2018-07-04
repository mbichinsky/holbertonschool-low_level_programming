#include "holberton.h"
#include "2-strlen.c"

/**
 * puts2 - prints out every other character
 *
 * @str: full string to be printed
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int i = _strlen(str);
	int j;

	for (j = 0; j <= i; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar ('\n');
}
