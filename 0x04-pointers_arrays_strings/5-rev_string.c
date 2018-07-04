#include "holberton.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, j, temp;
	int size = _strlen(s);

	for (i = 0; i < size; i++)
	{
		j = i;
	}
	i = 0;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
