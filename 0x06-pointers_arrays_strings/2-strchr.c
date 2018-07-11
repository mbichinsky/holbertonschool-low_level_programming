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
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
		{
			break;			
			return (s[i]);
		}
		else
		{
			return (NULL);
		}
}
