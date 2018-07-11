#include "holberton.h"

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

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
