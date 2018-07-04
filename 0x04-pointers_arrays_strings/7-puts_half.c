#include "holberton.h"

/**
 * puts_half - prints out the 2nd half of the string
 *
 * @str: string to be segmented and printed
 *
 * Return: Nothing
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

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
