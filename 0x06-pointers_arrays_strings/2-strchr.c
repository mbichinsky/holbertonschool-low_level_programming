#include "holberton.h"
#include "_strlen.c"

/**
 * _strchr - locates a character in a string
 *
 * @c: character to be located
 *
 * @s: string
 *
 * Return: pointer to first char c or null
 */

char *_strchr(char *s, char c)
	{
	int i = 0;
	int j = _strlen(s);

	for (; i <= j; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
