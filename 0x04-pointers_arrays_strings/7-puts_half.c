#include "holberton.h"
#include "2-strlen.c"

/**
 * puts_half - prints out the 2nd half of the string
 *
 * @str: string to be segmented and printed
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int length = _strlen(str);
	int i;
	int j;

	if (length % 2 == 0)
	{
		i = length / 2;
		for (j = i; j <= length; j++)
		{
			_putchar(str[j]);
		}
	}

	else
	{
		i = (length + 1) / 2;
		for (j = i; j <= length; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar ('\n');
}
